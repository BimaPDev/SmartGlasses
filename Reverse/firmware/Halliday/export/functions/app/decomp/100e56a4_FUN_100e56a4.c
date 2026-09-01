/* FUN_100e56a4 @ 0x100e56a4 */

undefined4 FUN_100e56a4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_100e4fc0(0xffffffff,0xffffffff,param_3,param_4,param_4);
  iVar1 = FUN_100e4f04(param_1,param_2);
  if (iVar1 == 0) {
    FUN_100a5b78(DAT_100e5700 | (DAT_100e56fc - DAT_100e56f8) * 0x20 & 0xff00U,DAT_100e5704);
    uVar2 = 0xfffffffb;
  }
  else {
    FUN_10119dc2(DAT_100e5708,*(undefined1 *)(iVar1 + 10));
    *(byte *)(iVar1 + 0x14) = *(byte *)(iVar1 + 0x14) | 1;
    uVar2 = 0;
  }
  FUN_100e4fb4();
  return uVar2;
}

