package lab;
module lab ();
    rule main;
        $display("Hello World!");
        $finish;
    endrule
endmodule

function Data alu(Data a, Data b, AluFunc func);
    Data res = case(func)
        Add : addN(a,b);
        Sub : subN(a,b);
        And : andN(a,b);
        Or : orN(a,b);
        Xor : xorN(a,b);
        Nor : norN(a,b);
        Slt : zeroExtend(pack(signedLT(a,b)));
        Sltu : zeroExtend(pack(lt(a,b)));
        LShift: shiftLeft(a,b[4:0]);
        RShift: shiftRight(a,b[4:0]);
        Sra : signedShiftRight(a,b[4:0]);
    endcase;
    return res;
endfunction

function Bool aluBr(Data a, Data b, BrFunc brFunc);
    Bool brTaken = case(brFunc)
        Eq : (a == b);
        Neq : (a != b);
        Le : signedLE(a,b);
        Lt : signedLT(a,b);
        Ge : signedGE(a,b);
        Gt : signedGT(a,b);
        AT : True;
        NT : False;
    endcase;
    return brTaken;
endfunction

typedef enum {Red, Blue, Green} 
Color deriving(Bits, Eq);

typedef enum {Add, Sub, And, Xor, Nor, Slt, Sltu, LShift, RShift, Sra} 
AluFunc deriving(Bits, Eq);

typedef enum {Eq, Neq, Le, Lt, Ge, Gt, AT, NT} 
BrFunc deriving(Bits, Eq);

endpackage