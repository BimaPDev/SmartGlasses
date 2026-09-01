/* FUN_100b9224 @ 0x100b9224 */

undefined4 FUN_100b9224(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (DAT_100b9274 - DAT_100b9270) * 0x20 & 0xff00;
  FUN_100a5b78(uVar2 | 0xf20031,DAT_100b927c,DAT_100b9278,param_1,param_4);
  iVar1 = FUN_100b9030(param_1);
  if (iVar1 != 0) {
    FUN_100a5b78(uVar2 | 0xf60031,DAT_100b927c,DAT_100b9280);
    FUN_10131274(param_1);
    FUN_100b8fe0(param_1);
  }
  return 0;
}

