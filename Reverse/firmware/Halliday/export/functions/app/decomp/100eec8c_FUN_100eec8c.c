/* FUN_100eec8c @ 0x100eec8c */

bool FUN_100eec8c(int param_1)

{
  char cVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;
  bool bVar9;
  undefined8 uVar10;
  
  cVar1 = *(char *)((int)DAT_100eed08 + 9) + -1;
  cVar2 = *(char *)((int)DAT_100eed08 + 9) + '\x01';
  uVar7 = (uint)cVar1;
  iVar6 = (int)cVar2;
  if ((*(byte *)(DAT_100eed08 + 2) & 1) == 0) {
    if (param_1 < (int)(uVar7 & ~((int)uVar7 >> 0x1f))) {
      return (bool)(*(byte *)(DAT_100eed08 + 2) & 1);
    }
    iVar5 = *(byte *)(*DAT_100eed08 + 2) - 1;
    if (iVar6 <= iVar5) {
      iVar5 = iVar6;
    }
    bVar9 = SBORROW4(param_1,iVar5);
    iVar6 = param_1 - iVar5;
    bVar8 = param_1 == iVar5;
LAB_100eecd6:
    return bVar8 || iVar6 < 0 != bVar9;
  }
  if (*(byte *)(*DAT_100eed08 + 2) < 4) {
LAB_100eecfe:
    bVar8 = true;
  }
  else {
    uVar10 = FUN_100eec68();
    iVar5 = (int)uVar10;
    cVar3 = (char)((ulonglong)uVar10 >> 0x20);
    if ((int)uVar7 < 0) {
      if ((char)(cVar1 + cVar3) <= iVar5) goto LAB_100eecfe;
    }
    else {
      if ((int)((ulonglong)uVar10 >> 0x20) <= iVar6) {
        if (iVar5 < (int)uVar7) {
          iVar4 = (int)(char)(cVar2 - cVar3);
          bVar9 = SBORROW4(iVar5,iVar4);
          iVar6 = iVar5 - iVar4;
          bVar8 = iVar5 == iVar4;
          goto LAB_100eecd6;
        }
        goto LAB_100eecfe;
      }
      if (iVar5 < (int)uVar7) {
        return false;
      }
    }
    if (iVar6 < iVar5) {
      bVar8 = false;
    }
    else {
      bVar8 = true;
    }
  }
  return bVar8;
}

