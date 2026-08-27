/* FUN_140545bc @ 0x140545bc */

uint FUN_140545bc(uint param_1)

{
  int iVar1;
  uint uVar2;
  
  if (1 < param_1) {
    return 0;
  }
  iVar1 = *(int *)(DAT_140545e0 + param_1 * 4);
  uVar2 = 0;
  if ((iVar1 != 0) &&
     (uVar2 = *(byte *)(iVar1 + 0x43) & 0x10, (*(byte *)(iVar1 + 0x43) & 0x10) != 0)) {
    return iVar1 + 99;
  }
  return uVar2;
}

