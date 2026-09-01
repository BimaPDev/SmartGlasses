/* FUN_101214fa @ 0x101214fa */

uint FUN_101214fa(int param_1)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  
  iVar4 = *(int *)(param_1 + 0xc);
  uVar3 = 0;
  do {
    if (*(char *)(iVar4 + 0x91 + uVar3 * 0xc) == -1) goto LAB_10121540;
    uVar3 = uVar3 + 1;
  } while (uVar3 != 4);
  uVar1 = *(ushort *)(iVar4 + 0x94);
  uVar2 = *(ushort *)(iVar4 + 0xa0);
  bVar5 = uVar1 < uVar2;
  if (bVar5) {
    uVar1 = uVar2;
  }
  uVar3 = (uint)bVar5;
  if (uVar1 < *(ushort *)(iVar4 + 0xac)) {
    uVar3 = 2;
    uVar1 = *(ushort *)(iVar4 + 0xac);
  }
  if (uVar1 < *(ushort *)(iVar4 + 0xb8)) {
    uVar3 = 3;
  }
LAB_10121540:
  *(undefined2 *)(iVar4 + 0x94) = 0;
  *(undefined2 *)(iVar4 + 0xa0) = 0;
  *(undefined2 *)(iVar4 + 0xac) = 0;
  *(undefined2 *)(iVar4 + 0xb8) = 0;
  return uVar3;
}

