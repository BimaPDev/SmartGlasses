/* FUN_14057d20 @ 0x14057d20 */

uint FUN_14057d20(uint param_1)

{
  int iVar1;
  uint uVar2;
  
  if (1 < param_1) {
    return 0;
  }
  iVar1 = *(int *)(DAT_14057d44 + param_1 * 4);
  uVar2 = 0;
  if ((iVar1 != 0) &&
     (uVar2 = *(byte *)(iVar1 + 0x43) & 0x10, (*(byte *)(iVar1 + 0x43) & 0x10) != 0)) {
    return *(uint *)(iVar1 + 0x50);
  }
  return uVar2;
}

