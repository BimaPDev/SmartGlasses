/* FUN_2c4b9118 @ 0x2c4b9118 */

undefined4 FUN_2c4b9118(undefined4 param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  
  pbVar5 = DAT_2c4b927c;
  puVar4 = DAT_2c4b9274;
  puVar3 = DAT_2c4b926c;
  if (param_2 == 0) {
    *DAT_2c4b926c = *DAT_2c4b926c & 0xfffffbff;
    *puVar3 = *puVar3 & 0xffffefff;
    uVar6 = (uint)*pbVar5;
    if ((int)(uVar6 << 0x1d) < 0) {
      uVar6 = uVar6 & 0xfb;
      *pbVar5 = (byte)uVar6;
    }
    if (uVar6 == 0) {
      DAT_2c4b926c[0x2f] = DAT_2c4b926c[0x2f] & 0xfffffffd;
    }
    puVar3 = DAT_2c4b926c;
    DAT_2c4b926c[0x39] = DAT_2c4b926c[0x39] & 0xfffffffe;
    puVar3[0x39] = puVar3[0x39] & 0xfffffff7;
    FUN_2c4b7ea8(0);
    puVar3[1] = puVar3[1] | 0x100;
    FUN_2c673b08(2);
    puVar3[1] = puVar3[1] & 0xfffffeff;
    puVar3[0x15] = puVar3[0x15] & 0xffff3fff;
    puVar3[0x11] = puVar3[0x11] & 0xffffffcf;
    puVar3[0x11] = puVar3[0x11] & 0xffffcfff;
    return 0;
  }
  uVar7 = 0;
  *DAT_2c4b926c = DAT_2c4b9270 & *DAT_2c4b926c;
  *puVar3 = *puVar3 & 0xfffff7ff;
  uVar6 = *puVar4;
  do {
    uVar1 = uVar7 & 0xff;
    uVar2 = uVar7 & 0xff;
    uVar7 = uVar7 + 1;
    if ((1 << uVar1 & uVar6) != 0) {
      puVar3[0x20] = puVar3[0x20] & ~(2 << uVar2);
    }
  } while (uVar7 != 8);
  if ((uVar6 & 0xc0) != 0) {
    if ((int)(uVar6 << 0x19) < 0) {
      DAT_2c4b926c[0x27] = DAT_2c4b926c[0x27] & 0xfffffffe;
    }
    if ((int)(uVar6 << 0x18) < 0) {
      DAT_2c4b926c[0x28] = DAT_2c4b926c[0x28] & 0xfffffffe;
      uVar6 = *DAT_2c4b9278;
      goto joined_r0x2c4b91d4;
    }
  }
  uVar6 = *DAT_2c4b9278;
joined_r0x2c4b91d4:
  if ((uVar6 & 0xff00) != 0) {
    DAT_2c4b926c[0x31] = DAT_2c4b926c[0x31] & 0xfffffffe;
  }
  puVar3 = DAT_2c4b926c;
  DAT_2c4b926c[0x39] = DAT_2c4b926c[0x39] & 0xffffffef;
  FUN_2c4b7fb0(0);
  puVar3[1] = puVar3[1] | 0xff;
  FUN_2c673b08(2);
  puVar3[1] = puVar3[1] & 0xffffff00;
  puVar3[0x15] = puVar3[0x15] & 0xffffff3f;
  puVar3[0x11] = puVar3[0x11] & 0xffffff3f;
  return 0;
}

