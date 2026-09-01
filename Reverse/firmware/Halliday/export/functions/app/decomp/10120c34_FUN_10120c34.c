/* FUN_10120c34 @ 0x10120c34 */

undefined4 FUN_10120c34(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = **(int **)(param_1 + 0xc);
  uVar2 = (uint)*(byte *)(iVar1 + 0xb) * (uint)*(ushort *)(iVar1 + 0xe);
  if (uVar2 < param_2 || uVar2 - param_2 == 0) {
    iVar1 = 0x1eb8;
  }
  else {
    iVar1 = 0x1eb4;
  }
  return *(undefined4 *)((int)*(int **)(param_1 + 0xc) + iVar1);
}

