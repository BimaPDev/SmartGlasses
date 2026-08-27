/* FUN_14026a60 @ 0x14026a60 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_14026a60(uint param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  if (1 < param_1) {
    return 1;
  }
  uVar1 = (uint)*(char *)(DAT_14026ab4 + param_1);
  if (-1 < (int)uVar1) {
    iVar3 = (uVar1 >> 5) * 4;
    iVar2 = 1 << (uVar1 & 0x1f);
    *(int *)(&DAT_e000e280 + iVar3) = iVar2;
    *(int *)(&DAT_e000e100 + iVar3) = iVar2;
  }
  if (*(int *)(DAT_14026ab8 + param_1 * 0x10 + 0xc) == 0) {
    return 0;
  }
  if (param_1 == 0) {
    _DAT_400000a0 = 0x2000;
  }
  else {
    _DAT_400000a0 = 0x4000;
  }
  return 0;
}

