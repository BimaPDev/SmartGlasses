/* FUN_2c5a0504 @ 0x2c5a0504 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_2c5a0504(int *param_1,int param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  
  iVar4 = *_LAB_2c5a0650;
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
      if (iVar1 < 0) goto LAB_2c5a05ee;
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
      if ((int)(uVar6 - uVar7) < 0) goto LAB_2c5a0588;
LAB_2c5a055c:
      iVar1 = uVar7 - uVar6;
    }
    else {
      iVar1 = FUN_2c66960c(uVar8,uVar3,uVar5);
      if (iVar1 == 0) {
        iVar1 = uVar6 - uVar7;
      }
      if (iVar1 < 0) {
LAB_2c5a0588:
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
          if (-1 < iVar2) goto LAB_2c5a05f6;
          if (*(int *)(iVar1 + 0xc) == 0) {
            *param_1 = 0;
            param_1[1] = iVar1;
            goto LAB_2c5a056a;
          }
        }
        *param_1 = param_3;
        param_1[1] = param_3;
        goto LAB_2c5a056a;
      }
      iVar1 = FUN_2c66960c(uVar3,uVar8,uVar5);
      if (iVar1 == 0) goto LAB_2c5a055c;
    }
    if (-1 < iVar1) {
      *param_1 = param_3;
      param_1[1] = 0;
      goto LAB_2c5a056a;
    }
    if (*(int *)(param_2 + 0x10) == param_3) {
LAB_2c5a05ee:
      *param_1 = 0;
      param_1[1] = param_3;
      goto LAB_2c5a056a;
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
      goto LAB_2c5a056a;
    }
  }
LAB_2c5a05f6:
  FUN_2c59e550(param_1,param_2,param_4);
LAB_2c5a056a:
  if (*_LAB_2c5a0650 == iVar4) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

