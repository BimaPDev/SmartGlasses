/* FUN_2c6271f8 @ 0x2c6271f8 */

undefined4 FUN_2c6271f8(int param_1,int param_2,int *param_3)

{
  int iVar1;
  
  if (param_2 == 0) {
    iVar1 = *param_3 + 1;
    *param_3 = iVar1;
    if (iVar1 < (*(int **)(param_1 + 8))[1]) {
      return *(undefined4 *)(**(int **)(param_1 + 8) + iVar1 * 4);
    }
  }
  else {
    iVar1 = *param_3 + -1;
    *param_3 = iVar1;
    if (-1 < iVar1) {
      return *(undefined4 *)(**(int **)(param_1 + 8) + iVar1 * 4);
    }
  }
  return 0;
}

