/* FUN_101313be @ 0x101313be */

uint FUN_101313be(uint param_1)

{
  uint uVar1;
  
  uVar1 = FUN_100a735c();
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else if (param_1 < 0x7f) {
    uVar1 = param_1 * uVar1 + uVar1;
    if (uVar1 < 0x80) {
      uVar1 = 1;
    }
    else {
      uVar1 = uVar1 >> 7;
    }
  }
  return uVar1;
}

