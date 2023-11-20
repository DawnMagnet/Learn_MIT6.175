package lab;
module lab ();
    GCD gcd <- mkGCD();
    Fifo#(1, Bit#(32)) inQ <- mkFifo();
    Fifo#(1, Bit#(32)) outQ <- mkFifo();

    rule invokeGCD;
        if (inQ.notEmpty && !gcd.busy) begin
            gcd.start(inQ.first, 5);
            inQ.deq;
        end
    endrule

    rule getResult;
        if (outQ.notFull && gcd.ready) begin
            Bit#(32) x <- gcd.getResult;
            outQ.enq(x);
        end
    endrule
endmodule
interface Counter;
    method Action inc;
    method Bit#(2) read;
endinterface
module moduloCounter(Counter);
    Reg#(Bit#(2)) cnt <- mkReg(0);
    rule cct;
        cnt <={cnt[1] ^ cnt[0], ~cnt[0]};
    endrule
    method Action inc;
        cnt <={cnt[1] ^ cnt[0], ~cnt[0]};
    endmethod

    method Bit#(2) read;
        return cnt;
    endmethod
endmodule

interface GCD;
    method Action start (Bit#(32) a, Bit#(32) b);
    method ActionValue#(Bit#(32)) getResult;
    method Bool busy;
    method Bool ready;
endinterface

module mkGCD(GCD);
    Reg#(Bit#(32)) x <- mkReg(0);
    Reg#(Bit#(32)) y <- mkReg(0);
    Reg#(Bool) busy_flag <- mkReg(False);

    rule gcd;
        if (x != 0) begin
            x <= y;
            y <= x % y;
        end
        // if (x >= y) begin
        //     x <= x - y;
        // end else if (x != 0) begin
        //     x <= y;
        //     y <= x;
        // end
    endrule

    method Action start(Bit#(32) a, Bit#(32) b);
        x <= a;
        y <= b;
        busy_flag <= True;
    endmethod

    method ActionValue#(Bit#(32)) getResult;
        busy_flag <= False;
        return y;
    endmethod

    method busy = busy_flag;
    method ready = x == 0;
endmodule


interface Fifo#(numeric type size, type t);
    method Bool notFull;
    method Bool notEmpty;
    method Action enq(t x);
    method Action deq;
    method t first;
endinterface

module mkFifo(Fifo#(1, t)) provisos (Bits#(t, 32));
    Reg#(t)    d <- mkRegU;
    Reg#(Bool) v <- mkReg(False);
    method Bool notFull;
        return !v;
    endmethod
    method Bool notEmpty;
        return v;
    endmethod
    method Action enq(t x);
        v <= True;
        d <= x;
    endmethod
    method Action deq;
        v <= False;
    endmethod
    method t first;
        return d;
    endmethod
endmodule

    
            

endpackage