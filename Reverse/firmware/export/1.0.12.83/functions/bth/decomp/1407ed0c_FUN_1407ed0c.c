/* FUN_1407ed0c @ 0x1407ed0c */

void FUN_1407ed0c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_14074d50(param_1 + 0x14);
  if (iVar1 != 0) {
    uVar2 = thunk_FUN_140e5848();
    *(undefined4 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x42,DAT_1407ed9c,*(undefined2 *)(iVar1 + 10),iVar1 + 0xc);
  }
  *(undefined1 *)(param_1 + 0x25) = 0;
  return;
}

