/* FUN_2c5f9e5c @ 0x2c5f9e5c */

undefined4 FUN_2c5f9e5c(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 == 0) {
    return 0;
  }
  if (param_2 == 0) {
    return 0;
  }
  uVar2 = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    iVar1 = FUN_2c5f9c60();
    if (iVar1 == 0) {
      return 0;
    }
    FUN_2c5f9bd4(param_2);
    iVar1 = *(int *)(param_1 + 8);
    if (iVar1 == 0) {
      *(int *)(param_2 + 4) = param_1;
      *(undefined4 *)(param_2 + 8) = 0;
      iVar1 = *(int *)(param_1 + 0xc);
      uVar2 = 1;
      *(int *)(param_1 + 8) = param_2;
      *(int *)(param_2 + 0xc) = iVar1;
      if (iVar1 != 0) {
        *(int *)(iVar1 + 0x10) = param_2;
        return 1;
      }
    }
    else {
      *(int *)(iVar1 + 4) = param_2;
      uVar2 = 1;
      *(int *)(param_2 + 4) = param_1;
      *(int *)(param_2 + 8) = iVar1;
      *(int *)(param_1 + 8) = param_2;
      *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    }
  }
  return uVar2;
}

