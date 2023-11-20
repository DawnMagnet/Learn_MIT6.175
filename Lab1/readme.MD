# LAB 1

在这个实验中主要是熟悉 bluespecv 的基本语法使用

感觉跟 C 语言区别不大

## EXERCISE 1

```verilog
function Bit#(1) multiplexer1(Bit#(1) sel, Bit#(1) a, Bit#(1) b);
    return or1(and1(not1(sel),a), and1(sel,b));
endfunction
```

就是通过逻辑门电路来搭建逻辑，实际上与下面的逻辑是一样的

```verilog
function Bit#(1) multiplelexer1(Bit#(1) sel, Bit#(1) a, Bit#(1) b);
    return (sel == 0) ? a : b;
endfunction
```

## EXERCISE 2

一个 FOR 循环，将所有的位都选择一次

```verilog
function Bit#(5) multiplexer5(Bit#(1) sel, Bit#(5) a, Bit#(5) b);
    Bit#(5) c = 0;
    for (Integer i = 0; i < 5; i = i + 1) begin
        c[i] = multiplexer1(sel, a[i], b[i]);
    end
    return c;
endfunction
```

## EXERCISE 3

对 E2 的函数略作更改，把数字替换成了 N，类似 C++ 里面的模板函数

```verilog
function Bit#(n) multiplexer_n(Bit#(1) sel, Bit#(n) a, Bit#(n) b);
    Bit#(n) c = 0;
    for (Integer i = 0; i < valueOf(n); i = i + 1) begin
        c[i] = multiplexer1(sel, a[i], b[i]);
    end
    return c;
endfunction
```

## EXERCISE 4

就是加法进位原理

```verilog
function Bit#(5) add4(Bit#(4) x, Bit#(4) y, Bit#(1) c0);
    Bit#(4) s;
    Bit#(1) c = c0;

    for (Integer i = 0; i < 4; i = i + 1)
    begin
        s[i] = fa_sum(x[i], y[i], c);
        c = fa_carry(x[i], y[i], c);
    end

    return {c, s};
endfunction
```

## EXERCISE 5

就是把两个 add4 连在一起

```verilog
method ActionValue#(Bit#(9)) sum(Bit#(8) a,Bit#(8) b,Bit#(1) c_in);
    let low = add4(a[3:0], b[3:0], c_in);
    let high = add4(a[7:4], b[7:4], low[4]);
    return { high, low[3:0] };
endmethod
```

## EXERCISE 6

这里很奇怪，我感觉官方的意思是想让我们实现一个类似于 C/C++中的 >> 运算符
但是他用的方式很绕，先是给你一个`shiftRightPow2`函数，功能是 >> (1 << x)，然后再遍历一个二进制数字的各个位，分别进行右移。

我感觉这里如果是我自己设计的话，肯定会先设计一个 Bit 转 Int 的函数，然后直接调用这个函数进行转换，最后右移，不会这么绕。

```verilog
function Bit#(32) barrelShifterRight(Bit#(32) in, Bit#(5) shiftBy);
    Vector#(6, Bit#(32)) vec;
    vec[0] = in;
    for(Integer i = 0; i < 5; i = i + 1) begin
        vec[i + 1] = shiftRightPow2(shiftBy[i], vec[i], i);
    end
    return vec[5];
endfunction
```
