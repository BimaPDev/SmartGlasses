/* FUN_1012bb5c @ 0x1012bb5c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012bb5c(int param_1,int param_2,int param_3)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  bool bVar10;
  
  if ((*(short *)(param_1 + 0x38) == param_2) && (*(short *)(param_1 + 0x3a) == param_3)) {
    return;
  }
  *(short *)(param_1 + 0x38) = (short)param_2;
  if (*(short *)(param_1 + 0x36) < param_2) {
    *(short *)(param_1 + 0x36) = (short)param_2;
  }
  *(short *)(param_1 + 0x3a) = (short)param_3;
  if (param_3 < *(short *)(param_1 + 0x36)) {
    *(short *)(param_1 + 0x36) = (short)param_3;
  }
  iVar4 = (int)*(short *)(param_1 + 0x36);
  if (iVar4 != -0x8000) {
    uVar6 = (uint)*(ushort *)(param_1 + 0x32);
    iVar7 = (int)*(short *)(param_1 + 0x34);
    bVar10 = *(ushort *)(param_1 + 0x34) < uVar6;
    if (bVar10) {
      iVar7 = iVar7 + 0x168;
    }
    uVar5 = (*(byte *)(param_1 + 0x3c) & 7) >> 1;
    if (bVar10) {
      iVar7 = (int)(short)iVar7;
    }
    if (uVar5 == 1) {
      iVar9 = (int)*(short *)(param_1 + 0x38) + (int)*(short *)(param_1 + 0x3a);
      uVar8 = (uVar6 + iVar7) - ((int)(uVar6 + iVar7) >> 0x1f);
      uVar5 = (uVar8 & 0x1ffff) >> 1;
      if (iVar4 < (iVar9 - (iVar9 >> 0x1f)) * 0x8000 >> 0x10) {
        uVar3 = FUN_1012b19a(iVar4,(int)*(short *)(param_1 + 0x38),iVar9 / 2,uVar6,
                             (int)(uVar8 * 0x8000) >> 0x10,param_2,param_3);
        FUN_1012b924(param_1,uVar3);
      }
      else {
        uVar6 = FUN_1012b19a();
        uVar3 = (undefined2)uVar6;
        FUN_1012b924(param_1,uVar5);
        uVar5 = uVar6 & 0xffff;
      }
      FUN_1012b99e(param_1,uVar5);
    }
    else {
      if (uVar5 == 2) {
        uVar3 = FUN_1012b19a(iVar4,(int)*(short *)(param_1 + 0x38),(int)*(short *)(param_1 + 0x3a),
                             iVar7,uVar6,param_2,param_3);
        uVar1 = *(undefined2 *)(param_1 + 0x34);
        uVar2 = uVar3;
      }
      else {
        if (uVar5 != 0) {
          FUN_10094174(2,_DAT_100956e4,0x372,_DAT_100956e0,_DAT_100956dc,3);
          return;
        }
        uVar3 = FUN_1012b19a(iVar4,(int)*(short *)(param_1 + 0x38),(int)*(short *)(param_1 + 0x3a),
                             uVar6,iVar7,param_2,param_3);
        uVar2 = *(undefined2 *)(param_1 + 0x32);
        uVar1 = uVar3;
      }
      FUN_1012ba18(param_1,uVar2,uVar1);
    }
    *(undefined2 *)(param_1 + 0x48) = uVar3;
  }
  return;
}

