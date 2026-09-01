/* FUN_10068e74 @ 0x10068e74 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10068e74(void)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  
  puVar2 = DAT_10068ee4;
  puVar1 = DAT_10068ee0;
  uVar4 = *DAT_10068ee0;
  uVar3 = *DAT_10068ee4;
  if ((_DAT_40004000 & 0xf000000) < 0x8000000) {
    *DAT_10068ee0 = *DAT_10068ee0 & 0xffff8fff;
    *puVar1 = *puVar2 & 0xfffffff0 | 0xc;
  }
  FUN_1013d9c0(0x14);
  puVar2 = DAT_10068eec;
  puVar1 = DAT_10068ee8;
  *DAT_10068ee8 = *DAT_10068ee8 & 0xffffdfff;
  *puVar1 = *puVar1 | 0x4000;
  *puVar2 = *puVar2 | 4;
  FUN_1013d9c0(10);
  puVar1 = DAT_10068ee0;
  do {
  } while ((int)(*puVar2 << 0x1d) < 0);
  do {
  } while (-1 < (int)(*puVar2 << 0x1f));
  *DAT_10068ee0 = uVar4;
  puVar1[4] = uVar3;
  return 0;
}

