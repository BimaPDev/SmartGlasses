/* FUN_2c636890 @ 0x2c636890 */

void FUN_2c636890(int param_1)

{
  ushort uVar1;
  undefined2 uVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  undefined2 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  
  iVar7 = (int)*(short *)(param_1 + 0x2e);
  if (iVar7 == -0x8000) {
    return;
  }
  uVar1 = *(ushort *)(param_1 + 0x2c);
  uVar10 = (uint)*(ushort *)(param_1 + 0x2a);
  if (uVar1 < uVar10) {
    bVar3 = *(byte *)(param_1 + 0x34);
    uVar1 = uVar1 + 0x168;
  }
  else {
    bVar3 = *(byte *)(param_1 + 0x34);
  }
  uVar4 = (bVar3 & 7) >> 1;
  iVar5 = (int)(short)uVar1;
  if (uVar4 == 1) {
    iVar8 = uVar10 + iVar5;
    if (iVar8 < 0) {
      iVar8 = iVar8 + 1;
    }
    iVar11 = (int)*(short *)(param_1 + 0x30) + (int)*(short *)(param_1 + 0x32);
    iVar9 = (iVar8 << 0xf) >> 0x10;
    if (iVar11 < 0) {
      iVar11 = iVar11 + 1;
    }
    if (iVar7 < (iVar11 << 0xf) >> 0x10) {
      uVar6 = FUN_2c62e4a8(iVar7,(int)*(short *)(param_1 + 0x30),iVar11 >> 1,uVar10,iVar9);
      FUN_2c636688(param_1,uVar6);
      FUN_2c63678c(param_1,iVar8 >> 1 & 0xffff);
    }
    else {
      uVar6 = FUN_2c62e4a8(iVar7,iVar11 >> 1,(int)*(short *)(param_1 + 0x32),iVar9,iVar5);
      FUN_2c636688(param_1,iVar8 >> 1 & 0xffff);
      FUN_2c63678c(param_1,uVar6);
    }
  }
  else if (uVar4 == 2) {
    uVar6 = FUN_2c62e4a8(iVar7,(int)*(short *)(param_1 + 0x30),(int)*(short *)(param_1 + 0x32),iVar5
                         ,uVar10);
    FUN_2c63678c(param_1,*(undefined2 *)(param_1 + 0x2c));
    FUN_2c636688(param_1,uVar6);
  }
  else {
    if (uVar4 != 0) {
      return;
    }
    uVar6 = FUN_2c62e4a8(iVar7,(int)*(short *)(param_1 + 0x30),(int)*(short *)(param_1 + 0x32),
                         uVar10,iVar5);
    uVar2 = *(undefined2 *)(param_1 + 0x2a);
    FUN_2c63678c(param_1,uVar6);
    FUN_2c636688(param_1,uVar2);
  }
  *(undefined2 *)(param_1 + 0x3c) = uVar6;
  return;
}

