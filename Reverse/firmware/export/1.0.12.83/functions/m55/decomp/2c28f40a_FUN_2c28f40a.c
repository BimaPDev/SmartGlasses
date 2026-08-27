/* FUN_2c28f40a @ 0x2c28f40a */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c28f40a(int param_1,uint param_2,uint param_3,uint param_4)

{
  uint unaff_r4;
  uint unaff_r6;
  uint *unaff_r7;
  
  *unaff_r7 = (uint)*(byte *)(param_1 + 8);
  unaff_r7[1] = param_2;
  unaff_r7[2] = param_3;
  unaff_r7[3] = param_4;
  unaff_r7[4] = unaff_r4;
  unaff_r7[5] = unaff_r6;
  unaff_r7[6] = (uint)unaff_r7;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

