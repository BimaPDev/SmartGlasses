/* FUN_100ddc80 @ 0x100ddc80 */

undefined4 FUN_100ddc80(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = DAT_100ddca8;
  if (*DAT_100ddca8 != 0) {
    uVar2 = (DAT_100ddcac - DAT_100ddcb0) * 0x20 & 0xff00;
    FUN_100a5b78(DAT_100ddcb4 | uVar2,DAT_100ddcb8,DAT_100ddcb0,uVar2,param_4);
  }
  *piVar1 = param_1;
  return 0;
}

