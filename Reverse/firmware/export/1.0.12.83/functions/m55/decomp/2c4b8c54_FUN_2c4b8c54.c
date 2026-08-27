/* FUN_2c4b8c54 @ 0x2c4b8c54 */

undefined4 FUN_2c4b8c54(void)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  puVar2 = DAT_2c4b8d30;
  iVar1 = DAT_2c4b8d28;
  uVar4 = 0;
  *(uint *)(DAT_2c4b8d28 + 0x700) = DAT_2c4b8d2c & *(uint *)(DAT_2c4b8d28 + 0x700);
  *(uint *)(iVar1 + 0x700) = *(uint *)(iVar1 + 0x700) & 0xfffff7ff;
  uVar5 = *puVar2;
  do {
    uVar3 = 1 << (uVar4 & 0xff);
    uVar4 = uVar4 + 1;
    if ((uVar3 & uVar5) != 0) {
      *(uint *)(iVar1 + 0x780) = *(uint *)(iVar1 + 0x780) & ~uVar3;
    }
  } while (uVar4 != 8);
  if ((uVar5 & 0xc0) != 0) {
    if ((int)(uVar5 << 0x19) < 0) {
      *(uint *)(DAT_2c4b8d28 + 0x9c) = *(uint *)(DAT_2c4b8d28 + 0x9c) & 0xfffffffe;
    }
    if ((int)(uVar5 << 0x18) < 0) {
      *(uint *)(DAT_2c4b8d28 + 0xa0) = *(uint *)(DAT_2c4b8d28 + 0xa0) & 0xfffffffe;
    }
  }
  if ((*DAT_2c4b8d34 & 0xff00) == 0) {
    *(uint *)(DAT_2c4b8d28 + 0xc4) = *(uint *)(DAT_2c4b8d28 + 0xc4) & 0xfffffffe;
  }
  iVar1 = DAT_2c4b8d28;
  *(uint *)(DAT_2c4b8d28 + 0x7c0) = *(uint *)(DAT_2c4b8d28 + 0x7c0) & 0xfffffbff;
  FUN_2c4b7fb0(1);
  *(uint *)(iVar1 + 0x704) = *(uint *)(iVar1 + 0x704) | 0xff;
  FUN_2c673b08(2);
  *(uint *)(iVar1 + 0x704) = *(uint *)(iVar1 + 0x704) & 0xffffff00;
  *(uint *)(iVar1 + 0x748) = *(uint *)(iVar1 + 0x748) & 0xfffffffc;
  *(uint *)(iVar1 + 0x748) = *(uint *)(iVar1 + 0x748) & 0xfffffff3;
  return 0;
}

