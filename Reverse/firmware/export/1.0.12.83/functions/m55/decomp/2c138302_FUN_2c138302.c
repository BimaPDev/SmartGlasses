/* FUN_2c138302 @ 0x2c138302 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c138302(int param_1,int param_2,uint param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  char in_ZR;
  
  if (in_ZR == '\0') {
    if (param_3 == 2) {
      param_3 = 0x40;
    }
    else {
      param_3 = 0;
    }
  }
  iVar3 = *(int *)(_DAT_2c1383a4 + param_1 * 4);
  iVar4 = param_2 + param_1 * 2;
  *(int *)(_DAT_2c1383a8 + iVar4 * 4) = param_4;
  *(undefined4 *)(iVar3 + param_2 * 0x20 + 0xc) = 1;
  iVar1 = _DAT_2c1383b4;
  if ((param_4 != 0) && (iVar4 = *(int *)(_DAT_2c1383ac + iVar4 * 4), iVar4 != 0)) {
    uVar2 = (uint)*(char *)(param_1 * 2 + _DAT_2c1383b0 + param_2);
    *(int *)(*(int *)(_DAT_2c1383b4 + 8) + (uVar2 + 0x10) * 4) = iVar4;
    DataSynchronizationBarrier(0xf);
    if ((int)uVar2 < 0) {
      *(undefined1 *)((uVar2 & 0xf) + iVar1 + 0x14) = 0xa0;
      *(uint *)(iVar3 + param_2 * 0x20 + 8) = param_3 | 0x22;
      return;
    }
    iVar1 = (uVar2 >> 5) * 4;
    iVar4 = 1 << (uVar2 & 0x1f);
    (&DAT_e000e400)[uVar2] = 0xa0;
    *(int *)(&DAT_e000e280 + iVar1) = iVar4;
    *(int *)(&DAT_e000e100 + iVar1) = iVar4;
    param_3 = param_3 | 0x20;
  }
  *(uint *)(iVar3 + param_2 * 0x20 + 8) = param_3 | 2;
  return;
}

