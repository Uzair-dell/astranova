; Astranova compiled module
target triple = "x86_64-pc-windows-gnu"

declare void @world_print(i8*)


define double @main() {
entry:
  frac0 = fdiv double 4.0000000000e0, 3.0000000000e0
  binop1 = fmul double frac0, 3.1415926536e0
  binop2 = call double @llvm.pow.f64(double 5.0000000000e0, double 3.0000000000e0)
  binop3 = fmul double binop1, binop2
  ret double binop3

}
