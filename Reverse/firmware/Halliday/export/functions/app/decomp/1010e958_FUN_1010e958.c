/* FUN_1010e958 @ 0x1010e958 */

undefined4 FUN_1010e958(uint param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (param_1 < 0x11) {
    if ((param_1 < 2) || ((DAT_1010e984 & 1 << (param_1 & 0xff)) == 0)) {
      return 1;
    }
  }
  else if (param_1 != 0x100) {
    return 1;
  }
  uVar1 = FUN_1013b122(DAT_1010e988,0xb00,param_1,param_2);
  return uVar1;
}

