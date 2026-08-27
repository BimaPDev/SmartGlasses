/* FUN_1403164c @ 0x1403164c */

void FUN_1403164c(void)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  ushort uVar4;
  uint uVar5;
  undefined4 uVar6;
  uint in_fpscr;
  float fVar7;
  undefined4 uVar8;
  ushort local_22;
  undefined2 local_20;
  ushort local_1e;
  int local_1c;
  
  iVar1 = DAT_140319e8;
  local_1c = *DAT_140319e4;
  local_22 = 0;
  uVar6 = *(undefined4 *)(DAT_140319e8 + 0xc00);
  FUN_1402e1fc(0x2102,&local_20,0);
  *(undefined4 *)(iVar1 + 0xc00) = DAT_140319ec;
  FUN_140e5398(0xa0);
  FUN_1402e1fc(0x2102,&local_1e);
  local_1e = local_1e | 0x80;
  FUN_1402e37c(0x2102);
  FUN_140e5398(0x10);
  FUN_1402e1fc(0x2102,&local_1e);
  local_1e = local_1e | 0x10;
  FUN_1402e37c(0x2102);
  FUN_140e5398(0xa0);
  FUN_1402e1fc(0x2103,&local_22);
  uVar2 = DAT_140319f0;
  uVar3 = (uint)local_22;
  FUN_1402a6e8(4,0xd4,DAT_140319f8,DAT_140319fc,DAT_140319f4,DAT_140319f0,uVar3);
  if ((int)((uint)local_22 << 0x13) < 0) {
    uVar5 = local_22 & 0xfff;
    uVar8 = uVar2;
    uVar3 = uVar5;
    FUN_1402a6e8(4,0xd8,DAT_140319f8,DAT_140319fc,DAT_14031a00,uVar2,uVar5);
    fVar7 = (float)VectorUnsignedToFloat(uVar5,(byte)(in_fpscr >> 0x16) & 3);
    fVar7 = fVar7 / DAT_14031a04;
    if ((fVar7 <= DAT_14031a08) || (-1 < (int)((uint)(fVar7 < DAT_14031a0c) << 0x1f))) {
      FUN_1402a6e8(4,0xe3,DAT_14031c3c,DAT_14031c38,DAT_14031c48,uVar8,uVar3);
      fVar7 = 1.0;
      uVar4 = 0x1400;
      uVar3 = 0x50;
    }
    else {
      uVar3 = (uint)(0.0 < DAT_14031a10 / fVar7) * (int)(DAT_14031a10 / fVar7) & 0xffff;
      uVar4 = (ushort)(uVar3 << 6);
    }
    FUN_1402a6e8(4,0xe8,DAT_140319f8,DAT_140319fc,DAT_14031a14,uVar2,uVar3);
    FUN_1402e1fc(0x2098,&local_1e);
    local_1e = local_1e & 0xe03f | uVar4;
    FUN_1402e37c(0x2098);
    uVar3 = (uint)(0.0 < DAT_14031a18 / fVar7) * (int)(DAT_14031a18 / fVar7);
    FUN_1402a6e8(4,0xec,DAT_140319f8,DAT_140319fc,DAT_14031a1c,uVar2,uVar3 & 0xffff);
    FUN_1402e1fc(0x204e,&local_1e);
    uVar4 = (ushort)uVar3;
    local_1e = local_1e & 0xff80 | uVar4;
    FUN_1402e37c(0x204e);
    FUN_1402e1fc(0x204f,&local_1e);
    local_1e = local_1e & 0xff80 | uVar4;
    FUN_1402e37c(0x204f);
    FUN_1402e1fc(0x2125,&local_1e);
    local_1e = local_1e & 0xff80 | uVar4;
    FUN_1402e37c(0x2125);
    FUN_1402e1fc(0x2126,&local_1e);
    local_1e = local_1e & 0xff80 | uVar4;
    FUN_1402e37c(0x2126);
    FUN_1402e1fc(0x2224,&local_1e);
    local_1e = local_1e & 0xff80 | uVar4;
    FUN_1402e37c(0x2224);
    FUN_1402e1fc(0x2225,&local_1e);
    local_1e = local_1e & 0xff80 | uVar4;
    FUN_1402e37c(0x2225);
    uVar3 = (uint)(0.0 < DAT_14031a20 / fVar7) * (int)(DAT_14031a20 / fVar7);
    FUN_1402a6e8(4,0xf8,DAT_140319f8,DAT_140319fc,DAT_14031a24,uVar2,uVar3 & 0xffff);
    FUN_1402e1fc(0x2050,&local_1e);
    uVar4 = (ushort)uVar3;
    local_1e = local_1e & 0xff80 | uVar4;
    FUN_1402e37c(0x2050);
    FUN_1402e1fc(0x2051,&local_1e);
    local_1e = local_1e & 0xff80 | uVar4;
    FUN_1402e37c(0x2051);
    FUN_1402e1fc(0x2052,&local_1e);
    local_1e = local_1e & 0xff80 | uVar4;
    FUN_1402e37c(0x2052);
    FUN_1402e1fc(0x2053,&local_1e);
    local_1e = local_1e & 0xff80 | uVar4;
    FUN_1402e37c(0x2053);
    FUN_1402e1fc(0x2054,&local_1e);
    local_1e = local_1e & 0xff80 | uVar4;
    FUN_1402e37c(0x2054);
    FUN_1402e1fc(0x2127,&local_1e);
    local_1e = local_1e & 0xff80 | uVar4;
    FUN_1402e37c(0x2127);
    FUN_1402e1fc(0x2128,&local_1e);
    local_1e = local_1e & 0xff80 | uVar4;
    FUN_1402e37c(0x2128);
    FUN_1402e1fc(0x2129,&local_1e);
    local_1e = local_1e & 0xff80 | uVar4;
    FUN_1402e37c(0x2129);
    FUN_1402e1fc(0x212a,&local_1e);
    local_1e = local_1e & 0xff80 | uVar4;
    FUN_1402e37c(0x212a);
    FUN_1402e1fc(0x212b,&local_1e);
    local_1e = local_1e & 0xff80 | uVar4;
    FUN_1402e37c(0x212b);
    FUN_1402e1fc(0x2226,&local_1e);
    local_1e = local_1e & 0xff80 | uVar4;
    FUN_1402e37c(0x2226);
    FUN_1402e1fc(0x2227,&local_1e);
    local_1e = local_1e & 0xff80 | uVar4;
    FUN_1402e37c(0x2227);
    FUN_1402e1fc(0x2228,&local_1e);
    local_1e = local_1e & 0xff80 | uVar4;
    FUN_1402e37c(0x2228);
    FUN_1402e1fc(0x2229,&local_1e);
    local_1e = local_1e & 0xff80 | uVar4;
    FUN_1402e37c(0x2229);
    FUN_1402e1fc(0x222a,&local_1e);
    local_1e = local_1e & 0xff80 | uVar4;
    FUN_1402e37c(0x222a);
    uVar3 = (uint)(0.0 < DAT_14031a28 / fVar7) * (int)(DAT_14031a28 / fVar7);
    FUN_1402a6e8(4,0x10d,DAT_14031c3c,DAT_14031c38,DAT_14031c34,uVar2,uVar3 & 0xffff);
    FUN_1402e1fc(0x2083,&local_1e);
    local_1e = local_1e & 0xff00 | (ushort)uVar3;
    FUN_1402e37c(0x2083);
    FUN_1402e1fc(0x2083,&local_1e);
    local_1e = local_1e & 0x80ff | (ushort)((uVar3 & 0xff) << 8);
    FUN_1402e37c(0x2083);
    FUN_1402e1fc(0x2065,&local_1e);
    local_1e = local_1e & 0xc03f | (ushort)((uVar3 & 0x3ff) << 6);
    FUN_1402e37c(0x2065);
    FUN_1402e1fc(0x2066,&local_1e);
    local_1e = local_1e & 0xff80 | (ushort)uVar3;
    FUN_1402e37c(0x2066);
  }
  else {
    FUN_1402a6e8(4,0xda,DAT_14031c3c,DAT_14031c38,DAT_14031c4c,uVar2,uVar3);
  }
  *(undefined4 *)(DAT_14031c40 + 0xc00) = uVar6;
  FUN_1402e37c(0x2102,local_20);
  if (*DAT_14031c44 == local_1c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

