/* FUN_14029348 @ 0x14029348 */

void FUN_14029348(uint param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = param_1;
  if (param_1 < 2) {
    uVar2 = 1;
  }
  if (1 < param_1) {
    uVar2 = uVar2 - 1;
  }
  *(undefined4 *)(DAT_14029370 + 4) = *(undefined4 *)(DAT_1402936c + 0x50);
  iVar1 = DAT_14029374;
  *(uint *)(DAT_14029374 + 0x20) = uVar2;
  *(uint *)(iVar1 + 0x28) = *(uint *)(iVar1 + 0x28) | 0x80;
  return;
}

