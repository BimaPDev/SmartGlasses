/* FUN_2c5c59bc @ 0x2c5c59bc */

bool FUN_2c5c59bc(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *param_1;
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,DAT_2c5c5a30,0x10d,DAT_2c5c5a2c,DAT_2c5c5a34);
  }
  iVar1 = *(int *)(iVar2 + 0x24);
  if (iVar1 != *(int *)(iVar2 + 0x14)) {
    if (iVar1 == *(int *)(iVar2 + 0x28)) {
      iVar1 = *(int *)(*(int *)(iVar2 + 0x30) + -4) + 0x200;
    }
    iVar2 = FUN_2c66b624(DAT_2c5c5a24,*(undefined4 *)(*(int *)(iVar1 + -4) + 0xc));
    return iVar2 == 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(3,DAT_2c5c5a30,0x111,DAT_2c5c5a2c,DAT_2c5c5a28);
}

