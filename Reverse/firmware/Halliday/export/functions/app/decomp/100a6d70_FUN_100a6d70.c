/* FUN_100a6d70 @ 0x100a6d70 */

undefined4 FUN_100a6d70(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  byte *pbVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  bool bVar14;
  undefined8 uVar15;
  int local_50;
  byte abStack_48 [36];
  
  iVar6 = param_1[4];
  puVar1 = param_1;
  if (param_1[5] == 0 && iVar6 == 0) {
    FUN_10119dc2(DAT_100a6f90,DAT_100a6f8c,DAT_100a6f88,0x66,param_1,param_2);
    puVar1 = (undefined4 *)FUN_1011a1f0(DAT_100a6f88,0x66,iVar6,0);
  }
  uVar3 = param_1[4];
  uVar15 = CONCAT44(uVar3,puVar1);
  uVar7 = uVar3 & 0xfff;
  if (uVar7 != 0) {
    FUN_10119dc2(DAT_100a6f90,DAT_100a6f94,DAT_100a6f88,0x69,puVar1,uVar3);
    uVar15 = FUN_1011a1f0(DAT_100a6f88,0x69,uVar7,uVar7);
  }
  uVar3 = param_1[4];
  iVar6 = param_1[5];
  if (iVar6 == 0 && uVar3 < 0x2000) {
    FUN_10119dc2(DAT_100a6f90,DAT_100a6f98,DAT_100a6f88,0x6b,uVar15);
    FUN_1011a1f0(DAT_100a6f88,0x6b,uVar3,iVar6);
  }
  uVar3 = param_1[4];
  iVar8 = param_1[5];
  iVar6 = 0;
  uVar15 = FUN_100a6950(*param_1,param_1[2]);
  uVar7 = 0;
  uVar13 = 0x1000;
  local_50 = 0;
  while( true ) {
    uVar5 = (uint)((ulonglong)uVar15 >> 0x20);
    iVar11 = (int)uVar15;
    bVar14 = param_1[5] == 0;
    if (param_1[5] == 0) {
      bVar14 = (uint)param_1[4] <= uVar13;
    }
    if (bVar14) break;
    uVar15 = FUN_100a6950(*param_1,param_1[2] + uVar13);
    uVar4 = (undefined4)((ulonglong)uVar15 >> 0x20);
    iVar2 = (int)uVar15;
    if (iVar11 == 1) {
      if (iVar2 == 0) {
        uVar7 = param_1[2];
        param_1[6] = uVar7;
        param_1[7] = param_1[3];
      }
      else {
        if (iVar2 != 2) goto LAB_100a6e86;
        uVar7 = param_1[2];
        param_1[6] = uVar7 + uVar13;
        param_1[7] = param_1[3] + (uint)CARRY4(uVar7,uVar13);
        iVar11 = 2;
      }
      uVar7 = (uVar7 - 0x1000) + uVar13;
      local_50 = local_50 + 1;
      iVar6 = iVar11;
    }
    else if (iVar11 == 2) {
      if (iVar2 == 1) {
        if ((uVar3 >> 0xc | iVar8 << 0x14) < 3) {
          iVar6 = param_1[2];
          param_1[6] = iVar6;
          param_1[7] = param_1[3];
          goto LAB_100a6f02;
        }
        uVar4 = 0;
        bVar14 = param_1[5] == 0;
        if (param_1[5] == 0) {
          bVar14 = (uint)param_1[4] <= uVar13 + 0x1000;
        }
        if (bVar14) {
          uVar7 = param_1[2] + uVar13;
          uVar15 = FUN_1012dd0c(param_1,uVar7);
          uVar4 = (undefined4)((ulonglong)uVar15 >> 0x20);
          param_1[6] = (int)uVar15;
          param_1[7] = 0;
          iVar6 = iVar11;
        }
      }
      else if (iVar2 != 2) {
        if ((iVar2 != 0) || (iVar6 == 2)) goto LAB_100a6e86;
        uVar7 = param_1[2];
        param_1[6] = uVar7;
        param_1[7] = param_1[3];
        param_1[8] = uVar13 + uVar7;
        param_1[9] = param_1[3] + (uint)CARRY4(uVar13,uVar7);
        iVar6 = uVar7 - 0x1000;
LAB_100a6f02:
        uVar7 = iVar6 + uVar13;
        iVar6 = 1;
      }
    }
    else if ((iVar11 != 0) || (iVar2 != 0)) goto LAB_100a6e86;
    uVar15 = CONCAT44(uVar4,iVar2);
    uVar13 = uVar13 + 0x1000;
  }
  if (iVar11 != 0) {
    if (iVar11 == 1) {
      local_50 = local_50 + 1;
    }
    else if (iVar11 != 2) goto LAB_100a6e86;
  }
  if (local_50 == 1) {
    uVar12 = 0;
    uVar3 = (uVar7 & 0xfffff000) + 0xc;
    for (uVar13 = uVar3; uVar10 = (uVar7 & 0xfffff000) + 0x1000, uVar13 < uVar10;
        uVar13 = uVar13 + iVar6) {
      if (uVar13 + 0x20 < uVar10) {
        iVar6 = 0x20;
      }
      else {
        iVar6 = uVar10 - uVar13;
      }
      FUN_1012ddbc(*param_1,uVar5,uVar13,0,abStack_48,iVar6);
      iVar8 = 0;
      pbVar9 = abStack_48;
      do {
        uVar5 = (uint)*pbVar9;
        iVar8 = iVar8 + 1;
        if (uVar5 == 0xff) {
          uVar12 = uVar12 + 1;
        }
        else {
          uVar12 = 0;
        }
        pbVar9 = pbVar9 + 1;
      } while (iVar6 != iVar8);
    }
    if ((uVar12 < 0xff4) && (uVar3 = uVar10, 3 < uVar12)) {
      if ((uVar12 & 3) != 0) {
        uVar12 = (uVar12 & 0xfffffffc) + 4;
      }
      uVar3 = uVar10 - uVar12;
    }
    param_1[8] = uVar3;
    param_1[9] = 0;
    goto LAB_100a6e8c;
  }
LAB_100a6e86:
  FUN_100a6cb8(param_1);
LAB_100a6e8c:
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  return 0;
}

