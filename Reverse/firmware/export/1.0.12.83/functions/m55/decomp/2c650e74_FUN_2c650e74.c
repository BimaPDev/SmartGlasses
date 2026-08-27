/* FUN_2c650e74 @ 0x2c650e74 */

void FUN_2c650e74(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uStack_c;
  
  iVar1 = *param_1 + -0xc;
  iVar2 = *(int *)(*param_1 + -4);
  uStack_c = param_2;
  if (iVar2 < 1) {
    FUN_2c650d4c(iVar1,0,param_3,iVar2,param_1);
  }
  else {
    FUN_2c650e44(iVar1,&uStack_c);
    *param_1 = DAT_2c650e9c;
  }
  return;
}

