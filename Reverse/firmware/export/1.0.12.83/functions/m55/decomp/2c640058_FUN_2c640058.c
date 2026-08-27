/* FUN_2c640058 @ 0x2c640058 */

undefined4 FUN_2c640058(int param_1,undefined4 param_2)

{
  int iVar1;
  int unaff_r4;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  int iStack_1c;
  int iStack_18;
  
  puVar3 = (undefined4 *)&stack0xfffffff8;
  if (param_1 == 0) {
    if (unaff_r4 < 0x3f) {
      uVar2 = 1;
    }
    else {
      FUN_2c63ec24();
      uVar2 = 0;
    }
  }
  else {
    iStack_18 = unaff_r4 + -0x7e;
    puVar3 = &uStack_40;
    iStack_1c = *DAT_2c640144;
    if ((param_1 == 0) && (iVar1 = FUN_2c48f590(), iVar1 == 0)) {
      uStack_40 = DAT_2c640154;
      iStack_3c = param_2;
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(4,DAT_2c64014c,0x39f,DAT_2c640150);
    }
    iVar1 = FUN_2c6411ac();
    uVar2 = 0;
    if (iVar1 != 0) {
      iVar1 = FUN_2c63f2f4(0,param_1);
      iStack_3c = param_1;
      uStack_38 = param_2;
      if (iVar1 != 0) {
        uStack_40 = DAT_2c640148;
                    /* WARNING: Subroutine does not return */
        FUN_2c62c82c(4,DAT_2c64014c,0x3b0,DAT_2c640150);
      }
      uStack_40 = DAT_2c640160;
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(3,DAT_2c64014c,0x3ac,DAT_2c640150);
    }
  }
  if (*DAT_2c640144 == *(int *)((int)puVar3 + 0x24)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

