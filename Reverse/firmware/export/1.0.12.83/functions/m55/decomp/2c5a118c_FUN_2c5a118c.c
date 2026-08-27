/* FUN_2c5a118c @ 0x2c5a118c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_2c5a118c(int *param_1,int param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  
  iVar4 = *_LAB_2c5a12d8;
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
      if (iVar1 < 0) goto LAB_2c5a1276;
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
      if ((int)(uVar6 - uVar7) < 0) goto LAB_2c5a1210;
LAB_2c5a11e4:
      iVar1 = uVar7 - uVar6;
    }
    else {
      iVar1 = FUN_2c66960c(uVar8,uVar3,uVar5);
      if (iVar1 == 0) {
        iVar1 = uVar6 - uVar7;
      }
      if (iVar1 < 0) {
LAB_2c5a1210:
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
          if (-1 < iVar2) goto LAB_2c5a127e;
          if (*(int *)(iVar1 + 0xc) == 0) {
            *param_1 = 0;
            param_1[1] = iVar1;
            goto LAB_2c5a11f2;
          }
        }
        *param_1 = param_3;
        param_1[1] = param_3;
        goto LAB_2c5a11f2;
      }
      iVar1 = FUN_2c66960c(uVar3,uVar8,uVar5);
      if (iVar1 == 0) goto LAB_2c5a11e4;
    }
    if (-1 < iVar1) {
      *param_1 = param_3;
      param_1[1] = 0;
      goto LAB_2c5a11f2;
    }
    if (*(int *)(param_2 + 0x10) == param_3) {
LAB_2c5a1276:
      *param_1 = 0;
      param_1[1] = param_3;
      goto LAB_2c5a11f2;
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
      goto LAB_2c5a11f2;
    }
  }
LAB_2c5a127e:
  FUN_2c59e7b0(param_1,param_2,param_4);
LAB_2c5a11f2:
  if (*_LAB_2c5a12d8 == iVar4) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

