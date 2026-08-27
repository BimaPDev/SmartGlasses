/* FUN_2c04ac1c @ 0x2c04ac1c */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c04ac1c(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 unaff_r4;
  int unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_lr;
  char in_ZR;
  undefined4 in_cr4;
  
  do {
    *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
    *(undefined4 *)((int)register0x00000054 + -8) = unaff_r7;
    *(undefined4 *)((int)register0x00000054 + -0xc) = unaff_r6;
    *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_r4;
    *(undefined4 **)((int)register0x00000054 + -0x14) = param_3;
    *(undefined4 *)((int)register0x00000054 + -0x18) = param_2;
    register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x1c);
    *(undefined4 *)register0x00000054 = param_1;
  } while (in_ZR != '\0');
  if (unaff_r5 >> 0x10 != 0) {
    coprocessor_loadlong(0xc,in_cr4,unaff_r7);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  _MasterStackPointer = SUB42(param_3,0);
  iVar1 = SignedSaturate((int)param_3 << 0x18,6);
  SignedDoesSaturate((int)param_3 << 0x18,6);
                    /* WARNING: Could not recover jumptable at 0x2c04ad0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(param_3 + 3))(*param_3,iVar1 << 3,param_3 + 3,param_3[1]);
  return;
}

