/* FUN_2c490728 @ 0x2c490728 */

int FUN_2c490728(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  
  iVar1 = thunk_FUN_2c4e382c(*(undefined4 *)(param_4 + 4));
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return iVar1;
}

