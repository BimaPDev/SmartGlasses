/* FUN_2c4d36cc @ 0x2c4d36cc */

int FUN_2c4d36cc(undefined1 *param_1,int param_2)

{
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 extraout_r1;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined1 *puVar10;
  int iVar11;
  int iVar12;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 extraout_s4;
  undefined4 extraout_s5;
  uint local_28;
  code *local_24;
  
  local_24 = (code *)*DAT_2c4d39f8;
  if (param_1 == (undefined1 *)0x0) {
    iVar11 = 0x202;
    goto LAB_2c4d3752;
  }
  iVar11 = param_2 * 0x2c;
  if (*(int *)(param_1 + iVar11 + 0x60) == 0) {
    puVar10 = param_1 + iVar11 + 0x44;
    FUN_2c4d766c(puVar10,*(undefined4 *)(param_1 + iVar11 + 0x40));
  }
  else if (*(int *)(param_1 + iVar11 + 0x40) == 0) {
    puVar10 = param_1 + iVar11 + 0x44;
  }
  else {
    puVar10 = param_1 + iVar11 + 0x44;
    FUN_2c4d7598(puVar10,*(undefined4 *)(param_1 + iVar11 + 0x3c));
  }
  *(undefined4 *)(param_1 + param_2 * 0x2c + 0x3c) = 0;
  *(undefined4 *)(param_1 + param_2 * 0x2c + 0x40) = 0;
  iVar3 = FUN_2c4d76a8(puVar10);
  uVar1 = *param_1;
  if (iVar3 < 1) {
    *(undefined4 *)(param_1 + 0x318) = 0;
    UNRECOVERED_JUMPTABLE = (code *)0x2c4d3719;
    switch(uVar1) {
    case 0:
    case 0xc:
      UNRECOVERED_JUMPTABLE = local_24;
    case 6:
    case 7:
      *(uint **)(iVar3 + 4) = &switchD_2c4d387a::switchdataD_2c4d3880;
      *(undefined4 *)(iVar3 + 8) = extraout_r1;
                    /* WARNING: Could not recover jumptable at 0x2c4ddafa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar11 = (*UNRECOVERED_JUMPTABLE)(1);
      return iVar11;
    case 1:
    case 3:
    case 4:
    case 5:
    case 8:
    case 9:
    case 0xb:
      return iVar3;
    case 2:
    case 10:
      VectorSignedFixedToFloat(CONCAT44(extraout_s5,extraout_s4),0x17);
      UINT_2c4d388c._0_1_ = uVar1;
      piVar6 = (int *)FUN_2c4e36cc();
      if (piVar6 == (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x2c4e37a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        iVar11 = (*(code *)0x2c4d3719)();
        return iVar11;
      }
      iVar11 = FUN_2c4df9ea();
      if (iVar11 != 0) {
        iVar3 = FUN_2c4de9c0(iVar11 + 0x30);
        if (iVar3 != 0) {
          FUN_2c4dea30(iVar11 + 0x30);
        }
      }
                    /* WARNING: Could not recover jumptable at 0x2c4e37a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar11 = (**(code **)(*piVar6 + 4))(piVar6);
      return iVar11;
    }
switchD_2c4d3726_caseD_1:
    iVar11 = 0x402;
  }
  else {
    switch(uVar1) {
    case 0:
    case 0xc:
      iVar11 = 0;
      if (*(int *)(param_1 + param_2 * 0x2c + 0x60) == 0) {
        FUN_2c4d766c(puVar10,*(undefined4 *)(param_1 + param_2 * 0x2c + 0x40));
      }
      else if (*(int *)(param_1 + param_2 * 0x2c + 0x40) != 0) {
        FUN_2c4d7598(puVar10,*(undefined4 *)(param_1 + param_2 * 0x2c + 0x3c));
      }
      *(undefined4 *)(param_1 + param_2 * 0x2c + 0x3c) = 0;
      *(undefined4 *)(param_1 + param_2 * 0x2c + 0x40) = 0;
      uVar5 = FUN_2c4d76a8(puVar10);
      *(undefined4 *)(param_1 + (param_2 + 0xc4) * 4 + 4) = uVar5;
      *(uint *)(param_1 + 0x334) = *(uint *)(param_1 + 0x334) | 1;
      break;
    default:
      goto switchD_2c4d3726_caseD_1;
    case 2:
    case 10:
      if (*(int *)(param_1 + param_2 * 0x2c + 0x60) == 0) {
        FUN_2c4d766c(puVar10,*(undefined4 *)(param_1 + param_2 * 0x2c + 0x40));
      }
      else if (*(int *)(param_1 + param_2 * 0x2c + 0x40) != 0) {
        FUN_2c4d7598(puVar10,*(undefined4 *)(param_1 + param_2 * 0x2c + 0x3c));
      }
      *(undefined4 *)(param_1 + param_2 * 0x2c + 0x3c) = 0;
      *(undefined4 *)(param_1 + param_2 * 0x2c + 0x40) = 0;
      iVar3 = FUN_2c4d76a8(puVar10);
      iVar11 = FUN_2c4d29a4(param_1,&local_28);
      if (*(int *)(param_1 + param_2 * 0x2c + 0x60) == 0) {
        FUN_2c4d766c(puVar10,*(undefined4 *)(param_1 + param_2 * 0x2c + 0x40));
      }
      else if (*(int *)(param_1 + param_2 * 0x2c + 0x40) != 0) {
        FUN_2c4d7598(puVar10,*(undefined4 *)(param_1 + param_2 * 0x2c + 0x3c));
      }
      *(undefined4 *)(param_1 + param_2 * 0x2c + 0x3c) = 0;
      *(undefined4 *)(param_1 + param_2 * 0x2c + 0x40) = 0;
      iVar4 = FUN_2c4d76a8(puVar10);
      if ((((iVar11 != 0x102) && (-1 < *(int *)(param_1 + 0x334) << 0x1b)) ||
          (iVar9 = *(int *)(param_1 + 0x31c), iVar9 == 0)) ||
         ((iVar7 = *(int *)(param_1 + 0x1cc), iVar7 == 0 ||
          (iVar12 = *(int *)(param_1 + 0x1c8), iVar12 == 0)))) {
        iVar3 = -1;
        goto LAB_2c4d39a6;
      }
      iVar3 = iVar3 - iVar4;
      if (iVar11 != 0) {
        if (-1 < (int)(*(uint *)(param_1 + 0x334) << 0x1b)) {
          *(uint *)(param_1 + 0x334) = *(uint *)(param_1 + 0x334) | 0x10;
          iVar3 = iVar3 - *(int *)(param_1 + 800);
        }
        iVar4 = iVar3 * iVar12 + *(int *)(param_1 + 0x324);
        if (iVar4 < 1) {
          iVar3 = -1;
          *(int *)(param_1 + 0x324) = iVar4;
LAB_2c4d39a6:
          *(int *)(param_1 + 0x328) = iVar3;
          break;
        }
        iVar3 = iVar4 / (iVar9 * iVar7);
        *(int *)(param_1 + 0x324) = iVar4 - iVar9 * iVar7 * iVar3;
        if (iVar3 < 1) goto LAB_2c4d39a6;
LAB_2c4d3a3e:
        iVar11 = 0x102;
        *(int *)(param_1 + 0x328) = iVar3;
        goto LAB_2c4d374c;
      }
      iVar11 = FUN_2c4d2908(param_1);
      uVar2 = local_28;
      iVar7 = iVar7 * iVar9;
      iVar3 = *(int *)(param_1 + 0x314) + iVar3;
      if (-1 < iVar11) {
        iVar3 = iVar3 + iVar11;
      }
      *(uint *)(param_1 + 0x334) = *(uint *)(param_1 + 0x334) & 0xffffffef;
      iVar11 = iVar12 * iVar3 + *(int *)(param_1 + 0x324);
      if (iVar11 < 1) {
        *(int *)(param_1 + 0x324) = iVar11;
LAB_2c4d3a50:
        FUN_2c4d3564(param_1);
        iVar11 = FUN_2c4d29a4(param_1,&local_28);
        *(undefined4 *)(param_1 + 0x324) = 0;
        iVar3 = -1;
        goto LAB_2c4d39a6;
      }
      iVar3 = iVar11 / iVar7;
      iVar11 = iVar11 - iVar7 * iVar3;
      *(int *)(param_1 + 0x324) = iVar11;
      if (iVar11 <= iVar7 - iVar11) {
        iVar3 = iVar3 + -1;
      }
      if (iVar3 < 0) goto LAB_2c4d3a50;
      *(undefined4 *)(param_1 + 0x324) = 0;
      if (iVar3 != 0) {
        iVar11 = *(int *)(param_1 + param_2 * 0x2c + 0x40);
        uVar8 = local_28 + iVar11;
        if (uVar8 < 0x20) {
          if (*(int *)(param_1 + param_2 * 0x2c + 0x60) == 0) {
            *(uint *)(param_1 + param_2 * 0x2c + 0x40) = uVar8;
            FUN_2c4d766c(puVar10,uVar8,0);
            *(undefined4 *)(param_1 + param_2 * 0x2c + 0x3c) = 0;
            *(undefined4 *)(param_1 + param_2 * 0x2c + 0x40) = 0;
            goto LAB_2c4d3a3e;
          }
LAB_2c4d3a8a:
          if (iVar11 != 0) {
            FUN_2c4d7598(puVar10,*(undefined4 *)(param_1 + param_2 * 0x2c + 0x3c),iVar11);
          }
        }
        else {
          if (*(int *)(param_1 + param_2 * 0x2c + 0x60) != 0) goto LAB_2c4d3a8a;
          FUN_2c4d766c(puVar10);
        }
        *(undefined4 *)(param_1 + param_2 * 0x2c + 0x3c) = 0;
        *(undefined4 *)(param_1 + param_2 * 0x2c + 0x40) = 0;
        FUN_2c4d766c(puVar10,uVar2,param_1[param_2 * 0x2c + 0x60]);
        goto LAB_2c4d3a3e;
      }
      *(undefined4 *)(param_1 + 0x328) = 0;
      goto LAB_2c4d3918;
    case 6:
    case 7:
      local_28 = *(uint *)(param_1 + 0x334) & 0x20;
      iVar11 = FUN_2c4d1e60(param_1,param_1 + iVar11 + 0x3c,0,1);
      if (local_28 != 0) {
        *(uint *)(param_1 + 0x334) = *(uint *)(param_1 + 0x334) | 0x20;
      }
    }
    if (iVar11 == 0) {
LAB_2c4d3918:
      if (*(int *)(param_1 + param_2 * 0x2c + 0x60) == 0) {
        FUN_2c4d766c(puVar10,*(undefined4 *)(param_1 + param_2 * 0x2c + 0x40));
      }
      else if (*(int *)(param_1 + param_2 * 0x2c + 0x40) != 0) {
        FUN_2c4d7598(puVar10,*(undefined4 *)(param_1 + param_2 * 0x2c + 0x3c));
      }
      iVar11 = 0;
      *(undefined4 *)(param_1 + param_2 * 0x2c + 0x3c) = 0;
      *(undefined4 *)(param_1 + param_2 * 0x2c + 0x40) = 0;
      uVar5 = FUN_2c4d76a8(puVar10);
      *(undefined4 *)(param_1 + (param_2 + 0xc4) * 4) = uVar5;
      goto LAB_2c4d3752;
    }
  }
LAB_2c4d374c:
  *(undefined4 *)(param_1 + (param_2 + 0xc4) * 4) = 0;
LAB_2c4d3752:
  if ((code *)*DAT_2c4d39f8 != local_24) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return iVar11;
}

