/* FUN_2c5dfbc0 @ 0x2c5dfbc0 */

void FUN_2c5dfbc0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if ((*(int *)(param_1 + 0x40) == 0) || (*(char *)(*(int *)(param_1 + 0x40) + 0x25) == '\0')) {
    iVar2 = *(int *)(param_1 + 0x44);
    if (*(char *)(iVar2 + 0x25) == '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(4,DAT_2c5dfc48,0x1ec,DAT_2c5dfc44,DAT_2c5dfc4c);
    }
  }
  else {
    iVar2 = *(int *)(param_1 + 0x44);
    if (*(char *)(iVar2 + 0x25) == '\0') {
      uVar1 = FUN_2c5dd32c();
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(4,DAT_2c5dfc48,0x1f9,DAT_2c5dfc44,DAT_2c5dfc40,uVar1);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,DAT_2c5dfc48,0x1f5,DAT_2c5dfc44,DAT_2c5dfc50,*(undefined4 *)(iVar2 + 0xc));
}

