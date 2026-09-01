/* FUN_100fb410 @ 0x100fb410 */

int FUN_100fb410(undefined4 *param_1,int param_2,int param_3)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  int local_28;
  int local_24 [2];
  
  uVar8 = param_1[1];
  uVar10 = *param_1;
  local_28 = 0;
  if ((uVar8 == 0) || (param_1[10] != 0)) {
    iVar5 = (int)*(short *)((int)param_1 + 0x16);
  }
  else {
    iVar3 = FUN_100fb280(uVar10,8,0,uVar8 << 1,0,local_24);
    param_1[10] = iVar3;
    if (local_24[0] != 0) {
      return local_24[0];
    }
    uVar8 = param_1[1];
    iVar6 = param_1[6];
    iVar7 = iVar3 + uVar8 * 8;
    *(undefined1 *)(param_1 + 4) = 1;
    param_1[0xb] = iVar7;
    iVar5 = (int)*(short *)((int)param_1 + 0x16);
    if (iVar6 != 0) {
      iVar6 = iVar6 + iVar5 * 8;
    }
    iVar9 = param_1[7];
    param_1[0xf] = iVar6;
    if (iVar9 != 0) {
      iVar9 = iVar9 + iVar5;
    }
    iVar6 = param_1[8];
    param_1[0x10] = iVar9;
    if (iVar6 != 0) {
      iVar6 = iVar6 + *(short *)(param_1 + 5) * 2;
    }
    param_1[0x13] = iVar3 + iVar5 * 8;
    param_1[0x14] = iVar7 + iVar5 * 8;
    param_1[0x11] = iVar6;
  }
  local_28 = 0;
  uVar4 = *(short *)((int)param_1 + 0x3a) + param_2 + iVar5;
  if (uVar8 < uVar4) {
    uVar4 = uVar4 + 7 & 0xfffffff8;
    if (0x7fff < uVar4) {
      return 10;
    }
    uVar2 = FUN_100fb280(uVar10,8,uVar8,uVar4,param_1[6],&local_28);
    param_1[6] = uVar2;
    if (local_28 == 0) {
      uVar2 = FUN_100fb280(uVar10,1,uVar8,uVar4,param_1[7],&local_28);
      param_1[7] = uVar2;
      if (local_28 == 0) {
        if (*(char *)(param_1 + 4) != '\0') {
          iVar5 = FUN_100fb280(uVar10,8,uVar8 << 1,uVar4 << 1,param_1[10],&local_28);
          param_1[10] = iVar5;
          if (local_28 != 0) goto LAB_100fb466;
          FUN_1011ea38(iVar5 + uVar4 * 8,iVar5 + uVar8 * 8,uVar8 << 3);
          param_1[0xb] = param_1[10] + uVar4 * 8;
        }
        param_1[1] = uVar4;
        bVar1 = true;
        goto LAB_100fb478;
      }
    }
LAB_100fb466:
    FUN_100f89e4(param_1);
    iVar5 = local_28;
  }
  else {
    bVar1 = false;
LAB_100fb478:
    iVar5 = FUN_100f8bf0(param_1);
    if (iVar5 != 0) {
      return iVar5;
    }
    uVar8 = param_3 + (int)*(short *)(param_1 + 5) + (int)*(short *)(param_1 + 0xe);
    if ((uint)param_1[2] < uVar8) {
      uVar8 = uVar8 + 3 & 0xfffffffc;
      if (0x7fff < uVar8) {
        return 10;
      }
      local_28 = iVar5;
      iVar3 = FUN_100fb280(uVar10,2,param_1[2],uVar8,param_1[8],&local_28);
      param_1[8] = iVar3;
      if (local_28 != 0) goto LAB_100fb466;
      param_1[2] = uVar8;
    }
    else {
      if (!bVar1) {
        return 0;
      }
      iVar3 = param_1[8];
    }
    iVar6 = param_1[6];
    if (iVar6 != 0) {
      iVar6 = iVar6 + *(short *)((int)param_1 + 0x16) * 8;
    }
    iVar7 = param_1[7];
    param_1[0xf] = iVar6;
    if (iVar7 != 0) {
      iVar7 = iVar7 + *(short *)((int)param_1 + 0x16);
    }
    param_1[0x10] = iVar7;
    if (iVar3 != 0) {
      iVar3 = iVar3 + *(short *)(param_1 + 5) * 2;
    }
    param_1[0x11] = iVar3;
    if (*(char *)(param_1 + 4) != '\0') {
      param_1[0x13] = param_1[10] + *(short *)((int)param_1 + 0x16) * 8;
      param_1[0x14] = param_1[0xb] + *(short *)((int)param_1 + 0x16) * 8;
    }
  }
  return iVar5;
}

