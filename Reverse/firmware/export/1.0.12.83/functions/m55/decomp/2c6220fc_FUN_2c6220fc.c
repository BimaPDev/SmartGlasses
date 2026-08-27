/* FUN_2c6220fc @ 0x2c6220fc */

undefined4
FUN_2c6220fc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,int param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  iVar1 = FUN_2c62bebc(*(undefined4 *)(param_1 + 0x4c),(*(int *)(param_1 + 0x48) + 1) * 4);
  iVar2 = FUN_2c62bebc(*(undefined4 *)(param_1 + 0x50),(*(int *)(param_1 + 0x48) + 1) * 4);
  iVar3 = FUN_2c62bebc(*(undefined4 *)(param_1 + 0x54),(*(int *)(param_1 + 0x48) + 1) * 4);
  iVar4 = FUN_2c62bebc(*(undefined4 *)(param_1 + 0x58),(*(int *)(param_1 + 0x48) + 1) * 4);
  if (iVar1 != 0) {
    *(int *)(param_1 + 0x4c) = iVar1;
  }
  if (iVar2 != 0) {
    *(int *)(param_1 + 0x50) = iVar2;
  }
  if (iVar3 != 0) {
    *(int *)(param_1 + 0x54) = iVar3;
  }
  if ((((iVar4 != 0) && (*(int *)(param_1 + 0x58) = iVar4, iVar1 != 0)) && (iVar2 != 0)) &&
     (iVar3 != 0)) {
    iVar1 = *(int *)(param_1 + 0x48);
    iVar3 = *(int *)(param_1 + 0x4c);
    *(int *)(param_1 + 0x48) = iVar1 + 1;
    uVar5 = FUN_2c6220c4(param_2);
    *(undefined4 *)(iVar3 + iVar1 * 4) = uVar5;
    iVar1 = *(int *)(param_1 + 0x48);
    iVar3 = *(int *)(param_1 + 0x50);
    uVar5 = FUN_2c6220c4(param_3);
    *(undefined4 *)(iVar3 + (iVar1 + 0x3fffffff) * 4) = uVar5;
    iVar1 = *(int *)(param_1 + 0x48);
    iVar3 = *(int *)(param_1 + 0x54);
    uVar5 = FUN_2c6220c4(param_4);
    *(undefined4 *)(iVar3 + (iVar1 + 0x3fffffff) * 4) = uVar5;
    iVar3 = *(int *)(param_1 + 0x48);
    iVar4 = *(int *)(param_1 + 0x58);
    iVar1 = FUN_2c62be98(0x40,param_6 + 1);
    if (iVar1 != 0) {
      FUN_2c62c0d8(iVar1,param_5,param_6);
      *(bool *)(iVar1 + param_6) = iVar2 == 0;
    }
    *(int *)(iVar4 + (iVar3 + 0x3fffffff) * 4) = iVar1;
    return 0;
  }
  return 0x53;
}

