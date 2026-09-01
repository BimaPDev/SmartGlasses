/* FUN_101335ae @ 0x101335ae */

void FUN_101335ae(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = FUN_100c9d30();
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x90) = *param_1;
    *(undefined2 *)(iVar1 + 0x94) = *(undefined2 *)(param_1 + 1);
    *(undefined1 *)(iVar1 + 2) = 2;
    *(byte *)(iVar1 + 0xc0) = *(byte *)(iVar1 + 0xc0) | 4;
  }
  return;
}

