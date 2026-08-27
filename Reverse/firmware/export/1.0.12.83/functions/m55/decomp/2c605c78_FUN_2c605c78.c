/* FUN_2c605c78 @ 0x2c605c78 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c605c78(undefined4 param_1)

{
  byte bVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  short asStack_dc [4];
  short sStack_d4;
  short sStack_d2;
  short sStack_d0;
  short sStack_ce;
  short sStack_cc;
  short sStack_ca;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  short *psStack_c0;
  short *psStack_bc;
  undefined4 uStack_98;
  short sStack_84;
  byte bStack_81;
  undefined4 uStack_80;
  int iStack_60;
  undefined1 uStack_54;
  undefined4 uStack_50;
  short sStack_4c;
  byte bStack_4a;
  byte bStack_49;
  undefined1 uStack_40;
  undefined4 uStack_3c;
  short sStack_38;
  undefined2 uStack_32;
  byte bStack_30;
  int iStack_2c;
  
  iStack_2c = *_LAB_2c605fa0;
  iVar5 = FUN_2c602408();
  iVar6 = FUN_2c602400(param_1);
  if (iVar5 == 0x12) {
    pcVar7 = (char *)FUN_2c602410(param_1);
    if (*pcVar7 != '\x02') {
      iVar5 = FUN_2c6033b4(iVar6,0,0x17);
      if (iVar5 == 0) {
        sVar2 = FUN_2c6033b4(iVar6,0,0xb);
        sVar3 = FUN_2c6033b4(iVar6,0,0x68);
        sVar4 = FUN_2c6033b4(iVar6,0,0x69);
        sStack_ca = *(short *)(iVar6 + 0x16) - sVar4;
        sStack_cc = *(short *)(iVar6 + 0x14) - sVar3;
        uStack_c8 = CONCAT22(sVar4 + *(short *)(iVar6 + 0x1a),*(short *)(iVar6 + 0x18) + sVar3);
        iVar5 = FUN_2c62a998(*(undefined4 *)(pcVar7 + 4),&sStack_cc,(int)sVar2);
        if (iVar5 != 0) {
          bVar1 = FUN_2c6033b4(iVar6,0,0x21);
          if (0xfc < bVar1) {
            *pcVar7 = '\0';
            goto LAB_2c605ca6;
          }
        }
        *pcVar7 = '\x01';
      }
      else {
        *pcVar7 = '\x02';
      }
    }
  }
  else if (iVar5 == 0x15) {
    uVar10 = FUN_2c602608(param_1);
    FUN_2c61314c(&sStack_84);
    iVar5 = FUN_2c6033b4(iVar6,0,0x34);
    if (iVar5 != 0) {
      bStack_49 = bStack_49 | 1;
    }
    FUN_2c6004cc(iVar6,0,&sStack_84);
    sVar2 = FUN_2c6033b4(iVar6,0,0x68);
    sStack_ce = FUN_2c6033b4(iVar6,0,0x69);
    sStack_d4 = *(short *)(iVar6 + 0x14) - sVar2;
    sStack_d0 = sVar2 + *(short *)(iVar6 + 0x18);
    sStack_d2 = *(short *)(iVar6 + 0x16) - sStack_ce;
    sStack_ce = sStack_ce + *(short *)(iVar6 + 0x1a);
    FUN_2c600b9c(&sStack_cc,uVar10);
    uStack_c4 = 0;
    uStack_98 = 0;
    uStack_c8 = _LAB_2c605fa4;
    psStack_c0 = &sStack_d4;
    psStack_bc = &sStack_84;
    FUN_2c602340(iVar6,0x1a,&sStack_cc);
    iVar8 = FUN_2c6033b4(iVar6,0,0x17);
    iVar5 = iStack_60;
    if ((iVar8 == 0) || (sStack_84 == 0)) {
      FUN_2c61319c(uVar10,&sStack_84,&sStack_d4);
    }
    else {
      iStack_60 = 0;
      FUN_2c61319c(uVar10,&sStack_84,&sStack_d4);
      uVar9 = FUN_2c62bf1c(0x18);
      FUN_2c6144a0(uVar9,iVar6 + 0x14,(int)sStack_84,0);
      FUN_2c613e5c(uVar9,iVar6 + 0x120);
      if (iVar5 != 0) {
        bStack_81 = 0;
        bStack_4a = 0;
        uStack_40 = 0;
        bStack_30 = 0;
        iStack_60 = iVar5;
        FUN_2c61319c(uVar10,&sStack_84,&sStack_d4);
      }
    }
    FUN_2c602340(iVar6,0x1b,&sStack_cc);
  }
  else if (iVar5 == 0x18) {
    uVar10 = FUN_2c602608(param_1);
    FUN_2c6052c8(iVar6,asStack_dc,&sStack_d4);
    iVar5 = FUN_2c62a64c(asStack_dc);
    if ((iVar5 != 0) || (iVar5 = FUN_2c62a64c(&sStack_d4), iVar5 != 0)) {
      FUN_2c61314c(&sStack_84);
      bStack_81 = FUN_2c6033b4(iVar6,0x10000,0x21);
      if (2 < bStack_81) {
        uStack_80 = FUN_2c6033b4(iVar6,0x10000,0x20);
      }
      bStack_4a = FUN_2c6033b4(iVar6,0x10000,0x31);
      if (2 < bStack_4a) {
        sStack_4c = FUN_2c6033b4(iVar6,0x10000,0x32);
        if (sStack_4c < 1) {
          bStack_4a = 0;
        }
        else {
          uStack_50 = FUN_2c6033b4(iVar6,0x10000,0x30);
        }
      }
      bStack_30 = FUN_2c6033b4(iVar6,0x10000,0x45);
      if (2 < bStack_30) {
        sStack_38 = FUN_2c6033b4(iVar6,0x10000,0x40);
        if (sStack_38 < 1) {
          bStack_30 = 0;
        }
        else {
          uStack_32 = FUN_2c6033b4(iVar6,0x10000,0x43);
          uStack_3c = FUN_2c6033b4(iVar6,0x10000,0x44);
        }
      }
      bVar1 = FUN_2c6033b4(iVar6,0x10000,0x60);
      uVar12 = (uint)bStack_81;
      uVar13 = (uint)bVar1;
      if (uVar13 < 0xfd) {
        uVar11 = uVar13 * uVar12;
        uVar12 = uVar11 >> 8;
        uVar13 = ((int)uVar11 >> 8) * uVar13;
        bStack_81 = (byte)(uVar11 >> 8);
        uVar11 = uVar13 >> 8;
        bStack_4a = (byte)(uVar13 >> 8);
        uVar13 = uVar11;
        bStack_30 = bStack_4a;
      }
      else {
        uVar11 = (uint)bStack_30;
        uVar13 = (uint)bStack_4a;
      }
      if ((uVar13 != 0 || uVar11 != 0) || uVar12 != 0) {
        sStack_84 = FUN_2c6033b4(iVar6,0x10000,0xb);
        FUN_2c600b9c(&sStack_cc,uVar10);
        uStack_c8 = _LAB_2c605fa4;
        uStack_c4 = 2;
        uStack_98 = 0x10000;
        psStack_bc = &sStack_84;
        iVar5 = FUN_2c62a64c(asStack_dc);
        if (iVar5 != 0) {
          psStack_c0 = asStack_dc;
          FUN_2c602340(iVar6,0x1a,&sStack_cc);
          FUN_2c61319c(uVar10,&sStack_84,asStack_dc);
          FUN_2c602340(iVar6,0x1b,&sStack_cc);
        }
        iVar5 = FUN_2c62a64c(&sStack_d4);
        if (iVar5 != 0) {
          psStack_c0 = &sStack_d4;
          FUN_2c602340(iVar6,0x1a,&sStack_cc);
          psStack_c0 = &sStack_d4;
          FUN_2c61319c(uVar10,&sStack_84,&sStack_d4);
          FUN_2c602340(iVar6,0x1b,&sStack_cc);
        }
      }
    }
    iVar5 = FUN_2c6033b4(iVar6,0,0x17);
    if ((iVar5 != 0) && (iVar5 = FUN_2c613f08(iVar6 + 0x120), iVar5 != 0)) {
      FUN_2c613f44();
      FUN_2c62c040(iVar5);
    }
    iVar5 = FUN_2c6033b4(iVar6,0,0x34);
    if (iVar5 != 0) {
      FUN_2c61314c(&sStack_84);
      bStack_81 = 0;
      uStack_54 = 0;
      uStack_40 = 0;
      bStack_30 = 0;
      FUN_2c6004cc(iVar6,0,&sStack_84);
      sVar2 = FUN_2c6033b4(iVar6,0,0x68);
      sStack_ce = FUN_2c6033b4(iVar6,0,0x69);
      sStack_d4 = *(short *)(iVar6 + 0x14) - sVar2;
      sStack_d0 = sVar2 + *(short *)(iVar6 + 0x18);
      sStack_d2 = *(short *)(iVar6 + 0x16) - sStack_ce;
      sStack_ce = sStack_ce + *(short *)(iVar6 + 0x1a);
      FUN_2c600b9c(&sStack_cc,uVar10);
      uStack_c8 = _LAB_2c605fa4;
      uStack_98 = 0;
      uStack_c4 = 1;
      psStack_c0 = &sStack_d4;
      psStack_bc = &sStack_84;
      FUN_2c602340(iVar6,0x1a,&sStack_cc);
      FUN_2c61319c(uVar10,&sStack_84,&sStack_d4);
      FUN_2c602340(iVar6,0x1b,&sStack_cc);
    }
  }
LAB_2c605ca6:
  if (*_LAB_2c605fa0 == iStack_2c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

