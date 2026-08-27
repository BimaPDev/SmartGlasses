/* FUN_2c650fec @ 0x2c650fec */

int FUN_2c650fec(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *param_1;
  FUN_2c650fb4(param_1,param_2 - iVar2,0,1,param_3,param_2,param_3);
  iVar1 = *param_1;
  *(undefined4 *)(iVar1 + -4) = 0xffffffff;
  return iVar1 + (param_2 - iVar2);
}

