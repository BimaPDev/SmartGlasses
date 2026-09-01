/* FUN_101277b8 @ 0x101277b8 */

undefined4 FUN_101277b8(byte *param_1)

{
  undefined4 uVar1;
  
  if (param_1 == (byte *)0x0) {
    return 3;
  }
  if (*param_1 - 0x20 < 0x60) {
    return 1;
  }
  if ((*param_1 & 0x80) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = 2;
  }
  return uVar1;
}

