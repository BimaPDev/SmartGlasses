/* FUN_2c4b002e @ 0x2c4b002e */

int FUN_2c4b002e(int param_1,undefined4 *param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = *(int *)(param_1 + 0x74);
  if (*(char *)(param_1 + 100) == '\0') {
    if (param_3 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(param_1 + 0x3c);
      iVar2 = *(int *)(iVar4 + 0x1c);
      *(int *)(param_1 + 0x3c) = iVar2;
      *(undefined4 *)(iVar2 + 0x18) = 0;
    }
    iVar2 = FUN_2c4aff78(*param_2,param_2[1],param_1);
    if (iVar2 != 0) {
      return iVar2;
    }
    iVar5 = *(int *)(param_1 + 0x3c);
    iVar2 = iVar6;
    while (iVar2 != 0) {
      iVar3 = *(int *)(iVar2 + 0x18);
      *(undefined4 *)(iVar2 + 0x18) = *(undefined4 *)(iVar2 + 0x1c);
      *(int *)(iVar2 + 0x1c) = iVar3;
      iVar2 = iVar3;
    }
    iVar2 = *(int *)(iVar6 + 0x18);
    *(int *)(iVar5 + 0x1c) = iVar2;
    *(int *)(iVar2 + 0x18) = iVar5;
    *(undefined4 *)(iVar6 + 0x18) = 0;
    *(int *)(param_1 + 0x3c) = iVar6;
    iVar6 = FUN_2c4aff78(*param_2,param_2[1],param_1);
    if (iVar6 != 0) {
      return iVar6;
    }
    iVar6 = FUN_2c4aff78(**(undefined4 **)(param_1 + 0x70),(*(undefined4 **)(param_1 + 0x70))[1],
                         param_1);
    if (iVar6 != 0) {
      return iVar6;
    }
    iVar6 = FUN_2c4aff78(**(undefined4 **)(iVar5 + 0x18),(*(undefined4 **)(iVar5 + 0x18))[1],param_1
                        );
    if (iVar6 != 0) {
      return iVar6;
    }
    if (param_3 != 0) {
      iVar6 = *(int *)(param_1 + 0x3c);
      *(int *)(iVar4 + 0x1c) = iVar6;
      *(int *)(iVar6 + 0x18) = iVar4;
      *(int *)(param_1 + 0x3c) = iVar4;
    }
  }
  else {
    if (param_3 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(param_1 + 0x38);
      iVar2 = *(int *)(iVar4 + 0x18);
      *(int *)(param_1 + 0x38) = iVar2;
      *(undefined4 *)(iVar2 + 0x1c) = 0;
    }
    iVar2 = FUN_2c4affd0(*param_2,param_2[1],param_1);
    if (iVar2 != 0) {
      return iVar2;
    }
    iVar5 = *(int *)(param_1 + 0x38);
    iVar2 = iVar6;
    while (iVar2 != 0) {
      iVar3 = *(int *)(iVar2 + 0x1c);
      uVar1 = *(undefined4 *)(iVar2 + 0x18);
      *(int *)(iVar2 + 0x18) = iVar3;
      *(undefined4 *)(iVar2 + 0x1c) = uVar1;
      iVar2 = iVar3;
    }
    *(undefined4 *)(iVar5 + 0x18) = *(undefined4 *)(iVar6 + 0x1c);
    *(int *)(*(int *)(iVar6 + 0x1c) + 0x1c) = iVar5;
    *(undefined4 *)(iVar6 + 0x1c) = 0;
    *(int *)(param_1 + 0x38) = iVar6;
    iVar6 = FUN_2c4affd0(*param_2,param_2[1],param_1);
    if (iVar6 != 0) {
      return iVar6;
    }
    iVar6 = FUN_2c4affd0(**(undefined4 **)(param_1 + 0x70),(*(undefined4 **)(param_1 + 0x70))[1],
                         param_1);
    if (iVar6 != 0) {
      return iVar6;
    }
    iVar6 = FUN_2c4affd0(**(undefined4 **)(iVar5 + 0x1c),(*(undefined4 **)(iVar5 + 0x1c))[1],param_1
                        );
    if (iVar6 != 0) {
      return iVar6;
    }
    if (param_3 != 0) {
      iVar6 = *(int *)(param_1 + 0x38);
      *(int *)(iVar4 + 0x18) = iVar6;
      *(int *)(iVar6 + 0x1c) = iVar4;
      *(int *)(param_1 + 0x38) = iVar4;
    }
  }
  *(undefined4 *)(param_1 + 0x60) = 0;
  return 0;
}

