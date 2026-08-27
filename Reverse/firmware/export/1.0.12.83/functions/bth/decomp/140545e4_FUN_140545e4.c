/* FUN_140545e4 @ 0x140545e4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_140545e4(uint param_1)

{
  byte bVar1;
  int iVar2;
  
  if (1 < param_1) {
    return 0;
  }
  iVar2 = *(int *)(_LAB_14054608 + param_1 * 4);
  if (iVar2 == 0) {
    bVar1 = 0;
  }
  else {
    bVar1 = *(byte *)(iVar2 + 0x43) & 0x10;
    if ((*(byte *)(iVar2 + 0x43) & 0x10) != 0) {
      return *(byte *)(iVar2 + 0x56);
    }
  }
  return bVar1;
}

