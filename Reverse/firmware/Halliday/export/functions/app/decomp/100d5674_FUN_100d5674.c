/* FUN_100d5674 @ 0x100d5674 */

uint FUN_100d5674(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_100d4588(param_1,0,param_3,param_4,param_4);
  uVar2 = (DAT_100d56b8 - DAT_100d56bc) * 0x20 & 0xff00;
  if (iVar1 == 0) {
    FUN_100a5b78(DAT_100d56c0 | uVar2,DAT_100d56c8,DAT_100d56c4);
    uVar2 = 0xffffffed;
  }
  else {
    FUN_100a5b78(DAT_100d56cc | uVar2,DAT_100d56c8,DAT_100d56d0,*(byte *)(iVar1 + 0x43) >> 6);
    uVar2 = (uint)(*(byte *)(iVar1 + 0x43) >> 6);
  }
  return uVar2;
}

