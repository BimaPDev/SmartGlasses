/* FUN_2c4bf490 @ 0x2c4bf490 */

void FUN_2c4bf490(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  
  uVar2 = DAT_2c4bf4e0;
  iVar1 = DAT_2c4bf4dc;
  iVar4 = param_1 + (uint)((ulonglong)DAT_2c4bf4d4 * (ulonglong)param_1 >> 0x28) * -0x1e0;
  if (iVar4 != 0) {
    param_1 = (param_1 + 0x1e0) - iVar4;
  }
  uVar3 = DAT_2c4bf4d8 & (int)((ulonglong)DAT_2c4bf4d4 * (ulonglong)param_1 >> 0x20) << 8 | 0xa0;
  *(uint *)(DAT_2c4bf4dc + 0x118) = uVar3;
  *(undefined4 *)(iVar1 + 0xfc) = uVar2;
  *(uint *)(iVar1 + 0x104) = uVar3;
  *(uint *)(iVar1 + 0x108) = uVar3;
  return;
}

