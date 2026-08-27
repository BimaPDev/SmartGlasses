/* thunk_FUN_2c640ca0 @ 0x2c640204 */

void thunk_FUN_2c640ca0(int param_1)

{
  undefined4 uVar1;
  
  if ((*DAT_2c640cc4 == '\x01') && (*DAT_2c640cc8 != 0)) {
    if (param_1 == 0) {
      uVar1 = 0x4c;
    }
    else {
      uVar1 = 0xff;
    }
    FUN_2c606d90(*DAT_2c640cc8,uVar1,0);
    return;
  }
  return;
}

