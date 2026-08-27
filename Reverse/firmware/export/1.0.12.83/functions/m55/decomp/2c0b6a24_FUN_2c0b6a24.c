/* FUN_2c0b6a24 @ 0x2c0b6a24 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c0b6a24(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  int extraout_r2;
  short unaff_r6;
  int unaff_r7;
  code *unaff_r8;
  
  *(short *)(param_1 + param_4) = unaff_r6 + -0x5f;
  uVar1 = _DAT_2c0b6c48;
  *(int *)(unaff_r7 + -0x11a) = unaff_r7 + -0x122;
  software_interrupt(0xb9);
  *(char *)(unaff_r7 + -0x309) = (char)param_3;
  (*unaff_r8)(param_1,param_2,param_3,param_4,param_2,param_4);
  *(short *)(extraout_r2 + 0x34) = (short)uVar1;
  *(int *)(unaff_r7 + -0x4d6) = unaff_r7 + -0x4de;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

