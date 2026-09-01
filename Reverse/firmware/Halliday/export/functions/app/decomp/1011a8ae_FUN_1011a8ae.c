/* FUN_1011a8ae @ 0x1011a8ae */

void FUN_1011a8ae(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_1005608c();
  if (param_1 < 3) {
    *(uint *)(*(int *)(iVar1 + 0x4c) + 8) =
         *(uint *)(*(int *)(iVar1 + 0x4c) + 8) & 0xffe7ffff | param_1 << 0x13;
    thunk_FUN_1011598c(300);
    return;
  }
  return;
}

