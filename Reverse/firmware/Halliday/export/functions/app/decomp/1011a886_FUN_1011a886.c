/* FUN_1011a886 @ 0x1011a886 */

void FUN_1011a886(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_1005608c();
  if (param_1 < 8) {
    *(uint *)(*(int *)(iVar1 + 0x4c) + 8) =
         *(uint *)(*(int *)(iVar1 + 0x4c) + 8) & 0xff1fffff | param_1 << 0x15;
    thunk_FUN_1011598c(300);
    return;
  }
  return;
}

