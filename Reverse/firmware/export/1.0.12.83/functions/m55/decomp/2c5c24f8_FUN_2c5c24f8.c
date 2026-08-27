/* FUN_2c5c24f8 @ 0x2c5c24f8 */

void FUN_2c5c24f8(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0xc);
  iVar1 = func_0x2c5bd4d0();
  FUN_2c5ba79c(*(undefined4 *)(iVar1 + 4),*(undefined4 *)(*(int *)(iVar2 + 0x4c) + 4));
  iVar1 = func_0x2c5bd4d0();
  FUN_2c5bab38(*(undefined4 *)(iVar1 + 4),*(undefined4 *)(*(int *)(iVar2 + 0x4c) + 4));
  if (*(int *)(iVar2 + 0x48) != 0) {
    FUN_2c62be1c();
    *(undefined4 *)(iVar2 + 0x48) = 0;
  }
  return;
}

