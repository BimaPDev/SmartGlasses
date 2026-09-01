/* FUN_100a71c4 @ 0x100a71c4 */

undefined4 FUN_100a71c4(uint param_1)

{
  undefined4 uVar1;
  
  if (0x15 < param_1) {
    return 2;
  }
  if ((DAT_100a71e0 & 1 << (param_1 & 0xff)) == 0) {
    uVar1 = 2;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

