/* FUN_2c5c2c04 @ 0x2c5c2c04 */

void FUN_2c5c2c04(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0xc);
  if (*(int *)(iVar2 + 0x3c) <= *(int *)(iVar2 + 0x38)) {
    if (*(int *)(iVar2 + 0x40) != 0) {
      FUN_2c62be1c();
      *(undefined4 *)(iVar2 + 0x40) = 0;
    }
    return;
  }
  iVar1 = *(int *)(iVar2 + 0x38) + 1;
  *(int *)(iVar2 + 0x38) = iVar1;
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,DAT_2c5c2c00,0xb6,DAT_2c5c2bf8,DAT_2c5c2bfc,DAT_2c5c2bf8,iVar1);
}

