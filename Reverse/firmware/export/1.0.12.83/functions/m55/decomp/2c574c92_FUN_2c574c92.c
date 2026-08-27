/* FUN_2c574c92 @ 0x2c574c92 */

undefined4 FUN_2c574c92(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10);
  if (iVar1 < 0x39) {
    iVar1 = iVar1 >> 2;
  }
  else {
    iVar1 = 0x10;
  }
  if (iVar1 <= param_4 * (*(int *)(param_1 + 0xc) + -1) + param_2 + -1) {
    return 0;
  }
  FUN_2c5748dc();
  return 1;
}

