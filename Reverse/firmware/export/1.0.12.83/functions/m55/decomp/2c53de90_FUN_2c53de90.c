/* FUN_2c53de90 @ 0x2c53de90 */

int * FUN_2c53de90(int *param_1,int param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  
  iVar4 = *DAT_2c53dfdc;
  if (param_3 == param_2 + 4) {
    if (*(int *)(param_2 + 0x14) != 0) {
      param_3 = *(int *)(param_2 + 0x10);
      uVar6 = param_4[1];
      uVar7 = *(uint *)(param_3 + 0x14);
      uVar5 = uVar7;
      if (uVar6 <= uVar7) {
        uVar5 = uVar6;
      }
      if ((uVar5 == 0) ||
         (iVar1 = FUN_2c66960c(*(undefined4 *)(param_3 + 0x10),*param_4), iVar1 == 0)) {
        iVar1 = uVar7 - uVar6;
      }
      if (iVar1 < 0) goto LAB_2c53df7a;
    }
  }
  else {
    uVar8 = *param_4;
    uVar6 = param_4[1];
    uVar3 = *(undefined4 *)(param_3 + 0x10);
    uVar7 = *(uint *)(param_3 + 0x14);
    uVar5 = uVar6;
    if (uVar7 <= uVar6) {
      uVar5 = uVar7;
    }
    if (uVar5 == 0) {
      if ((int)(uVar6 - uVar7) < 0) goto LAB_2c53df14;
LAB_2c53dee8:
      iVar1 = uVar7 - uVar6;
    }
    else {
      iVar1 = FUN_2c66960c(uVar8,uVar3,uVar5);
      if (iVar1 == 0) {
        iVar1 = uVar6 - uVar7;
      }
      if (iVar1 < 0) {
LAB_2c53df14:
        if (*(int *)(param_2 + 0xc) != param_3) {
          iVar1 = thunk_FUN_2c64e460(param_3);
          uVar7 = *(uint *)(iVar1 + 0x14);
          uVar5 = uVar7;
          if (uVar6 <= uVar7) {
            uVar5 = uVar6;
          }
          if ((uVar5 == 0) ||
             (iVar2 = FUN_2c66960c(*(undefined4 *)(iVar1 + 0x10),uVar8), iVar2 == 0)) {
            iVar2 = uVar7 - uVar6;
          }
          if (-1 < iVar2) goto LAB_2c53df82;
          if (*(int *)(iVar1 + 0xc) == 0) {
            *param_1 = 0;
            param_1[1] = iVar1;
            goto LAB_2c53def6;
          }
        }
        *param_1 = param_3;
        param_1[1] = param_3;
        goto LAB_2c53def6;
      }
      iVar1 = FUN_2c66960c(uVar3,uVar8,uVar5);
      if (iVar1 == 0) goto LAB_2c53dee8;
    }
    if (-1 < iVar1) {
      *param_1 = param_3;
      param_1[1] = 0;
      goto LAB_2c53def6;
    }
    if (*(int *)(param_2 + 0x10) == param_3) {
LAB_2c53df7a:
      *param_1 = 0;
      param_1[1] = param_3;
      goto LAB_2c53def6;
    }
    iVar1 = thunk_FUN_2c64e43a(param_3);
    uVar7 = *(uint *)(iVar1 + 0x14);
    uVar5 = uVar7;
    if (uVar6 <= uVar7) {
      uVar5 = uVar6;
    }
    if ((uVar5 == 0) || (iVar2 = FUN_2c66960c(uVar8,*(undefined4 *)(iVar1 + 0x10)), iVar2 == 0)) {
      iVar2 = uVar6 - uVar7;
    }
    if (iVar2 < 0) {
      if (*(int *)(param_3 + 0xc) == 0) {
        *param_1 = 0;
        param_1[1] = param_3;
      }
      else {
        *param_1 = iVar1;
        param_1[1] = iVar1;
      }
      goto LAB_2c53def6;
    }
  }
LAB_2c53df82:
  FUN_2c53dde0(param_1,param_2,param_4);
LAB_2c53def6:
  if (*DAT_2c53dfdc == iVar4) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

