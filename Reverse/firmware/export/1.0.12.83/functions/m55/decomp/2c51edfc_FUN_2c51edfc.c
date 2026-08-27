/* FUN_2c51edfc @ 0x2c51edfc */

undefined4 *
FUN_2c51edfc(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  FUN_2c51ea10();
  uVar2 = DAT_2c51ee30;
  *param_1 = DAT_2c51ee30;
  param_1[3] = 0;
  param_1[0xb] = 0;
  uVar1 = DAT_2c51ee34;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  uVar2 = FUN_2c62bdd8(uVar1,2000,param_1,uVar2,param_4);
  param_1[0xc] = uVar2;
  FUN_2c62be40();
  *(undefined1 *)(param_1 + 0xd) = 0;
  return param_1;
}

