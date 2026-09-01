/* FUN_10104910 @ 0x10104910 */

void FUN_10104910(int param_1,int param_2,uint param_3,int param_4,uint param_5,int param_6)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int local_40;
  int local_3c;
  int local_38;
  uint local_30;
  
  iVar4 = (int)param_5 >> 8;
  if (param_4 == param_6) {
    if ((*(int *)(param_1 + 0x24) == 0) &&
       ((*(int *)(param_1 + 0x1c) != 0 || (*(int *)(param_1 + 0x20) != 0)))) {
      FUN_10103f90(param_1);
    }
    iVar8 = *(int *)(param_1 + 0xc) + -1;
    if (iVar8 < iVar4) {
      iVar8 = iVar4;
    }
    *(int *)(param_1 + 4) = iVar8;
    *(int *)(param_1 + 8) = param_2;
    *(undefined4 *)(param_1 + 0x1c) = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
    if ((param_2 < *(int *)(param_1 + 0x18)) && (*(int *)(param_1 + 0x14) <= param_2)) {
      uVar1 = (uint)(*(int *)(param_1 + 0x10) <= iVar4);
    }
    else {
      uVar1 = 1;
    }
    *(uint *)(param_1 + 0x24) = uVar1;
    return;
  }
  local_30 = param_5 & 0xff;
  uVar1 = param_3 & 0xff;
  if ((int)param_3 >> 8 == iVar4) {
    local_30 = local_30 + uVar1;
    iVar8 = *(int *)(param_1 + 0x1c);
    iVar4 = *(int *)(param_1 + 0x20);
  }
  else {
    iVar7 = param_5 - param_3;
    iVar8 = param_6 - param_4;
    if (iVar7 < 1) {
      iVar7 = param_3 - param_5;
      local_30 = local_30 + 0x100;
      local_3c = -1;
      uVar5 = uVar1;
    }
    else {
      uVar5 = 0x100 - uVar1;
      uVar1 = uVar1 + 0x100;
      local_3c = 1;
    }
    iVar6 = iVar8 * uVar5;
    iVar3 = iVar6 / iVar7;
    iVar6 = iVar6 - iVar7 * iVar3;
    if (iVar6 < 0) {
      iVar3 = iVar3 + -1;
    }
    iVar2 = uVar1 * iVar3 + *(int *)(param_1 + 0x1c);
    param_4 = param_4 + iVar3;
    iVar3 = *(int *)(param_1 + 0x20) + iVar3;
    *(int *)(param_1 + 0x1c) = iVar2;
    *(int *)(param_1 + 0x20) = iVar3;
    if (iVar6 < 0) {
      iVar6 = iVar6 + iVar7;
    }
    iVar9 = ((int)param_3 >> 8) + local_3c;
    if ((*(int *)(param_1 + 0x24) == 0) && (iVar2 != 0 || iVar3 != 0)) {
      FUN_10103f90(param_1);
    }
    iVar2 = *(int *)(param_1 + 0xc);
    iVar3 = iVar2 + -1;
    if (iVar2 + -1 < iVar9) {
      iVar3 = iVar9;
    }
    iVar10 = *(int *)(param_1 + 0x18);
    *(undefined4 *)(param_1 + 0x1c) = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(int *)(param_1 + 8) = param_2;
    *(int *)(param_1 + 4) = iVar3;
    if ((param_2 < iVar10) && (*(int *)(param_1 + 0x14) <= param_2)) {
      uVar1 = (uint)(*(int *)(param_1 + 0x10) <= iVar9);
    }
    else {
      uVar1 = 1;
    }
    *(uint *)(param_1 + 0x24) = uVar1;
    if (iVar4 != iVar9) {
      iVar8 = iVar8 * 0x100;
      local_38 = iVar8 / iVar7;
      iVar8 = iVar8 - iVar7 * local_38;
      if (iVar8 < 0) {
        local_38 = local_38 + -1;
        iVar8 = iVar8 + iVar7;
      }
      local_40 = param_4;
      do {
        while( true ) {
          iVar6 = iVar6 + iVar8;
          iVar3 = local_38 + 1;
          if (iVar6 < iVar7) {
            iVar3 = local_38;
          }
          param_4 = local_40 + iVar3;
          if (iVar7 <= iVar6) {
            iVar6 = iVar6 - iVar7;
          }
          *(int *)(param_1 + 0x20) = iVar3;
          iVar9 = iVar9 + local_3c;
          *(int *)(param_1 + 0x1c) = iVar3 << 8;
          if ((uVar1 == 0) && (iVar3 << 8 != 0 || iVar3 != 0)) {
            FUN_10103f90(param_1);
            iVar2 = *(int *)(param_1 + 0xc);
            iVar10 = *(int *)(param_1 + 0x18);
          }
          iVar3 = iVar2 + -1;
          if (iVar2 + -1 < iVar9) {
            iVar3 = iVar9;
          }
          *(undefined4 *)(param_1 + 0x1c) = 0;
          *(undefined4 *)(param_1 + 0x20) = 0;
          *(int *)(param_1 + 4) = iVar3;
          *(int *)(param_1 + 8) = param_2;
          local_40 = param_4;
          if ((param_2 < iVar10) && (*(int *)(param_1 + 0x14) <= param_2)) break;
          uVar1 = 1;
          *(undefined4 *)(param_1 + 0x24) = 1;
          if (iVar4 == iVar9) goto LAB_10104a62;
        }
        uVar1 = (uint)(*(int *)(param_1 + 0x10) <= iVar9);
        *(uint *)(param_1 + 0x24) = uVar1;
      } while (iVar4 != iVar9);
    }
LAB_10104a62:
    iVar4 = 0;
    iVar8 = 0;
  }
  *(uint *)(param_1 + 0x1c) = local_30 * (param_6 - param_4) + iVar8;
  *(int *)(param_1 + 0x20) = (param_6 - param_4) + iVar4;
  return;
}

