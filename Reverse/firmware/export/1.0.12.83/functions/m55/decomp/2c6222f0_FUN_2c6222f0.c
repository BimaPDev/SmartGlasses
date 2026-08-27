/* FUN_2c6222f0 @ 0x2c6222f0 */

undefined4 FUN_2c6222f0(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar1 = FUN_2c62bebc(*(undefined4 *)(param_1 + 0x40),(*(int *)(param_1 + 0x3c) + 1) * 4,param_3,
                       *(int *)(param_1 + 0x3c),param_4);
  iVar2 = FUN_2c62bebc(*(undefined4 *)(param_1 + 0x44),(*(int *)(param_1 + 0x3c) + 1) * 4);
  if (iVar1 == 0) {
    if (iVar2 != 0) {
      *(int *)(param_1 + 0x44) = iVar2;
      return 0x53;
    }
  }
  else {
    *(int *)(param_1 + 0x40) = iVar1;
    if (iVar2 != 0) {
      iVar4 = *(int *)(param_1 + 0x3c);
      *(int *)(param_1 + 0x44) = iVar2;
      *(int *)(param_1 + 0x3c) = iVar4 + 1;
      uVar3 = FUN_2c6220c4(param_2);
      *(undefined4 *)(iVar1 + iVar4 * 4) = uVar3;
      iVar2 = *(int *)(param_1 + 0x3c);
      iVar4 = *(int *)(param_1 + 0x44);
      iVar1 = FUN_2c62be98(0x40,param_4 + 1);
      if (iVar1 != 0) {
        FUN_2c62c0d8(iVar1,param_3,param_4);
        *(undefined1 *)(iVar1 + param_4) = 0;
      }
      *(int *)(iVar4 + (iVar2 + 0x3fffffff) * 4) = iVar1;
      iVar1 = *(int *)(param_1 + 0x3c) + 0x3fffffff;
      if ((*(int *)(*(int *)(param_1 + 0x40) + iVar1 * 4) != 0) &&
         (*(int *)(*(int *)(param_1 + 0x44) + iVar1 * 4) != 0)) {
        return 0;
      }
    }
  }
  return 0x53;
}

