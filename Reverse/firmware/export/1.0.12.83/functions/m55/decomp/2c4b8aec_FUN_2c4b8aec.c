/* FUN_2c4b8aec @ 0x2c4b8aec */

undefined4 FUN_2c4b8aec(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  iVar1 = DAT_2c4b8c40;
  if (*(int *)(DAT_2c4b8c40 + 0x7c0) << 0x11 < 0) {
    FUN_2c4b7f30(*(int *)(DAT_2c4b8c4c + (uint)*DAT_2c4b8c48 * 0xc) * 200,1);
    *(uint *)(iVar1 + 0x7c0) = *(uint *)(iVar1 + 0x7c0) | 0x400;
  }
  if ((*DAT_2c4b8c44 & 0xff00) != 0) {
    FUN_2c4b754c();
  }
  puVar3 = DAT_2c4b8c50;
  uVar4 = *DAT_2c4b8c50;
  if ((uVar4 & 0xc0) != 0) {
    if ((int)(uVar4 << 0x19) < 0) {
      *(uint *)(DAT_2c4b8c40 + 0x9c) = *(uint *)(DAT_2c4b8c40 + 0x9c) | 1;
    }
    if ((int)(uVar4 << 0x18) < 0) {
      *(uint *)(DAT_2c4b8c40 + 0xa0) = *(uint *)(DAT_2c4b8c40 + 0xa0) | 1;
    }
  }
  iVar1 = DAT_2c4b8c40;
  uVar7 = 0;
  uVar5 = 0;
  while( true ) {
    uVar6 = 1 << (uVar5 & 0xff);
    if ((uVar6 & uVar4) != 0) {
      if ((uVar6 & *(uint *)(iVar1 + 0x780)) == 0) {
        if ((uVar5 < 6) && ((2 << (uVar5 & 0xff) & *(uint *)(iVar1 + 0x80)) == 0)) {
          uVar4 = 0x10 << (uVar5 & 0xff);
          *(uint *)(iVar1 + 0xac) = *(uint *)(iVar1 + 0xac) | uVar4;
          FUN_2c673b08(2);
          *(uint *)(iVar1 + 0xac) = *(uint *)(iVar1 + 0xac) & ~uVar4;
        }
        *(uint *)(iVar1 + 0x780) = uVar6 | *(uint *)(iVar1 + 0x780);
      }
      uVar4 = uVar7 & 0xff;
      uVar7 = uVar7 + 1;
      *(uint *)(iVar1 + 0x700) = 2 << uVar4 | *(uint *)(iVar1 + 0x700);
    }
    iVar2 = DAT_2c4b8c40;
    uVar5 = uVar5 + 1;
    if (uVar5 == 8) break;
    uVar4 = *puVar3;
  }
  *(uint *)(DAT_2c4b8c40 + 0x704) = *(uint *)(DAT_2c4b8c40 + 0x704) | 0xff;
  FUN_2c673b08(2);
  *(uint *)(iVar2 + 0x704) = *(uint *)(iVar2 + 0x704) & 0xffffff00;
  if (param_2 != 0) {
    *(uint *)(iVar2 + 0x708) = *(uint *)(iVar2 + 0x708) & 0xfffffff0 | 4;
    *(uint *)(iVar2 + 0x700) = *(uint *)(iVar2 + 0x700) | 0x800;
  }
  *(uint *)(DAT_2c4b8c40 + 0x700) = *(uint *)(DAT_2c4b8c40 + 0x700) | 1;
  return 0;
}

