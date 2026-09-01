/* FUN_1013d742 @ 0x1013d742 */

int FUN_1013d742(uint *param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  if ((uVar2 & 7) == 0) {
    if ((uVar2 & 0xffff) == 0) {
      uVar2 = uVar2 >> 0x10;
      iVar1 = 0x10;
    }
    else {
      iVar1 = 0;
    }
    if ((uVar2 & 0xff) == 0) {
      uVar2 = uVar2 >> 8;
      iVar1 = iVar1 + 8;
    }
    if ((uVar2 & 0xf) == 0) {
      uVar2 = uVar2 >> 4;
      iVar1 = iVar1 + 4;
    }
    if ((uVar2 & 3) == 0) {
      uVar2 = uVar2 >> 2;
      iVar1 = iVar1 + 2;
    }
    if (-1 < (int)(uVar2 << 0x1f)) {
      uVar2 = uVar2 >> 1;
      iVar1 = iVar1 + 1;
      if (uVar2 == 0) {
        return 0x20;
      }
    }
    *param_1 = uVar2;
    return iVar1;
  }
  if ((int)(uVar2 << 0x1f) < 0) {
    return 0;
  }
  if ((int)(uVar2 << 0x1e) < 0) {
    iVar1 = 1;
    *param_1 = uVar2 >> 1;
  }
  else {
    iVar1 = 2;
    *param_1 = uVar2 >> 2;
  }
  return iVar1;
}

