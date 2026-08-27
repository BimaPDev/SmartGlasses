/* FUN_2c636364 @ 0x2c636364 */

int FUN_2c636364(int param_1)

{
  ushort uVar1;
  ushort uVar2;
  short sVar3;
  byte bVar4;
  ushort uVar5;
  int iVar6;
  ushort uVar7;
  
  sVar3 = *(short *)(param_1 + 0x24);
  bVar4 = *(byte *)(param_1 + 0x34) & 6;
  if ((*(byte *)(param_1 + 0x34) & 6) == 0) {
    sVar3 = sVar3 + *(short *)(param_1 + 0x28);
  }
  else {
    if (bVar4 == 4) {
      return (int)(short)(sVar3 + *(short *)(param_1 + 0x26));
    }
    if (bVar4 == 2) {
      uVar5 = *(ushort *)(param_1 + 0x2c);
      if ((uint)uVar5 < (uint)*(ushort *)(param_1 + 0x2a)) {
        uVar5 = uVar5 + 0x168;
      }
      uVar2 = *(ushort *)(param_1 + 0x28);
      uVar1 = *(ushort *)(param_1 + 0x26);
      uVar7 = uVar2;
      if ((uint)uVar2 < (uint)uVar1) {
        uVar7 = uVar2 + 0x168;
      }
      iVar6 = (uint)*(ushort *)(param_1 + 0x2a) + (int)(short)uVar5;
      if (iVar6 < 0) {
        iVar6 = iVar6 + 1;
      }
      iVar6 = iVar6 >> 1;
      if ((iVar6 <= (int)(uint)uVar1) && (uVar1 = uVar2, (short)uVar7 <= iVar6)) {
        uVar1 = (ushort)iVar6;
      }
      return (int)(short)(sVar3 + uVar1);
    }
  }
  return (int)sVar3;
}

