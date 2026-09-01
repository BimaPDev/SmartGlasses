/* FUN_10105658 @ 0x10105658 */

undefined4 FUN_10105658(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)(param_1 + 0x170);
  iVar4 = *(int *)(param_1 + 0x16c) + *(int *)(param_1 + 0x178);
  *(int *)(param_1 + 0x16c) = iVar4;
  if (iVar3 <= iVar4) {
    *(undefined4 *)(param_1 + 0xc) = 0x83;
    return 1;
  }
  bVar1 = *(byte *)(*(int *)(param_1 + 0x168) + iVar4);
  iVar2 = (int)*(char *)(DAT_101056c4 + (uint)bVar1);
  *(byte *)(param_1 + 0x174) = bVar1;
  *(int *)(param_1 + 0x178) = iVar2;
  if (iVar2 < 0) {
    if (iVar3 <= iVar4 + 1) goto LAB_10105696;
    iVar2 = 2 - iVar2 * (uint)*(byte *)(*(int *)(param_1 + 0x168) + iVar4 + 1);
    *(int *)(param_1 + 0x178) = iVar2;
  }
  if (iVar4 + iVar2 <= iVar3) {
    return 0;
  }
LAB_10105696:
  *(undefined4 *)(param_1 + 0xc) = 0x83;
  return 1;
}

