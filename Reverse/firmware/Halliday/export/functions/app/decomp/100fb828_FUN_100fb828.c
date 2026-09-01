/* FUN_100fb828 @ 0x100fb828 */

undefined4 FUN_100fb828(int *param_1,int *param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_30;
  int local_2c;
  
  iVar5 = *param_1;
  iVar3 = param_4[2];
  iVar4 = param_4[4];
  iVar6 = *param_2;
  if (iVar5 < iVar3) {
    local_30 = *param_4;
    local_2c = *param_3;
    if (iVar4 < iVar5) {
LAB_100fb852:
      iVar1 = FUN_100fb6d8(local_30 - iVar4,iVar5 - iVar4,iVar6 - iVar4,local_2c - iVar4);
      param_4[4] = iVar1 + iVar4;
    }
    else {
LAB_100fb91a:
      if (iVar4 < iVar6) goto LAB_100fb852;
    }
    if ((iVar5 < iVar3) || (iVar6 < iVar3)) {
      iVar4 = FUN_100fb6d8(iVar3 - local_30,iVar3 - iVar5,iVar3 - iVar6,iVar3 - local_2c);
      param_4[2] = iVar3 - iVar4;
    }
  }
  else {
    if (iVar4 < iVar5) {
LAB_100fb84a:
      local_30 = *param_4;
      local_2c = *param_3;
      goto LAB_100fb852;
    }
    if (iVar6 < iVar3) {
      local_30 = *param_4;
      local_2c = *param_3;
      goto LAB_100fb91a;
    }
    if (iVar4 < iVar6) goto LAB_100fb84a;
  }
  iVar5 = param_1[1];
  iVar3 = param_4[3];
  iVar4 = param_4[5];
  iVar6 = param_2[1];
  if (iVar5 < iVar3) {
    iVar7 = param_4[1];
    iVar1 = param_3[1];
    if (iVar4 < iVar5) goto LAB_100fb8c6;
LAB_100fb92c:
    if (iVar4 < iVar6) goto LAB_100fb8c6;
  }
  else {
    if (iVar5 <= iVar4) {
      if (iVar6 < iVar3) {
        iVar7 = param_4[1];
        iVar1 = param_3[1];
        goto LAB_100fb92c;
      }
      if (iVar6 <= iVar4) goto LAB_100fb8fe;
    }
    iVar7 = param_4[1];
    iVar1 = param_3[1];
LAB_100fb8c6:
    iVar2 = FUN_100fb6d8(iVar7 - iVar4,iVar5 - iVar4,iVar6 - iVar4,iVar1 - iVar4);
    param_4[5] = iVar2 + iVar4;
  }
  if ((iVar5 < iVar3) || (iVar6 < iVar3)) {
    iVar4 = FUN_100fb6d8(iVar3 - iVar7,iVar3 - iVar5,iVar3 - iVar6,iVar3 - iVar1);
    param_4[3] = iVar3 - iVar4;
  }
LAB_100fb8fe:
  iVar3 = param_3[1];
  *param_4 = *param_3;
  param_4[1] = iVar3;
  return 0;
}

