/* FUN_2c0f9156 @ 0x2c0f9156 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c0f9156(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  byte bVar1;
  undefined4 unaff_r4;
  undefined4 unaff_r6;
  undefined4 *unaff_r7;
  int unaff_r10;
  undefined4 in_cr6;
  undefined4 in_cr7;
  undefined4 in_cr12;
  
  bVar1 = *(byte *)(param_4 + 0xf);
  *unaff_r7 = param_1;
  unaff_r7[1] = param_2;
  unaff_r7[2] = param_3;
  unaff_r7[3] = unaff_r4;
  unaff_r7[4] = (uint)bVar1;
  unaff_r7[5] = unaff_r6;
  coprocessor_movefromRt(7,1,7,in_cr12,in_cr6);
  coprocessor_load(0xb,in_cr7,unaff_r10 + 0x1ec);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

