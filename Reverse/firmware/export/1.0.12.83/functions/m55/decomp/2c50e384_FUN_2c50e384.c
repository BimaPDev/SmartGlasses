/* FUN_2c50e384 @ 0x2c50e384 */

int FUN_2c50e384(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 != 0) {
    thunk_FUN_2c669588(iVar1,*(int *)(param_1 + 0x14) - iVar1);
  }
  return param_1;
}

