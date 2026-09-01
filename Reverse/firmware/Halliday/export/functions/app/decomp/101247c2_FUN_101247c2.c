/* FUN_101247c2 @ 0x101247c2 */

uint FUN_101247c2(int param_1,uint param_2,uint param_3,int param_4,char param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = FUN_10124cb8(param_1,0x20);
  if (iVar1 == 0) {
    if ((int)(param_4 + param_2) < 0) {
      param_2 = -param_4;
    }
    if (-1 < (int)(param_3 - param_2)) {
      return param_2 & ~((int)(param_3 - param_2) >> 0x20);
    }
    return param_3;
  }
  if (param_5 == '\x03') {
    iVar1 = FUN_10125fe2();
  }
  else {
    iVar1 = FUN_10125ff0(param_1);
  }
  iVar2 = FUN_100876fc();
  if (param_5 == '\x03') {
    iVar3 = FUN_1012691c(param_1,0,0x12);
    iVar4 = FUN_1012691c(param_1,0,0x13);
    if (iVar1 == 2) {
      iVar5 = *(int *)(iVar2 + 0x1c);
      iVar3 = *(int *)(param_1 + 0x1c) - iVar4;
      goto LAB_10124828;
    }
    if (iVar1 == 3) {
      iVar3 = *(int *)(param_1 + 0x14) + iVar3 +
              (((1 - (iVar4 + iVar3)) + *(int *)(param_1 + 0x1c)) - *(int *)(param_1 + 0x14)) / 2;
      iVar5 = *(int *)(iVar2 + 0x14);
      iVar2 = *(int *)(iVar2 + 0x1c);
LAB_1012485e:
      iVar5 = iVar5 + ((iVar2 + 1) - iVar5) / 2;
      goto LAB_10124828;
    }
    if (iVar1 == 1) {
      iVar5 = *(int *)(iVar2 + 0x14);
      iVar3 = *(int *)(param_1 + 0x14) + iVar3;
      goto LAB_10124828;
    }
LAB_101248d6:
    if (param_4 < 0) goto LAB_101248da;
    iVar5 = 0;
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_1012691c(param_1,0,0x10);
    iVar4 = FUN_1012691c(param_1,0,0x11);
    if (iVar1 == 2) {
      iVar5 = *(int *)(iVar2 + 0x20);
      iVar3 = *(int *)(param_1 + 0x20) - iVar4;
    }
    else {
      if (iVar1 == 3) {
        iVar3 = *(int *)(param_1 + 0x18) + iVar3 +
                (((1 - (iVar4 + iVar3)) + *(int *)(param_1 + 0x20)) - *(int *)(param_1 + 0x18)) / 2;
        iVar5 = *(int *)(iVar2 + 0x18);
        iVar2 = *(int *)(iVar2 + 0x20);
        goto LAB_1012485e;
      }
      if (iVar1 != 1) goto LAB_101248d6;
      iVar5 = *(int *)(iVar2 + 0x18);
      iVar3 = *(int *)(param_1 + 0x18) + iVar3;
    }
LAB_10124828:
    if (param_4 < 0) {
      if (iVar3 < iVar5) {
        return param_2;
      }
      goto LAB_101248da;
    }
  }
  if (-1 < (int)param_3) {
    return param_2;
  }
  if ((iVar1 != 0) && (iVar5 < iVar3)) {
    return param_2;
  }
LAB_101248da:
  if ((int)param_2 < 0) {
    param_2 = param_2 - 2;
  }
  if (0 < (int)param_2) {
    param_2 = param_2 + 2;
  }
  if ((int)param_2 < 0) {
    param_2 = param_2 + 3;
  }
  return (int)param_2 >> 2;
}

