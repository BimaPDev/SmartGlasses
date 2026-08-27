/* FUN_2c2c0722 @ 0x2c2c0722 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c2c0722(undefined4 param_1,int *param_2,undefined4 param_3)

{
  undefined1 in_q1 [16];
  undefined1 in_q12 [16];
  
  PolynomialMultiply(in_q12,in_q1,1);
  *(undefined4 *)((int)param_2 + 0x2b) = param_3;
  *param_2 = (int)&stack0x00000008;
  sRam2c2c0b4c = -(short)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

