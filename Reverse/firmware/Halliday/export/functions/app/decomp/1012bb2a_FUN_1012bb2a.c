/* FUN_1012bb2a @ 0x1012bb2a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012bb2a(int param_1,int param_2)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  bool bVar12;
  
  if (*(short *)(param_1 + 0x36) != param_2) {
    iVar7 = (int)*(short *)(param_1 + 0x3a);
    if (param_2 <= *(short *)(param_1 + 0x3a)) {
      iVar7 = param_2;
    }
    iVar5 = (int)*(short *)(param_1 + 0x38);
    if (*(short *)(param_1 + 0x38) < iVar7) {
      iVar5 = iVar7;
    }
    if (*(short *)(param_1 + 0x36) != iVar5) {
      *(short *)(param_1 + 0x36) = (short)iVar5;
      iVar4 = (int)*(short *)(param_1 + 0x36);
      if (iVar4 != -0x8000) {
        uVar8 = (uint)*(ushort *)(param_1 + 0x32);
        iVar9 = (int)*(short *)(param_1 + 0x34);
        bVar12 = *(ushort *)(param_1 + 0x34) < uVar8;
        if (bVar12) {
          iVar9 = iVar9 + 0x168;
        }
        uVar6 = (*(byte *)(param_1 + 0x3c) & 7) >> 1;
        if (bVar12) {
          iVar9 = (int)(short)iVar9;
        }
        if (uVar6 == 1) {
          iVar11 = (int)*(short *)(param_1 + 0x38) + (int)*(short *)(param_1 + 0x3a);
          uVar10 = (uVar8 + iVar9) - ((int)(uVar8 + iVar9) >> 0x1f);
          uVar6 = (uVar10 & 0x1ffff) >> 1;
          if (iVar4 < (iVar11 - (iVar11 >> 0x1f)) * 0x8000 >> 0x10) {
            uVar3 = FUN_1012b19a(iVar4,(int)*(short *)(param_1 + 0x38),iVar11 / 2,uVar8,
                                 (int)(uVar10 * 0x8000) >> 0x10,iVar5,iVar7);
            FUN_1012b924(param_1,uVar3);
          }
          else {
            uVar8 = FUN_1012b19a();
            uVar3 = (undefined2)uVar8;
            FUN_1012b924(param_1,uVar6);
            uVar6 = uVar8 & 0xffff;
          }
          FUN_1012b99e(param_1,uVar6);
        }
        else {
          if (uVar6 == 2) {
            uVar3 = FUN_1012b19a(iVar4,(int)*(short *)(param_1 + 0x38),
                                 (int)*(short *)(param_1 + 0x3a),iVar9,uVar8,iVar5,iVar7);
            uVar1 = *(undefined2 *)(param_1 + 0x34);
            uVar2 = uVar3;
          }
          else {
            if (uVar6 != 0) {
              FUN_10094174(2,_DAT_100956e4,0x372,_DAT_100956e0,_DAT_100956dc,3);
              return;
            }
            uVar3 = FUN_1012b19a(iVar4,(int)*(short *)(param_1 + 0x38),
                                 (int)*(short *)(param_1 + 0x3a),uVar8,iVar9,iVar5,iVar7);
            uVar2 = *(undefined2 *)(param_1 + 0x32);
            uVar1 = uVar3;
          }
          FUN_1012ba18(param_1,uVar2,uVar1);
        }
        *(undefined2 *)(param_1 + 0x48) = uVar3;
      }
      return;
    }
  }
  return;
}

