/* FUN_1013bc22 @ 0x1013bc22 */

int FUN_1013bc22(int param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (param_1 == 0) {
    return 1;
  }
  iVar4 = *(int *)(param_1 + 0x70);
  if (*(char *)(param_1 + 0x81) == '\0') {
    if (param_3 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(param_1 + 0x3c);
      iVar2 = *(int *)(iVar3 + 0x1c);
      *(int *)(param_1 + 0x3c) = iVar2;
      *(undefined4 *)(iVar2 + 0x18) = 0;
    }
    iVar2 = FUN_1013ba4c(*param_2,param_2[1],param_1);
    if (iVar2 != 0) {
      return iVar2;
    }
    iVar5 = *(int *)(param_1 + 0x3c);
    iVar2 = iVar4;
    while (iVar2 != 0) {
      iVar1 = *(int *)(iVar2 + 0x18);
      *(undefined4 *)(iVar2 + 0x18) = *(undefined4 *)(iVar2 + 0x1c);
      *(int *)(iVar2 + 0x1c) = iVar1;
      iVar2 = iVar1;
    }
    iVar2 = *(int *)(iVar4 + 0x18);
    uVar7 = param_2[1];
    *(int *)(iVar5 + 0x1c) = iVar2;
    uVar6 = *param_2;
    *(int *)(iVar2 + 0x18) = iVar5;
    *(undefined4 *)(iVar4 + 0x18) = 0;
    *(int *)(param_1 + 0x3c) = iVar4;
    iVar4 = FUN_1013ba4c(uVar6,uVar7,param_1);
    if (iVar4 != 0) {
      return iVar4;
    }
    iVar4 = FUN_1013ba4c(**(undefined4 **)(param_1 + 0x6c),(*(undefined4 **)(param_1 + 0x6c))[1],
                         param_1);
    if (iVar4 != 0) {
      return iVar4;
    }
    iVar4 = FUN_1013ba4c(**(undefined4 **)(iVar5 + 0x18),(*(undefined4 **)(iVar5 + 0x18))[1],param_1
                        );
    if (iVar4 != 0) {
      return iVar4;
    }
    if (param_3 != 0) {
      iVar4 = *(int *)(param_1 + 0x3c);
      *(int *)(iVar3 + 0x1c) = iVar4;
      *(int *)(iVar4 + 0x18) = iVar3;
      *(int *)(param_1 + 0x3c) = iVar3;
    }
  }
  else {
    if (param_3 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(param_1 + 0x38);
      iVar2 = *(int *)(iVar3 + 0x18);
      *(int *)(param_1 + 0x38) = iVar2;
      *(undefined4 *)(iVar2 + 0x1c) = 0;
    }
    iVar2 = FUN_1013bbca(*param_2,param_2[1],param_1);
    if (iVar2 != 0) {
      return iVar2;
    }
    iVar5 = *(int *)(param_1 + 0x38);
    iVar2 = iVar4;
    while (iVar2 != 0) {
      uVar6 = *(undefined4 *)(iVar2 + 0x18);
      iVar1 = *(int *)(iVar2 + 0x1c);
      *(int *)(iVar2 + 0x18) = iVar1;
      *(undefined4 *)(iVar2 + 0x1c) = uVar6;
      iVar2 = iVar1;
    }
    iVar2 = *(int *)(iVar4 + 0x1c);
    if (iVar5 != 0) {
      *(int *)(iVar5 + 0x18) = iVar2;
    }
    *(int *)(iVar2 + 0x1c) = iVar5;
    uVar7 = param_2[1];
    *(undefined4 *)(iVar4 + 0x1c) = 0;
    uVar6 = *param_2;
    *(int *)(param_1 + 0x38) = iVar4;
    iVar4 = FUN_1013bbca(uVar6,uVar7,param_1);
    if (iVar4 != 0) {
      return iVar4;
    }
    iVar4 = FUN_1013bbca(**(undefined4 **)(param_1 + 0x6c),(*(undefined4 **)(param_1 + 0x6c))[1],
                         param_1);
    if (iVar4 != 0) {
      return iVar4;
    }
    iVar4 = FUN_1013bbca(**(undefined4 **)(iVar5 + 0x1c),(*(undefined4 **)(iVar5 + 0x1c))[1],param_1
                        );
    if (iVar4 != 0) {
      return iVar4;
    }
    if (param_3 != 0) {
      iVar4 = *(int *)(param_1 + 0x38);
      if (iVar3 != 0) {
        *(int *)(iVar3 + 0x18) = iVar4;
      }
      *(int *)(iVar4 + 0x1c) = iVar3;
      *(int *)(param_1 + 0x38) = iVar3;
    }
  }
  *(undefined4 *)(param_1 + 0x60) = 0;
  return 0;
}

