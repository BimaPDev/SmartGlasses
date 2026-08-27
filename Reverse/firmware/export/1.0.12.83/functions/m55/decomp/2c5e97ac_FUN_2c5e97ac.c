/* FUN_2c5e97ac @ 0x2c5e97ac */

void FUN_2c5e97ac(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  
  iVar4 = *DAT_2c5e9894;
  lVar5 = FUN_2c5e96bc();
  if (lVar5 == 0) {
    if (*DAT_2c5e9894 == iVar4) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  if (*(char *)(param_1 + 0x28) == '\0') {
    iVar1 = FUN_2c66c4ec(*(undefined4 *)(param_1 + 8));
    iVar4 = FUN_2c66c4ec(*(undefined4 *)(param_1 + 0xc));
    iVar4 = iVar4 + iVar1;
  }
  else {
    registry_lookup(*(undefined4 *)(param_1 + 0x1c));
    iVar1 = FUN_2c66c4ec();
    registry_lookup(*(undefined4 *)(param_1 + 0x20));
    iVar4 = FUN_2c66c4ec();
    iVar4 = iVar4 + iVar1;
  }
  iVar4 = FUN_2c62c45c(iVar4 + 2);
  if (iVar4 != 0) {
    if (*(char *)(param_1 + 0x28) == '\0') {
      FUN_2c66b4b8(iVar4,DAT_2c5e9898,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
    }
    else {
      uVar2 = registry_lookup(*(undefined4 *)(param_1 + 0x1c));
      uVar3 = registry_lookup(*(undefined4 *)(param_1 + 0x20));
      FUN_2c66b4b8(iVar4,DAT_2c5e9898,uVar2,uVar3);
    }
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,DAT_2c5e98a4,0x6f,DAT_2c5e98a0,DAT_2c5e989c,iVar4);
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(3,DAT_2c5e98a4,0x67,DAT_2c5e98a0,DAT_2c5e98ac);
}

