/* FUN_2c4e00ea @ 0x2c4e00ea */

bool FUN_2c4e00ea(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = func_0x2c4dd9ec();
  if (iVar1 == 0) {
    return false;
  }
  if ((((*(uint *)(param_2 + 0x10) & 0x4000000) != 0) &&
      (*(short *)(param_1 + 0xa8 + *(int *)(*(int *)(param_1 + 0xa8) + -0xc) + 0x18) == 0)) &&
     (*(int *)(param_2 + 0xc) != 0)) {
    return *(int *)(param_1 + 0xcc) <= *(int *)(param_2 + 0xc);
  }
  return false;
}

