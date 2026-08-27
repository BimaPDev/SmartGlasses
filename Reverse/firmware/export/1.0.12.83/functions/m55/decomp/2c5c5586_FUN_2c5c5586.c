/* FUN_2c5c5586 @ 0x2c5c5586 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_2c5c5586(undefined4 param_1,undefined4 param_2,undefined4 param_3,int *param_4,
                 undefined4 param_5,int param_6)

{
  short sVar1;
  int iVar2;
  uint unaff_r4;
  uint uVar3;
  int unaff_r5;
  int unaff_r6;
  int unaff_r7;
  int unaff_r8;
  undefined4 in_cr4;
  int in_stack_0000001c;
  
  if (!SBORROW4(unaff_r5,3)) {
    coprocessor_storelong(0xb,in_cr4,unaff_r5 + -0xa8);
    if (*param_4 == in_stack_0000001c) {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(4,DAT_2c5ac3c0,0x40,DAT_2c5ac3bc);
    }
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  if (0x13 < unaff_r4) {
    iVar2 = FUN_2c5c685c();
    FUN_2c5cda48();
    return *(uint *)(iVar2 + 0x348);
  }
  _PendSV = (undefined2)(unaff_r4 - 0x26);
  uVar3 = unaff_r4 - 0x3c;
  if (0x15 < unaff_r4 - 0x26 && uVar3 != 0) {
    FUN_2c5c6a68();
    if (*_FUN_2c5c5660 == param_6) {
      return uVar3;
    }
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  if (uVar3 < 0x13 || (int *)(unaff_r4 - 0x4f) == (int *)0x0) {
    sVar1 = (short)unaff_r4;
    *(short *)(unaff_r6 + 0x3c) = sVar1 + -0x62;
    *(undefined2 *)(param_4 + 0xe) = 0;
    *(short *)(unaff_r7 + 0x32) = sVar1 + -0x8e;
    *(short *)(unaff_r4 - 0x6c) = sVar1 + -0xa4;
    *(undefined2 *)(unaff_r7 + 0x3a) = 0;
    if (0x15 < unaff_r4 - 0xba && unaff_r4 != 0xd0) {
      return 0;
    }
    if (SBORROW4(unaff_r4 - 0xd0,0x13)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,uRam2c5c55a8);
  }
  FUN_2c63bd2c(2,param_2,param_3,(int)param_4 + unaff_r8);
  iVar2 = *(int *)(unaff_r4 - 0x4f);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,DAT_2c5c56dc,0x76,DAT_2c5c56d8);
  }
  iVar2 = FUN_2c5dd26c(iVar2,unaff_r5);
  if ((iVar2 != 0) && (iVar2 = FUN_2c5def1c(), iVar2 == 0)) {
    FUN_2c620fa4(0x3f6,unaff_r5);
  }
  if (unaff_r5 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,DAT_2c5dece0,0x171,DAT_2c5decdc);
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(3,DAT_2c5dece0,0x170,DAT_2c5decdc);
}

