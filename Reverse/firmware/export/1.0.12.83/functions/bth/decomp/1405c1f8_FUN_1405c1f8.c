/* FUN_1405c1f8 @ 0x1405c1f8 */

undefined4 FUN_1405c1f8(void)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*DAT_1405c20c != 0) {
    if (DAT_1405c20c[1] == 0) {
      uVar1 = 1;
    }
    else {
      uVar1 = 0xff;
    }
  }
  return uVar1;
}

