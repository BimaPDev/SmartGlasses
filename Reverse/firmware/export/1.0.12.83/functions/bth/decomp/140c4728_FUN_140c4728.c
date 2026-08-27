/* FUN_140c4728 @ 0x140c4728 */

void FUN_140c4728(int param_1)

{
  int iVar1;
  
  if (param_1 != DAT_140c4740) {
    iVar1 = *(int *)(param_1 + 8);
    *(int *)(param_1 + 8) = iVar1 + -1;
    if (iVar1 < 1) {
      thunk_FUN_140db700();
    }
  }
  return;
}

