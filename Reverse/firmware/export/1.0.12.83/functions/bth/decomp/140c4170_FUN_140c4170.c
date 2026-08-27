/* FUN_140c4170 @ 0x140c4170 */

int FUN_140c4170(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *param_1;
  FUN_140c4138(param_1,param_2 - iVar2,0,1,param_3,param_2,param_3);
  iVar1 = *param_1;
  *(undefined4 *)(iVar1 + -4) = 0xffffffff;
  return iVar1 + (param_2 - iVar2);
}

