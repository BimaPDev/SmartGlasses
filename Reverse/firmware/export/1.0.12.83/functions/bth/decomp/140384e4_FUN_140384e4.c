/* FUN_140384e4 @ 0x140384e4 */

void FUN_140384e4(void)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  
  FUN_1402a6e8(4,0x625,DAT_1403874c,DAT_14038748,DAT_14038744,DAT_14038740);
  uVar3 = DAT_14038758;
  uVar2 = DAT_14038754;
  iVar1 = DAT_14038750;
  *(uint *)(DAT_14038750 + 0x214) = *(uint *)(DAT_14038750 + 0x214) & 0xfffeffff | 0x10000;
  *(uint *)(iVar1 + 0x214) = *(uint *)(iVar1 + 0x214) & 0xfffbffff;
  *(uint *)(iVar1 + 0x214) = *(uint *)(iVar1 + 0x214) & 0xfff7ffff;
  *(uint *)(iVar1 + 0x324) = *(uint *)(iVar1 + 0x324) & 0xfffffff7 | 8;
  *(uint *)(iVar1 + 0x210) = *(uint *)(iVar1 + 0x210) & 0xffffff00 | 0x20;
  *(uint *)(iVar1 + 0x254) = *(uint *)(iVar1 + 0x254) & 0xffffffe0 | 0xb;
  *(uint *)(iVar1 + 0x240) = *(uint *)(iVar1 + 0x240) & 0xfffffffb | 4;
  *(uint *)(iVar1 + 0x10) = *(uint *)(iVar1 + 0x10) & uVar2 | 0x32;
  *(uint *)(iVar1 + 0x10) = *(uint *)(iVar1 + 0x10) & 0xffff | 0x37100000;
  *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) & uVar2 | 0x65;
  *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) & 0xffff | 0x2910000;
  *(uint *)(iVar1 + 0x36c) = *(uint *)(iVar1 + 0x36c) & uVar2 | 0x1000;
  *(uint *)(iVar1 + 0x36c) = *(uint *)(iVar1 + 0x36c) & 0xffff | 0x4800000;
  *(uint *)(iVar1 + 0x40) = *(uint *)(iVar1 + 0x40) & 0xfffffffe | 1;
  *(uint *)(iVar1 + 0x5c) = ~(~((uVar2 & *(uint *)(iVar1 + 0x5c)) >> 0x10) << 0x10);
  *(uint *)(iVar1 + 0x54) = *(uint *)(iVar1 + 0x54) & 0xfffffeff | 0x100;
  *(uint *)(iVar1 + 0x54) = *(uint *)(iVar1 + 0x54) & 0xffffe3ff | 0x1000;
  *(uint *)(iVar1 + 0x2c8) = *(uint *)(iVar1 + 0x2c8) & 0xffffff80 | 0x66;
  *(uint *)(iVar1 + 0x240) = *(uint *)(iVar1 + 0x240) & 0xfffff7ff;
  *(uint *)(iVar1 + 0xc0) = *(uint *)(iVar1 + 0xc0) & 0xfffffffd;
  *(uint *)(iVar1 + 0x44) = *(uint *)(iVar1 + 0x44) & 0xffff8000 | 0x4b;
  *(uint *)(iVar1 + 0x14) = *(uint *)(iVar1 + 0x14) & 0xfeffffff | 0x1000000;
  *(undefined4 *)(iVar1 + 0x20c) = uVar3;
  return;
}

