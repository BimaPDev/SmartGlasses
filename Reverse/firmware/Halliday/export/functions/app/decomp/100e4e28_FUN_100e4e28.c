/* FUN_100e4e28 @ 0x100e4e28 */

undefined4 FUN_100e4e28(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = DAT_100e4e54;
  if (*DAT_100e4e54 != 0) {
    uVar2 = (DAT_100e4e5c - DAT_100e4e58) * 0x20 & 0xff00;
    FUN_100a5b78(uVar2 | 0x1160021,DAT_100e4e60,*DAT_100e4e54,uVar2,param_4);
  }
  *piVar1 = param_1;
  return 0;
}

