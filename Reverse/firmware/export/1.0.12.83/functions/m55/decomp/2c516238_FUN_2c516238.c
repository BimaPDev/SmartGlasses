/* FUN_2c516238 @ 0x2c516238 */

int * FUN_2c516238(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  *param_1 = param_3;
  iVar1 = FUN_2c637344(param_2);
  param_1[1] = iVar1;
  FUN_2c607048(iVar1,0x27d1);
  FUN_2c606e20(param_1[1],0xff00ff00,0);
  FUN_2c606e5c(param_1[1],2,0);
  iVar1 = param_1[1];
  uVar2 = FUN_2c5e2e80(DAT_2c51629c);
  FUN_2c606e38(iVar1,uVar2,0);
  if (param_3 != 0) {
    iVar1 = param_1[1];
    uVar2 = registry_lookup(param_3);
    FUN_2c638730(iVar1,uVar2);
    return param_1;
  }
  FUN_2c638730(param_1[1],DAT_2c5162a0);
  return param_1;
}

