/* FUN_140c4108 @ 0x140c4108 */

int * FUN_140c4108(int *param_1,int param_2,uint param_3)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = FUN_140c3d9c(param_1,param_2,DAT_140c4134);
  uVar2 = *(int *)(*param_1 + -0xc) - param_2;
  if (param_3 <= uVar2) {
    uVar2 = param_3;
  }
  FUN_140c4024(param_1,uVar1,uVar2,0);
  return param_1;
}

