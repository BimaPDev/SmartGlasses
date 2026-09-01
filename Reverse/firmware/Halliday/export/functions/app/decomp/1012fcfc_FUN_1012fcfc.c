/* FUN_1012fcfc @ 0x1012fcfc */

undefined4 FUN_1012fcfc(int param_1)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 0x48) != 0) {
    uVar1 = (DAT_100b1650 - DAT_100b164c) * 0x20 & 0xff00;
    FUN_100a5b78(DAT_100b1654 | uVar1,DAT_100b1658,DAT_100b164c,uVar1,*(int *)(param_1 + 0x48));
    return 0;
  }
  *(byte *)(param_1 + 0xd6) = *(byte *)(param_1 + 0xd6) & 0xf0;
  return 0;
}

