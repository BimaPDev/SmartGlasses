/* FUN_10133fd2 @ 0x10133fd2 */

void FUN_10133fd2(int param_1,int *param_2,int param_3)

{
  int *piVar1;
  
  param_2[2] = 0;
  piVar1 = param_2 + 2;
  if (*(undefined4 **)(param_1 + 0x58) == (undefined4 *)0x0) {
    *(int **)(param_1 + 0x54) = piVar1;
    *(int **)(param_1 + 0x58) = piVar1;
  }
  else {
    **(undefined4 **)(param_1 + 0x58) = piVar1;
    *(int **)(param_1 + 0x58) = piVar1;
  }
  *param_2 = param_1;
  param_2[3] = param_3;
  return;
}

