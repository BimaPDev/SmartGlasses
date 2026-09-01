/* FUN_100e579c @ 0x100e579c */

undefined4 FUN_100e579c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar3 = (DAT_100e580c - DAT_100e5808) * 0x20 & 0xff00;
  FUN_100a5b78(DAT_100e5810 | uVar3,DAT_100e5814,param_3,DAT_100e5808,param_4);
  FUN_100e4fc0(0xffffffff,0xffffffff);
  iVar1 = FUN_100e4f04(param_1,param_2);
  if (iVar1 == 0) {
    FUN_100a5b78(DAT_100e5818 | uVar3,DAT_100e581c);
    FUN_100e4fb4();
    uVar2 = 0xfffffffb;
  }
  else {
    *(undefined1 *)(iVar1 + 0xb) = 0xff;
    *(byte *)(iVar1 + 0x14) = *(byte *)(iVar1 + 0x14) & 0xfb;
    *(undefined4 *)(iVar1 + 4) = param_3;
    FUN_100e4f38(iVar1,0);
    *(undefined1 *)(iVar1 + 10) = 4;
    FUN_100e4fb4();
    uVar2 = 0;
  }
  return uVar2;
}

