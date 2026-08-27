/* FUN_140bc43c @ 0x140bc43c */

undefined4 FUN_140bc43c(int param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_140a22dc(*(undefined4 *)(param_1 + 0x14));
  if (0 < *(int *)(param_1 + 0xc)) {
    iVar2 = 0;
    iVar1 = param_1;
    do {
      FUN_140a22dc(*(undefined4 *)(iVar1 + 0x1c));
      FUN_140a22dc(*(undefined4 *)(iVar1 + 0x20));
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0xc;
    } while (iVar2 < *(int *)(param_1 + 0xc));
  }
  FUN_140a22dc(param_1);
  return 0;
}

