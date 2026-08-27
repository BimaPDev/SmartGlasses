/* FUN_14060338 @ 0x14060338 */

bool FUN_14060338(uint param_1)

{
  int iVar1;
  uint uVar2;
  
  if (2 < param_1) {
    return false;
  }
  uVar2 = 0;
  while( true ) {
    iVar1 = FUN_1405d6bc(uVar2 & 0xff);
    uVar2 = uVar2 + 1;
    if ((iVar1 != 0) && (*(byte *)(iVar1 + 0xd) - 1 < 2)) break;
    if (uVar2 == 0xb) {
      return true;
    }
  }
  return *(byte *)(DAT_14060370 + 0xac) == param_1;
}

