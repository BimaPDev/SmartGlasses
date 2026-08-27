/* FUN_2c4e1d78 @ 0x2c4e1d78 */

undefined4 * FUN_2c4e1d78(undefined4 *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  FUN_2c4de5f8();
  *param_1 = DAT_2c4e1e00;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  if (param_2 == 0) {
    FUN_2c4de6ca(param_1,0xa55,7,1);
    uVar1 = 7;
    uVar2 = DAT_2c4e1e04;
  }
  else {
    if (param_3 != 0) {
      FUN_2c4de676(param_1,param_2);
      param_1[10] = param_3;
      return param_1;
    }
    FUN_2c4de6ca(param_1,0xa55,8,1);
    uVar1 = 8;
    uVar2 = DAT_2c4e1e14;
  }
  FUN_2c4e0504(DAT_2c4e1e10,0,0,0,DAT_2c4e1e0c,uVar1,DAT_2c4e1e08,0x1300,uVar2);
  return param_1;
}

