/* FUN_2c011b4c @ 0x2c011b4c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_2c011b4c(uint param_1,byte *param_2)

{
  ushort uVar1;
  ushort uVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  short sVar9;
  short sVar10;
  uint uVar11;
  undefined4 uVar12;
  int iVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  int iStack_4c;
  undefined4 uStack_48;
  ushort uStack_38;
  ushort uStack_36;
  int iStack_34;
  
  pcVar3 = _DAT_2c011e70;
  iStack_34 = *_DAT_2c011e74;
  if (*_DAT_2c011e70 != '\x02') {
    uVar4 = 1;
    goto LAB_2c011ccc;
  }
  uVar5 = param_1 - 0x53;
  uVar4 = 2;
  if (0x3b < (uVar5 & 0xff)) goto LAB_2c011ccc;
  if (*_DAT_2c011e78 == '\0') {
    *_DAT_2c011e78 = '\x01';
    func_0x2c006fb0(3);
    sVar9 = 0x15d;
    do {
      sVar10 = sVar9 + 1;
      uStack_38 = 0x808;
      FUN_2c008f74(sVar9,0x808);
      sVar9 = sVar10;
    } while (sVar10 != 0x161);
    FUN_2c008e4c(0x135,&uStack_38);
    uStack_38 = uStack_38 | 0x20;
    if ((*pcVar3 == '\x02') && (*_DAT_2c011e80 != '\0')) {
      FUN_2c008e4c(0x102,&uStack_36);
      uStack_36 = uStack_36 | 0x10;
      FUN_2c008f74(0x102);
    }
    FUN_2c008f74(0x135,uStack_38);
    FUN_2c00d6e4(4,_DAT_2c011e84);
  }
  if (param_1 < 99) {
    iVar13 = 0;
    uVar4 = uVar5 & 0xffff;
    uVar14 = 0x171;
    uVar15 = 0x149;
    uVar12 = 0x159;
    uStack_48 = 0x161;
    uVar6 = 0x14d;
  }
  else if (param_1 < 0x73) {
    iVar13 = 1;
    uVar14 = 0x172;
    uVar15 = 0x14a;
    uVar4 = param_1 - 99 & 0xffff;
    uVar12 = 0x15a;
    uStack_48 = 0x162;
    uVar6 = 0x14e;
  }
  else if (param_1 < 0x83) {
    iVar13 = 2;
    uVar14 = 0x173;
    uVar15 = 0x14b;
    uVar4 = param_1 - 0x73 & 0xffff;
    uVar12 = 0x15b;
    uStack_48 = 0x163;
    uVar6 = 0x14f;
  }
  else {
    iVar13 = 3;
    uVar14 = 0x174;
    uVar15 = 0x14c;
    uVar4 = param_1 - 0x83 & 0xffff;
    uVar12 = 0x15c;
    uStack_48 = 0x164;
    uVar6 = 0x150;
  }
  uVar4 = 1 << (uVar4 & 0xff);
  FUN_2c008e4c(uVar6,&uStack_38);
  uVar11 = uVar4 & 0xffff;
  uVar2 = (ushort)uVar4;
  if (param_2[1] == 0) {
    uStack_38 = uStack_38 & ~uVar2;
  }
  else {
    uStack_38 = uVar2 | uStack_38;
  }
  FUN_2c008f74(uVar6);
  *(ushort *)(_DAT_2c011e78 + iVar13 * 2 + 0x12) = uStack_38;
  if (param_2[2] == 2) {
    if (*pcVar3 == '\x02') {
      if (param_1 < 99) {
        uVar4 = uVar5 & 0xffff;
        uVar6 = 0x131;
        uVar16 = 0x165;
        iStack_4c = 0;
        uVar7 = 0x175;
      }
      else if (param_1 < 0x73) {
        uVar6 = 0x138;
        uVar16 = 0x166;
        uVar4 = param_1 - 99 & 0xffff;
        iStack_4c = 1;
        uVar7 = 0x176;
      }
      else if (param_1 < 0x83) {
        uVar6 = 0x13f;
        uVar4 = param_1 - 0x73 & 0xffff;
        uVar16 = 0x167;
        uVar7 = 0x177;
        iStack_4c = 2;
      }
      else {
        uVar6 = 0x143;
        uVar16 = 0x168;
        uVar4 = param_1 - 0x83 & 0xffff;
        iStack_4c = 3;
        uVar7 = 0x178;
      }
      uVar8 = 1 << (uVar4 & 0xff);
      uVar4 = uVar8 & 0xffff;
      uVar1 = (ushort)uVar8;
      if ((int)((uint)*param_2 << 0x1f) < 0) {
        FUN_2c008e4c(uVar6,&uStack_36);
        uStack_36 = uStack_36 | uVar1;
        FUN_2c008f74(uVar6);
        FUN_2c008e4c(uVar7,&uStack_36);
        uStack_36 = uStack_36 | uVar1;
        FUN_2c008f74(uVar7);
        *(ushort *)(_DAT_2c012028 + iStack_4c * 4 + 4) = uStack_36;
        uStack_36 = uVar1;
        FUN_2c008f74(uVar16,uVar4);
      }
      else {
        FUN_2c008e4c(uVar6,&uStack_36);
        uStack_36 = uStack_36 & ~uVar1;
        FUN_2c008f74(uVar6);
        FUN_2c008e4c(uVar7,&uStack_36);
        uStack_36 = uStack_36 & ~uVar1;
        FUN_2c008f74(uVar7);
        *(ushort *)(_DAT_2c012028 + iStack_4c * 4 + 4) = uStack_36;
        uStack_36 = uVar1;
        FUN_2c008f74(uVar16,uVar4);
      }
    }
    FUN_2c008e4c(iVar13 + 0x155,&uStack_38);
    uStack_38 = uVar2 | uStack_38;
LAB_2c011da0:
    FUN_2c008f74(iVar13 + 0x155);
    *(ushort *)(_DAT_2c011e78 + iVar13 * 2 + 0x1a) = uStack_38;
  }
  else {
    if (param_2[1] == 1) {
      FUN_2c008e4c(iVar13 + 0x155,&uStack_38);
      if (param_2[2] == 1) {
        uStack_38 = uVar2 | uStack_38;
      }
      else {
        uStack_38 = uStack_38 & ~uVar2;
      }
      goto LAB_2c011da0;
    }
    FUN_2c008e4c(iVar13 + 0x151,&uStack_38);
    if (param_2[2] == 1) {
      uStack_38 = uStack_38 & ~uVar2;
    }
    else {
      uStack_38 = uVar2 | uStack_38;
    }
    FUN_2c008f74(iVar13 + 0x151);
    *(ushort *)(_DAT_2c011e78 + iVar13 * 2 + 0x22) = uStack_38;
  }
  FUN_2c008e4c(uVar12,&uStack_38);
  if ((int)((uint)*param_2 << 0x1e) < 0) {
    uStack_38 = uStack_38 & ~uVar2;
  }
  else {
    uStack_38 = uVar2 | uStack_38;
  }
  FUN_2c008f74(uVar12);
  uVar4 = *param_2 & 1;
  if ((*param_2 & 1) == 0) {
    FUN_2c008e4c(uVar14,&uStack_38);
    uStack_38 = uStack_38 & ~uVar2;
    FUN_2c008f74(uVar14);
    *(ushort *)(_DAT_2c011e78 + iVar13 * 4 + 2) = uStack_38;
    uStack_38 = uVar2;
    FUN_2c008f74(uStack_48,uVar11);
    FUN_2c008e4c(uVar15,&uStack_38);
    uStack_38 = uStack_38 & ~uVar2;
    FUN_2c008f74(uVar15);
    *(uint *)(_DAT_2c011e7c + uVar5 * 4) = uVar4;
  }
  else {
    FUN_2c008e4c(uVar14,&uStack_38);
    uStack_38 = uVar2 | uStack_38;
    FUN_2c008f74(uVar14);
    *(ushort *)(_DAT_2c011e78 + iVar13 * 4 + 2) = uStack_38;
    uStack_38 = uVar2;
    FUN_2c008f74(uStack_48,uVar11);
    FUN_2c008e4c(uVar15,&uStack_38);
    uStack_38 = uVar2 | uStack_38;
    FUN_2c008f74(uVar15);
    if (*(int *)(param_2 + 4) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = 0;
      *(int *)(_DAT_2c011e7c + uVar5 * 4) = *(int *)(param_2 + 4);
    }
  }
LAB_2c011ccc:
  if (*_DAT_2c011e74 != iStack_34) {
                    /* WARNING: Subroutine does not return */
    FUN_2c0084a8();
  }
  return uVar4;
}

