/* FUN_101370d8 @ 0x101370d8 */

uint FUN_101370d8(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_100dd8a8();
  uVar2 = 0;
  if (iVar1 != 0) {
    if (*(char *)(iVar1 + 0x60) < '\0') {
      uVar2 = (*(byte *)(iVar1 + 0x60) & 0x3f) >> 3;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}

