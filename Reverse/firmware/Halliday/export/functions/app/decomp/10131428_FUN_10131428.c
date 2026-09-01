/* FUN_10131428 @ 0x10131428 */

void FUN_10131428(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FUN_100a735c();
  uVar2 = 0;
  if (param_1 != 0) {
    if (param_1 < uVar1) {
      uVar2 = (param_1 << 7) / uVar1;
    }
    else {
      uVar2 = 0x7f;
    }
  }
  FUN_100d4440(0xcb,0x2d,uVar2);
  return;
}

