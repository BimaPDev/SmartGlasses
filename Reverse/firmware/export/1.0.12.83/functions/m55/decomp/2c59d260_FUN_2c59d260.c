/* FUN_2c59d260 @ 0x2c59d260 */

void FUN_2c59d260(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x40);
  while (iVar1 != param_1 + 0x38) {
    *(undefined1 *)(iVar1 + 0x28) = 0;
    iVar1 = thunk_FUN_2c64e43a();
  }
  iVar1 = *(int *)(param_1 + 0x58);
  while (iVar1 != param_1 + 0x50) {
    *(undefined4 *)(iVar1 + 0x28) = 0;
    iVar1 = thunk_FUN_2c64e43a();
  }
  return;
}

