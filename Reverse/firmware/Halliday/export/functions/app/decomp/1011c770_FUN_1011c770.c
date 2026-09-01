/* FUN_1011c770 @ 0x1011c770 */

void FUN_1011c770(uint *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if ((*param_1 & 1) != 0) {
    iVar1 = FUN_1011c726(param_1,param_1,param_2,param_3);
  }
  FUN_1011c756(param_1,param_3);
  if (iVar1 != 0) {
    param_1[param_3 + 0x3fffffff] = param_1[param_3 + 0x3fffffff] | 0x80000000;
  }
  return;
}

