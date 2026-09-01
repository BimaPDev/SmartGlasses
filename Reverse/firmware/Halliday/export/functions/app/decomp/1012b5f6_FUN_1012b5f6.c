/* FUN_1012b5f6 @ 0x1012b5f6 */

short FUN_1012b5f6(int param_1)

{
  ushort uVar1;
  short sVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  
  bVar3 = *(byte *)(param_1 + 0x3c) & 6;
  if ((*(byte *)(param_1 + 0x3c) & 6) == 0) {
    uVar1 = *(ushort *)(param_1 + 0x30);
  }
  else if (bVar3 == 4) {
    uVar1 = *(ushort *)(param_1 + 0x2e);
  }
  else {
    if (bVar3 != 2) {
      return *(short *)(param_1 + 0x2c);
    }
    uVar4 = (uint)*(ushort *)(param_1 + 0x32);
    iVar5 = (int)*(short *)(param_1 + 0x34);
    bVar6 = *(ushort *)(param_1 + 0x34) < uVar4;
    if (bVar6) {
      iVar5 = iVar5 + 0x168;
    }
    sVar2 = *(short *)(param_1 + 0x30);
    uVar1 = *(ushort *)(param_1 + 0x2e);
    if (bVar6) {
      iVar5 = (int)(short)iVar5;
    }
    if ((uint)*(ushort *)(param_1 + 0x30) < (uint)uVar1) {
      sVar2 = sVar2 + 0x168;
    }
    iVar5 = (int)(uVar4 + iVar5) / 2;
    if ((iVar5 <= (int)(uint)uVar1) && (uVar1 = *(ushort *)(param_1 + 0x30), sVar2 <= iVar5)) {
      uVar1 = (ushort)iVar5;
    }
  }
  return *(short *)(param_1 + 0x2c) + uVar1;
}

