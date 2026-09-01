/* FUN_1012438a @ 0x1012438a */

undefined4 FUN_1012438a(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 != 0) {
    for (iVar2 = 0; iVar2 < (int)(*(byte *)(iVar1 + 0x22) & 0x3f); iVar2 = iVar2 + 1) {
      if (*(int *)(*(int *)(iVar1 + 0xc) + iVar2 * 0xc) == param_2) {
        return *(undefined4 *)(*(int *)(iVar1 + 0xc) + iVar2 * 0xc + 4);
      }
    }
  }
  return 0;
}

