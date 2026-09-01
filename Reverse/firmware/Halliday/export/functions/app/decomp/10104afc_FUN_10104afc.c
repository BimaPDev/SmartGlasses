/* FUN_10104afc @ 0x10104afc */

void FUN_10104afc(int param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  undefined4 local_48;
  int local_44;
  int local_34;
  uint local_30;
  
  uVar8 = *(uint *)(param_1 + 0x3c);
  iVar2 = *(int *)(param_1 + 0x18);
  iVar3 = (int)uVar8 >> 8;
  iVar1 = (int)param_3 >> 8;
  if (((iVar3 < iVar2) || (iVar1 < iVar2)) &&
     ((*(int *)(param_1 + 0x14) <= iVar3 || (*(int *)(param_1 + 0x14) <= iVar1)))) {
    local_30 = param_3 & 0xff;
    uVar6 = uVar8 & 0xff;
    if (iVar3 == iVar1) {
      FUN_10104910(param_1,iVar3,*(undefined4 *)(param_1 + 0x38),uVar6,param_2,local_30);
    }
    else {
      uVar4 = *(uint *)(param_1 + 0x38);
      iVar10 = param_3 - uVar8;
      iVar11 = param_2 - uVar4;
      if (iVar11 == 0) {
        iVar9 = (uVar4 & 0xff) * 2;
        iVar11 = (int)uVar4 >> 8;
        if (iVar10 < 1) {
          iVar7 = -0x100;
          local_30 = local_30 - 0x100;
          iVar10 = -1;
          iVar12 = 0;
        }
        else {
          iVar7 = 0x100;
          iVar10 = 1;
          iVar12 = 0x100;
        }
        iVar5 = (iVar12 - uVar6) * iVar9 + *(int *)(param_1 + 0x1c);
        iVar12 = (iVar12 - uVar6) + *(int *)(param_1 + 0x20);
        *(int *)(param_1 + 0x1c) = iVar5;
        *(int *)(param_1 + 0x20) = iVar12;
        iVar3 = iVar10 + iVar3;
        if ((*(int *)(param_1 + 0x24) == 0) && (iVar12 != 0 || iVar5 != 0)) {
          FUN_10103f90(param_1);
          iVar2 = *(int *)(param_1 + 0x18);
        }
        iVar12 = *(int *)(param_1 + 0xc) + -1;
        iVar5 = iVar12;
        if (iVar12 < iVar11) {
          iVar5 = iVar11;
        }
        *(undefined4 *)(param_1 + 0x1c) = 0;
        *(undefined4 *)(param_1 + 0x20) = 0;
        *(int *)(param_1 + 8) = iVar3;
        *(int *)(param_1 + 4) = iVar5;
        if ((iVar3 < iVar2) && (*(int *)(param_1 + 0x14) <= iVar3)) {
          if (iVar11 < *(int *)(param_1 + 0x10)) {
            uVar8 = 0;
          }
          else {
            uVar8 = 1;
          }
        }
        else {
          uVar8 = 1;
        }
        *(uint *)(param_1 + 0x24) = uVar8;
        while (iVar1 != iVar3) {
          while( true ) {
            *(int *)(param_1 + 0x1c) = iVar7 * iVar9;
            *(int *)(param_1 + 0x20) = iVar7;
            iVar3 = iVar3 + iVar10;
            if ((uVar8 == 0) && (iVar7 * iVar9 != 0 || iVar7 != 0)) {
              FUN_10103f90(param_1);
              iVar2 = *(int *)(param_1 + 0x18);
              iVar12 = *(int *)(param_1 + 0xc) + -1;
            }
            iVar5 = iVar12;
            if (iVar12 < iVar11) {
              iVar5 = iVar11;
            }
            *(undefined4 *)(param_1 + 0x1c) = 0;
            *(undefined4 *)(param_1 + 0x20) = 0;
            *(int *)(param_1 + 4) = iVar5;
            *(int *)(param_1 + 8) = iVar3;
            if ((iVar3 < iVar2) && (*(int *)(param_1 + 0x14) <= iVar3)) break;
            uVar8 = 1;
            *(undefined4 *)(param_1 + 0x24) = 1;
            if (iVar1 == iVar3) goto LAB_10104db0;
          }
          uVar8 = (uint)(*(int *)(param_1 + 0x10) <= iVar11);
          *(uint *)(param_1 + 0x24) = uVar8;
        }
LAB_10104db0:
        *(uint *)(param_1 + 0x1c) = local_30 * iVar9;
        *(uint *)(param_1 + 0x20) = local_30;
      }
      else {
        if (iVar10 < 1) {
          local_48 = 0;
          local_44 = -1;
          uVar13 = 0x100;
          iVar10 = uVar8 - param_3;
          uVar8 = uVar6;
        }
        else {
          uVar13 = 0;
          local_48 = 0x100;
          local_44 = 1;
          uVar8 = 0x100 - uVar6;
        }
        iVar2 = (int)(iVar11 * uVar8) / iVar10;
        iVar9 = iVar11 * uVar8 - iVar10 * iVar2;
        if (iVar9 < 0) {
          iVar2 = iVar2 + -1;
        }
        iVar2 = iVar2 + uVar4;
        if (iVar9 < 0) {
          iVar9 = iVar9 + iVar10;
        }
        FUN_10104910(param_1,iVar3,uVar4,uVar6,iVar2,local_48);
        iVar3 = local_44 + iVar3;
        iVar12 = iVar2 >> 8;
        if ((*(int *)(param_1 + 0x24) == 0) &&
           ((*(int *)(param_1 + 0x1c) != 0 || (*(int *)(param_1 + 0x20) != 0)))) {
          FUN_10103f90(param_1);
        }
        iVar7 = *(int *)(param_1 + 0xc) + -1;
        if (iVar7 < iVar12) {
          iVar7 = iVar12;
        }
        *(int *)(param_1 + 4) = iVar7;
        *(undefined4 *)(param_1 + 0x1c) = 0;
        *(undefined4 *)(param_1 + 0x20) = 0;
        *(int *)(param_1 + 8) = iVar3;
        if ((iVar3 < *(int *)(param_1 + 0x18)) && (*(int *)(param_1 + 0x14) <= iVar3)) {
          uVar8 = (uint)(*(int *)(param_1 + 0x10) <= iVar12);
        }
        else {
          uVar8 = 1;
        }
        *(uint *)(param_1 + 0x24) = uVar8;
        if (iVar1 != iVar3) {
          local_34 = (iVar11 * 0x100) / iVar10;
          iVar11 = iVar11 * 0x100 - iVar10 * local_34;
          if (iVar11 < 0) {
            local_34 = local_34 + -1;
            iVar11 = iVar11 + iVar10;
          }
          iVar12 = iVar2;
          do {
            iVar9 = iVar9 + iVar11;
            iVar2 = local_34 + 1;
            if (iVar9 < iVar10) {
              iVar2 = local_34;
            }
            iVar2 = iVar12 + iVar2;
            if (iVar10 <= iVar9) {
              iVar9 = iVar9 - iVar10;
            }
            FUN_10104910(param_1,iVar3,iVar12,uVar13,iVar2,local_48);
            iVar3 = iVar3 + local_44;
            iVar12 = iVar2 >> 8;
            if ((*(int *)(param_1 + 0x24) == 0) &&
               ((*(int *)(param_1 + 0x1c) != 0 || (*(int *)(param_1 + 0x20) != 0)))) {
              FUN_10103f90(param_1);
            }
            iVar7 = *(int *)(param_1 + 0xc) + -1;
            if (iVar7 < iVar12) {
              iVar7 = iVar12;
            }
            *(int *)(param_1 + 4) = iVar7;
            *(int *)(param_1 + 8) = iVar3;
            *(undefined4 *)(param_1 + 0x1c) = 0;
            *(undefined4 *)(param_1 + 0x20) = 0;
            if ((iVar3 < *(int *)(param_1 + 0x18)) && (*(int *)(param_1 + 0x14) <= iVar3)) {
              *(uint *)(param_1 + 0x24) = (uint)(*(int *)(param_1 + 0x10) <= iVar12);
            }
            else {
              *(undefined4 *)(param_1 + 0x24) = 1;
            }
            iVar12 = iVar2;
          } while (iVar1 != iVar3);
        }
        FUN_10104910(param_1,iVar3,iVar2,uVar13,param_2,local_30);
      }
    }
  }
  *(int *)(param_1 + 0x38) = param_2;
  *(uint *)(param_1 + 0x3c) = param_3;
  return;
}

