/* FUN_100bc5b0 @ 0x100bc5b0 */

void FUN_100bc5b0(int param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = param_2;
  if (param_1 == 2) {
    if (param_2 < 100) {
      uVar1 = param_2 / 10;
    }
    else {
      uVar1 = 9;
    }
  }
  FUN_100a5b78((DAT_100bc5f8 - DAT_100bc5f4) * 0x20 & 0xff00U | 0x3580032,DAT_100bc600,DAT_100bc5fc,
               param_1,uVar1,param_2);
  FUN_100d4440(0xcc,0x44,uVar1 | param_1 << 0x10);
  return;
}

