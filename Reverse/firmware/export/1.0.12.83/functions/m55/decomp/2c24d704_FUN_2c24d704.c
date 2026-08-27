/* FUN_2c24d704 @ 0x2c24d704 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c24d704(undefined4 param_1,int *param_2,int param_3,uint param_4)

{
  int iVar1;
  int unaff_r4;
  int unaff_r5;
  uint unaff_r7;
  undefined1 auStack_1c [16];
  
  *(int *)(param_3 + unaff_r5) = unaff_r5;
  iVar1 = *(short *)((unaff_r7 >> 0x18) + unaff_r4) * 4;
  *param_2 = iVar1;
  param_2[1] = param_4 << 3;
  param_2[2] = param_4;
  param_2[3] = unaff_r5;
  if (iVar1 == 0) {
    BusFault = 0;
    *(uint *)((int)auStack_1c * 8 + 4) = (param_4 >> 0x18) << 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

