/* FUN_140c3e50 @ 0x140c3e50 */

uint FUN_140c3e50(int *param_1,undefined4 param_2,uint param_3,int param_4)

{
  uint uVar1;
  
  FUN_140c3d9c(param_1,param_4,DAT_140c3e84);
  uVar1 = *(int *)(*param_1 + -0xc) - param_4;
  if (param_3 <= uVar1) {
    uVar1 = param_3;
  }
  if (uVar1 != 0) {
    FUN_140c3df2(param_2,*param_1 + param_4,uVar1);
  }
  return uVar1;
}

