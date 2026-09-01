/* FUN_101314ec @ 0x101314ec */

void FUN_101314ec(uint param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = FUN_100a735c();
    if (param_1 < uVar1) {
      uVar1 = FUN_100a735c();
      if (param_1 << 4 < uVar1) {
        uVar1 = 1;
      }
      else {
        uVar1 = (param_1 << 4) / uVar1;
      }
    }
    else {
      uVar1 = 0xf;
    }
  }
  FUN_100d4440(0xcc,0x42,uVar1 & 0xff | 0x10000);
  return;
}

