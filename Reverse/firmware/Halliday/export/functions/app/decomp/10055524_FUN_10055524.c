/* FUN_10055524 @ 0x10055524 */

undefined4 FUN_10055524(byte *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 == (byte *)0x0) {
    uVar2 = 0xffffffea;
  }
  else {
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    iVar1 = FUN_100561b0();
    if (iVar1 << 0x1f < 0) {
      *param_1 = *param_1 | 1;
    }
    if (iVar1 << 0x1e < 0) {
      *param_1 = *param_1 | 2;
    }
    if (iVar1 << 0x12 < 0) {
      *param_1 = *param_1 | 4;
    }
    if (iVar1 << 0x1a < 0) {
      *param_1 = *param_1 | 0x10;
    }
    if (iVar1 << 0x13 < 0) {
      *param_1 = *param_1 | 0x20;
    }
    if (iVar1 << 0x1b < 0) {
      *param_1 = *param_1 | 8;
    }
    if (iVar1 << 0x14 < 0) {
      *param_1 = *param_1 | 0x40;
    }
    if (iVar1 << 0x15 < 0) {
      *param_1 = *param_1 | 0x80;
    }
    if (iVar1 << 0x1d < 0) {
      param_1[1] = param_1[1] | 1;
    }
    uVar2 = 0;
    if (*DAT_100555c8 != '\0') {
      iVar1 = FUN_100568dc();
      if (iVar1 == 0) {
        param_1[1] = param_1[1] | 4;
        uVar2 = 0;
      }
      else {
        uVar2 = 0;
        param_1[1] = param_1[1] | 2;
      }
    }
  }
  return uVar2;
}

