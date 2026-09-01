/* FUN_100b9030 @ 0x100b9030 */

undefined4 FUN_100b9030(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar3 = (DAT_100b9080 - DAT_100b907c) * 0x20 & 0xff00;
  FUN_100a5b78(uVar3 | 0x560031,DAT_100b9088,DAT_100b9084,*(undefined1 *)(param_1 + 3),param_4);
  iVar1 = FUN_10073804(DAT_100b908c,param_1,0x4a);
  if (iVar1 < 0) {
    FUN_100a5b78(uVar3 | 0x5a0031,DAT_100b9088,DAT_100b9090);
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

