/* FUN_2c017c00 @ 0x2c017c00 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c017c00(int param_1)

{
  bool bVar1;
  ushort *puVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  FUN_2c017b90();
  uVar6 = _DAT_50000070;
  uVar5 = _DAT_50000060;
  uVar4 = uRam50000010;
  uVar3 = _DAT_50000000;
  puVar2 = _DAT_2c017eb0;
  uVar10 = *(uint *)(_DAT_2c017eac + 0x4c);
  uVar15 = *(uint *)(_DAT_2c017eac + 4);
  if (param_1 == 1) {
    uVar16 = 0;
    uVar14 = uRam5000008c & 0x3000;
    uVar13 = uRam5000008c & 0x2000;
    bVar1 = true;
    bVar7 = true;
    uVar8 = uRam5000008c;
  }
  else if (param_1 == 3) {
    uVar13 = 0;
    bVar7 = true;
    bVar1 = true;
    uVar8 = uVar13;
    uVar16 = uVar13;
    uVar14 = uVar13;
  }
  else {
    if ((int)((uint)*_DAT_2c017eb0 << 0x1e) < 0) {
      if (*_DAT_2c017eb4 != '\0') {
        bVar1 = false;
        goto LAB_2c017c3a;
      }
      *(undefined4 *)(_DAT_2c017eac + 4) = 0x4001;
      bVar1 = false;
      bVar7 = false;
      if (-1 < (int)((uint)puVar2[1] << 0x1e)) goto LAB_2c017c66;
LAB_2c017c40:
      bVar1 = bVar7;
      if (*_DAT_2c017eb4 == '\x01') {
        bVar7 = false;
        *(undefined4 *)(_DAT_2c017fa4 + 4) = 0x8010;
      }
      else {
        bVar7 = false;
      }
    }
    else {
      bVar1 = true;
LAB_2c017c3a:
      bVar7 = bVar1;
      if ((int)((uint)_DAT_2c017eb0[1] << 0x1e) < 0) goto LAB_2c017c40;
LAB_2c017c66:
      bVar7 = true;
    }
    *(undefined4 *)(_DAT_2c017eac + 4) = 6;
    DataSynchronizationBarrier(0xf);
    uVar13 = 0;
    uVar8 = 0;
    uVar16 = 1;
    uVar14 = 0;
  }
  iVar12 = _DAT_2c017eac;
  _DAT_50000070 = _DAT_50000070 | 0x6000000;
  uRam50000014 = _DAT_2c017ec0;
  _DAT_50000004 = _DAT_2c017ec4;
  DataSynchronizationBarrier(0xf);
  uRam50000084 = *_DAT_2c017eb8;
  uRam50000088 = _DAT_2c017eb8[1];
  uRam500000fc = uRam500000fc & 0xffffff | _DAT_2c017eb8[2] << 0x18;
  if (uVar14 == 0) {
    uRam50000058 = uRam50000058 & 0xe1ffffff | 0x1a000000;
  }
  else {
    uRam50000058 = uRam50000058 & 0xe1ffffff | 0x16000000;
  }
  if ((bVar1) && ((int)(uVar15 << 0x11) < 0)) {
    *(undefined4 *)(_DAT_2c017eac + 8) = 1;
    *(undefined4 *)(iVar12 + 8) = 0x4000;
  }
  iVar12 = _DAT_2c017eac;
  if ((bVar7) && ((int)(uVar15 << 0x10) < 0)) {
    *(undefined4 *)(_DAT_2c017eac + 8) = 0x10;
    *(undefined4 *)(iVar12 + 8) = 0x8000;
  }
  iVar12 = _DAT_2c017eac;
  uVar14 = uVar15 & 0x800;
  if (uVar14 != 0) {
    *(undefined4 *)(_DAT_2c017eac + 8) = 0x400;
    *(undefined4 *)(iVar12 + 8) = 0x800;
  }
  if (uVar13 == 0) {
    _DAT_50000060 = 0x300;
    _DAT_50000064 = 0x20;
    if ((int)(uVar5 << 0xd) < 0) {
      _DAT_50000064 = 0x40000;
    }
    if (-1 < (int)(uVar8 << 0x13)) {
      *(uint *)(_DAT_2c017eac + 0x4c) = uVar10 & 0xfffffffe;
      _DAT_50000064 = 0x180;
    }
    DataSynchronizationBarrier(0xf);
  }
  if (param_1 == 1) {
    uVar11 = 4;
  }
  else {
    uVar11 = 0;
  }
  *(undefined4 *)(_DAT_2c017ebc + 0x10) = uVar11;
  DataSynchronizationBarrier(0xf);
  WaitForInterrupt();
  if (uVar13 == 0) {
    if ((int)(uVar8 << 0x13) < 0) {
      iVar12 = FUN_2c0155a8();
      do {
        if ((int)(uRam5000008c << 0x11) < 0) break;
        iVar9 = FUN_2c0155a8();
      } while ((uint)(iVar9 - iVar12) < 0x22);
    }
    else {
      if (param_1 == 1) {
        func_0x2c0155c0(0x21);
      }
      _DAT_50000060 = 0x100;
      _DAT_50000064 = 0x40;
      *(uint *)(_DAT_2c017eac + 0x4c) = uVar10;
      DataSynchronizationBarrier(0xf);
    }
    iVar12 = uVar5 << 0xd;
    if (iVar12 < 0) {
      _DAT_50000060 = 0x40000;
      DataSynchronizationBarrier(0xf);
      iVar9 = FUN_2c0155a8();
      do {
        uVar17 = FUN_2c0155a8();
        iVar12 = (int)((ulonglong)uVar17 >> 0x20);
      } while ((uint)((int)uVar17 - iVar9) < 5);
      _DAT_50000060 = 0x20000;
      DataSynchronizationBarrier(0xf);
    }
  }
  else {
    uVar17 = FUN_2c0155a8();
    iVar12 = (int)((ulonglong)uVar17 >> 0x20);
    do {
      if ((int)(uRam5000008c << 0x10) < 0) break;
      uVar18 = FUN_2c0155a8();
      iVar12 = (int)((ulonglong)uVar18 >> 0x20);
    } while ((uint)((int)uVar18 - (int)uVar17) < 0x27);
  }
  if ((uVar15 & 0xc800) == 0) goto LAB_2c017e20;
  if (bVar1) {
    if ((int)(uVar15 << 0x11) < 0) {
      *(undefined4 *)(_DAT_2c017fa4 + 4) = 0x4000;
      if ((bVar7) && ((int)(uVar15 << 0x10) < 0)) {
LAB_2c017ede:
        *(undefined4 *)(_DAT_2c017fa4 + 4) = 0x8000;
      }
      if (uVar14 != 0) goto LAB_2c017dd8;
LAB_2c017de0:
      iVar9 = FUN_2c0155a8();
      do {
        uVar17 = FUN_2c0155a8();
        iVar12 = (int)((ulonglong)uVar17 >> 0x20);
      } while ((uint)((int)uVar17 - iVar9) < 5);
      if (bVar1) {
LAB_2c017df2:
        if ((int)(uVar15 << 0x1f) < 0) goto LAB_2c017df6;
      }
    }
    else {
      if (bVar7) {
        if ((int)(uVar15 << 0x10) < 0) goto LAB_2c017ede;
        if (uVar14 != 0) goto LAB_2c017dd8;
        goto LAB_2c017df2;
      }
      if (uVar14 != 0) goto LAB_2c017dd8;
      if (-1 < (int)(uVar15 << 0x1f)) goto LAB_2c017e0c;
LAB_2c017df6:
      *(undefined4 *)(_DAT_2c017eac + 4) = 1;
    }
    if (bVar7) {
LAB_2c017e02:
      iVar12 = uVar15 << 0x1b;
      if (iVar12 < 0) {
        *(undefined4 *)(_DAT_2c017eac + 4) = 0x10;
      }
    }
  }
  else {
    if (bVar7) {
      if ((int)(uVar15 << 0x10) < 0) goto LAB_2c017ede;
      if (uVar14 != 0) goto LAB_2c017dd8;
      goto LAB_2c017e02;
    }
    if (uVar14 != 0) {
LAB_2c017dd8:
      *(undefined4 *)(_DAT_2c017eac + 4) = 0x800;
      goto LAB_2c017de0;
    }
  }
LAB_2c017e0c:
  if ((int)(uVar15 << 0x15) < 0) {
    *(undefined4 *)(_DAT_2c017eac + 4) = 0x400;
  }
  DataSynchronizationBarrier(0xf);
LAB_2c017e20:
  _DAT_50000064 = ~uVar5;
  DataSynchronizationBarrier(0xf);
  _DAT_50000060 = uVar5;
  _DAT_50000070 = uVar6;
  if (uVar16 != 0) {
    *(uint *)(_DAT_2c017eac + 8) = ~uVar15;
    DataSynchronizationBarrier(0xf);
  }
  if ((uVar4 & _DAT_2c017ec0) == 0) {
    return 0;
  }
  DataSynchronizationBarrier(0xf);
  _DAT_50000000 = uVar3;
  uRam50000010 = uVar4;
  func_0x2c0155d4(2,iVar12,uVar3,uVar4);
  return 0;
}

