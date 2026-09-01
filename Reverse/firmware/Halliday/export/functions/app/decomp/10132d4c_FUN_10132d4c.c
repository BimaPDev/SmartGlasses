/* FUN_10132d4c @ 0x10132d4c */

undefined4 FUN_10132d4c(uint param_1)

{
  undefined4 uVar1;
  
  if (param_1 < 0x10) {
    if (param_1 < 0xe) {
      if (param_1 == 5) {
        uVar1 = 3;
      }
      else {
        uVar1 = 2;
      }
      return uVar1;
    }
  }
  else if (param_1 != 0x13) {
    if (param_1 == 0x1a) {
      uVar1 = 1;
    }
    else {
      uVar1 = 2;
    }
    return uVar1;
  }
  return 1;
}

