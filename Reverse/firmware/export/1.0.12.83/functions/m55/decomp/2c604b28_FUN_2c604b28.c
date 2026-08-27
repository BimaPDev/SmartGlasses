/* FUN_2c604b28 @ 0x2c604b28 */

void FUN_2c604b28(int param_1,int param_2,uint param_3,undefined4 param_4)

{
  ushort uVar1;
  ushort uVar2;
  char cVar3;
  short sVar4;
  short sVar5;
  uint uVar6;
  int iVar7;
  short sVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  
  FUN_2c608c7c();
  if (*(int *)(param_1 + 8) == 0) {
    iVar9 = 0;
    sVar4 = 0;
  }
  else {
    sVar4 = -*(short *)(*(int *)(param_1 + 8) + 0x10);
    iVar9 = (int)sVar4;
  }
  uVar2 = (short)param_2 - sVar4;
  cVar3 = FUN_2c6033b4(param_1,0,0x16);
  iVar11 = (int)(short)uVar2;
  if (cVar3 == '\x01') {
    if (iVar11 < 1) goto LAB_2c604b68;
    cVar3 = FUN_2c6033b4(param_1,0,0x16);
    if (cVar3 == '\x01') {
      iVar9 = FUN_2c60460c(param_1);
      sVar8 = (short)iVar9;
    }
    else if (*(int *)(param_1 + 8) == 0) {
      sVar8 = 0;
      iVar9 = 0;
    }
    else {
      sVar8 = -*(short *)(*(int *)(param_1 + 8) + 0x10);
      iVar9 = (int)sVar8;
    }
    cVar3 = FUN_2c6033b4(param_1,0,0x16);
    if (cVar3 == '\x01') {
      iVar7 = *(int *)(param_1 + 8);
      if (iVar7 == 0) {
        uVar1 = (ushort)iVar9 & ~(ushort)(iVar9 >> 0x1f);
        if (iVar11 < (short)uVar1) {
          uVar1 = uVar2;
        }
        param_2 = (int)(short)(sVar4 + uVar1);
        uVar6 = 0;
        uVar10 = 0;
        goto LAB_2c604b7e;
      }
      sVar5 = *(short *)(iVar7 + 0x10);
    }
    else {
      sVar5 = FUN_2c6046d8(param_1);
      iVar7 = *(int *)(param_1 + 8);
    }
    uVar6 = (int)(short)(sVar5 + sVar8) & ~((int)(short)(sVar5 + sVar8) >> 0x1f);
    if ((int)uVar6 <= iVar11) {
      uVar2 = (ushort)uVar6;
    }
    param_2 = (int)(short)(sVar4 + uVar2);
joined_r0x2c604bf6:
    if (iVar7 == 0) {
      uVar6 = 0;
      sVar4 = 0;
      uVar10 = uVar6;
      goto joined_r0x2c604b8a;
    }
LAB_2c604b6e:
    uVar6 = (uint)-*(short *)(iVar7 + 0x12);
    uVar10 = (uint)(ushort)-*(short *)(iVar7 + 0x12);
  }
  else {
    if (-1 < iVar11) {
LAB_2c604b68:
      iVar7 = *(int *)(param_1 + 8);
      param_2 = iVar9;
      goto joined_r0x2c604bf6;
    }
    cVar3 = FUN_2c6033b4(param_1,0,0x16);
    if (cVar3 == '\x01') {
      iVar9 = FUN_2c60460c(param_1);
      sVar8 = (short)iVar9;
    }
    else if (*(int *)(param_1 + 8) == 0) {
      sVar8 = 0;
      iVar9 = 0;
    }
    else {
      sVar8 = -*(short *)(*(int *)(param_1 + 8) + 0x10);
      iVar9 = (int)sVar8;
    }
    cVar3 = FUN_2c6033b4(param_1,0,0x16);
    if (cVar3 != '\x01') {
      sVar5 = FUN_2c6046d8(param_1);
      uVar6 = (int)(short)(sVar8 + sVar5) & ~((int)(short)(sVar8 + sVar5) >> 0x1f);
      iVar7 = *(int *)(param_1 + 8);
      if ((int)-uVar6 <= iVar11) goto joined_r0x2c604bf6;
LAB_2c604cb6:
      param_2 = (int)(short)(sVar4 - (short)uVar6);
      goto joined_r0x2c604bf6;
    }
    iVar7 = *(int *)(param_1 + 8);
    if (iVar7 != 0) {
      uVar6 = (uint)(short)(sVar8 + *(short *)(iVar7 + 0x10));
      uVar6 = uVar6 & ~((int)uVar6 >> 0x1f);
      if (iVar11 < (int)-uVar6) goto LAB_2c604cb6;
      goto LAB_2c604b6e;
    }
    uVar2 = (ushort)iVar9 & ~(ushort)(iVar9 >> 0x1f);
    uVar6 = 0;
    uVar10 = uVar6;
    if (-iVar11 != (int)(short)uVar2 && iVar11 <= -(int)(short)uVar2) {
      param_2 = (int)(short)(sVar4 - uVar2);
    }
  }
LAB_2c604b7e:
  sVar4 = (short)uVar10;
joined_r0x2c604b8a:
  iVar9 = (int)(short)((short)param_3 - sVar4);
  if (iVar9 < 0) {
    sVar4 = FUN_2c604a50(param_1);
    uVar12 = (uint)(short)((short)uVar10 + sVar4);
    uVar12 = uVar12 & ~((int)uVar12 >> 0x1f);
    uVar6 = param_3;
    if (iVar9 < (int)-uVar12) {
      uVar6 = (int)(short)((short)uVar10 - (short)uVar12);
    }
  }
  if (param_2 == 0 && uVar6 == 0) {
    return;
  }
  FUN_2c6047f8(param_1,param_2,uVar6,param_4);
  return;
}

