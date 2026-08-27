/* FUN_2c4e2d38 @ 0x2c4e2d38 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c4e2d38(int *param_1,int *param_2)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  iVar2 = FUN_2c4e29bc(param_1,4,0);
  if (iVar2 == 0) {
    uVar4 = 2;
    uVar9 = 0xa9;
    uVar3 = _LAB_2c4e2ec4;
    uVar10 = _LAB_2c4e2eb8;
  }
  else {
    iVar8 = (param_2[1] - param_2[2]) - param_2[3];
    if (iVar8 < iVar2) {
      FUN_2c4de6ca(*(int *)(*param_1 + -0xc) + (int)param_1,0x72de,0xb3,0x300);
      FUN_2c4e0504(_LAB_2c4e2ec8,7,0,0,_LAB_2c4e2ec0,0xb3,_LAB_2c4e2ebc,0x1300,_LAB_2c4e2ecc,iVar2,
                   iVar8,param_2[1],param_2[2],param_2[3],param_1[9],param_1[8]);
      return 0;
    }
    iVar7 = *param_2 + param_2[3] + param_2[2];
    iVar8 = iVar2;
    if (param_1[0x5b] != 0) {
      iVar7 = FUN_2c674668(iVar7,param_1[0x5c]);
      iVar6 = param_1[0x5b];
      iVar8 = iVar2 - iVar6;
      param_1[0x5b] = 0;
      if (iVar8 == 0) goto LAB_2c4e2e82;
      iVar7 = iVar7 + iVar6;
    }
    iVar7 = FUN_2c4e1698(param_1,iVar7,iVar8);
    if (iVar7 == 0) {
      FUN_2c4de6ca(*(int *)(*param_1 + -0xc) + (int)param_1,0x72de,0xbe,0x200);
      uVar9 = 0xbe;
      uVar10 = _LAB_2c4e2ed0;
    }
    else {
      if (iVar8 <= iVar7) {
LAB_2c4e2e82:
        param_2[3] = param_2[3] + iVar2;
        uVar5 = param_1[0x30];
        param_1[0x30] = uVar5 + 1;
        param_2[6] = uVar5;
        lVar1 = ((ulonglong)uVar5 * (ulonglong)(uint)param_1[0x38] & 0xffffffff) * 1000;
        iVar2 = FUN_2c672ae8((int)lVar1,
                             (int)((ulonglong)uVar5 * (ulonglong)(uint)param_1[0x38] >> 0x20) * 1000
                             + (int)((ulonglong)lVar1 >> 0x20),param_1[0x32],param_1[0x32] >> 0x1f);
        param_2[7] = iVar2;
        return 1;
      }
      FUN_2c4de6ca(*(int *)(*param_1 + -0xc) + (int)param_1,0x72de,0xbf,0x200);
      uVar9 = 0xbf;
      uVar10 = _LAB_2c4e2ed8;
    }
    uVar4 = 0;
    uVar3 = _LAB_2c4e2ed4;
  }
  FUN_2c4e0504(uVar3,uVar4,0,0,_LAB_2c4e2ec0,uVar9,_LAB_2c4e2ebc,0x1300,uVar10);
  return 0;
}

