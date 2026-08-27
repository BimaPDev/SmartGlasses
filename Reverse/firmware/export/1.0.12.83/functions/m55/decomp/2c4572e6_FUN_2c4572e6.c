/* FUN_2c4572e6 @ 0x2c4572e6 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c4572e6(int param_1,undefined4 param_2,int param_3)

{
  uint unaff_r4;
  uint *unaff_r6;
  uint unaff_r7;
  undefined4 unaff_pc;
  undefined4 in_cr11;
  
  coprocessor_load(6,in_cr11,unaff_pc);
  *unaff_r6 = (uint)*(byte *)(unaff_r7 + param_1);
  unaff_r6[1] = param_3 + 0x8b;
  unaff_r6[2] = unaff_r4;
  unaff_r6[3] = unaff_r7;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

