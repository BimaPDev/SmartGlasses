/* FUN_100a71e4 @ 0x100a71e4 */

undefined4 FUN_100a71e4(uint param_1)

{
  undefined4 uVar1;
  
  if (0x15 < param_1) {
    return 2;
  }
  if ((1 << (param_1 & 0xff) & DAT_100a7200) == 0) {
    uVar1 = 2;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

