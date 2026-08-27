/* FUN_140d7d34 @ 0x140d7d34 */

int * FUN_140d7d34(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  *param_1 = (int)(param_1 + 2);
  if (param_2 == 0) {
    iVar1 = 4;
  }
  else {
    iVar1 = FUN_140df568(param_2);
    iVar1 = param_2 + iVar1 * 4;
  }
  FUN_140d7cec(param_1,param_2,iVar1,0,param_4);
  return param_1;
}

