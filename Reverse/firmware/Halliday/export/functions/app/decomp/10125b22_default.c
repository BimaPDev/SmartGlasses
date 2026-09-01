/* default @ 0x10125b22 */

void switchD_10125d9a::default(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 auStack_30 [16];
  
  iVar4 = *(int *)(param_1 + 4);
  if (iVar4 != 0) {
    iVar1 = FUN_101254be(iVar4);
    iVar2 = FUN_101254d6(iVar4);
    iVar3 = FUN_10124cb8(param_1,0x40000);
    param_2 = param_2 + *(int *)(iVar4 + 0x14);
    if (iVar3 == 0) {
      iVar3 = FUN_10125ffe(iVar4);
      param_2 = (iVar1 + param_2) - iVar3;
      iVar3 = *(int *)(iVar4 + 0x18);
      iVar1 = FUN_10126008(iVar4);
      iVar2 = (iVar2 + iVar3 + param_3) - iVar1;
    }
    else {
      param_2 = param_2 + iVar1;
      iVar2 = *(int *)(iVar4 + 0x18) + param_3 + iVar2;
    }
    param_3 = FUN_101254a6(iVar4);
    param_2 = param_2 + param_3;
    param_3 = iVar2 + param_3;
  }
  param_2 = param_2 - *(int *)(param_1 + 0x14);
  param_3 = param_3 - *(int *)(param_1 + 0x18);
  if (param_2 != 0 || param_3 != 0) {
    FUN_10125af4(param_1);
    local_40 = *(undefined4 *)(param_1 + 0x14);
    local_3c = *(undefined4 *)(param_1 + 0x18);
    local_38 = *(undefined4 *)(param_1 + 0x1c);
    local_34 = *(undefined4 *)(param_1 + 0x20);
    if (iVar4 == 0) {
      iVar1 = 0;
    }
    else {
      FUN_101257f6(iVar4,auStack_30);
      iVar1 = FUN_1012aa22(&local_40,auStack_30,0);
      if (iVar1 == 0) {
        FUN_10126802(iVar4);
      }
    }
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + param_2;
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + param_3;
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + param_2;
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + param_3;
    FUN_1012584c(param_1,param_2,param_3,0);
    if (iVar4 != 0) {
      FUN_10086f50(iVar4,0x22,param_1);
    }
    FUN_10125af4(param_1);
    if ((iVar4 != 0) &&
       ((iVar2 = FUN_1012aa22(param_1 + 0x14,auStack_30,0), iVar1 != 0 || (iVar2 != 0)))) {
      FUN_10126802(iVar4);
    }
  }
  return;
}

