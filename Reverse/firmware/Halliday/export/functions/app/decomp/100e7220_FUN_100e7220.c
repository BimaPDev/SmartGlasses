/* FUN_100e7220 @ 0x100e7220 */

undefined4 FUN_100e7220(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = DAT_100e7248;
  if ((*DAT_100e7248 != 0) && (param_1 != 0)) {
    uVar2 = (DAT_100e724c - DAT_100e7250) * 0x20 & 0xff00;
    FUN_100a5b78(DAT_100e7254 | uVar2,DAT_100e7258,DAT_100e7250,uVar2,param_4);
  }
  *piVar1 = param_1;
  return 0;
}

