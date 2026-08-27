/* FUN_2c1341dc @ 0x2c1341dc */

/* WARNING: Removing unreachable block (ram,0x2c13500c) */
/* WARNING: Removing unreachable block (ram,0x2c134f4c) */
/* WARNING: Removing unreachable block (ram,0x2c134fa0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c1341dc(void)

{
  bool bVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  byte bVar6;
  undefined4 *puVar7;
  undefined4 in_r3;
  undefined4 *puVar8;
  uint uVar10;
  uint uVar11;
  byte *pbVar12;
  uint uVar13;
  undefined4 unaff_lr;
  undefined4 *puVar9;
  
  func_0x2c144974();
  func_0x2c144918();
  if (_DAT_2c134210 < _DAT_2c134214) {
    puVar7 = (undefined4 *)
             ((int)_DAT_2c134210 +
             ((int)_DAT_2c134214 + (-1 - (int)_DAT_2c134210) & 0xfffffffcU) + 4);
    puVar8 = _DAT_2c134210;
    do {
      puVar9 = puVar8 + 1;
      *puVar8 = 0;
      puVar8 = puVar9;
    } while (puVar9 != puVar7);
  }
  func_0x2c1449e8();
  func_0x2c144a00();
  func_0x2c134590(6);
  func_0x2c134870();
  func_0x2c1347dc(0);
  func_0x2c134838();
  func_0x2c134854();
  func_0x2c134784();
  do {
    iVar4 = func_0x2c1348f8(1);
    puVar8 = _DAT_2c135068;
  } while (iVar4 == -1);
  uVar13 = 6;
  iVar4 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    iVar4 = getBasePriority();
  }
  if (iVar4 != 0x40) {
    *_DAT_2c135068 = 0x2c134f26;
    puVar8[1] = unaff_lr;
  }
  pbVar12 = _DAT_2c135070;
  pbVar2 = _DAT_2c13506c;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(0x40);
  }
  if (*_DAT_2c13506c < 0x27) {
    uVar3 = (uint)_DAT_2c135070[*_DAT_2c13506c];
    *_DAT_2c135070 = 6;
  }
  else {
    uVar3 = func_0x2c1446cc();
    pbVar12 = _DAT_2c135070;
    *_DAT_2c135070 = 6;
  }
  if (uVar3 == 6) {
    *pbVar2 = 0;
  }
  else if (uVar3 < 7) {
    bVar6 = *_DAT_2c135074;
    uVar13 = (uint)bVar6;
    *pbVar2 = 0;
    if (uVar13 < 0x13) {
      bVar5 = 6;
      if (uVar13 < 7) {
        bVar5 = bVar6;
      }
      uVar10 = (uint)*_DAT_2c135078;
      uVar11 = (uint)bVar5;
      if (bVar5 < uVar10) {
        uVar11 = uVar10;
      }
      if (uVar3 == 0) {
        uVar3 = 6;
      }
      if (uVar13 <= uVar3) {
        uVar3 = uVar13;
      }
      uVar3 = uVar3 & 0xff;
    }
    else {
      uVar10 = (uint)*_DAT_2c135078;
      bVar6 = 6;
      if (6 < uVar10) {
        bVar6 = *_DAT_2c135078;
      }
      if (uVar3 == 0) {
        uVar3 = 6;
      }
      uVar11 = (uint)bVar6;
    }
    if (uVar3 < uVar10) {
      uVar3 = uVar10;
    }
    if ((uVar3 & 0xff) != uVar11) {
      func_0x2c134774(uVar3 & 0xff,uVar11,uVar13,uVar10,in_r3);
      func_0x2c134590(uVar11);
    }
  }
  else {
    if (*pbVar2 == 0) {
      uVar13 = (uint)*pbVar12;
      uVar11 = 0;
      uVar10 = 1;
      pbVar12 = _DAT_2c135070;
      do {
        pbVar12 = pbVar12 + 1;
        if (uVar13 < *pbVar12) {
          uVar11 = uVar10 & 0xff;
          uVar13 = (uint)*pbVar12;
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 != 0x27);
      *pbVar2 = (byte)uVar11;
      if (uVar13 == uVar3) goto LAB_2c134f8e;
    }
    else {
      if (*pbVar2 != 0x27) goto LAB_2c134f8e;
      *pbVar2 = 0;
    }
    uVar10 = (uint)*_DAT_2c135074;
    if (uVar13 == 0) {
      uVar13 = 6;
    }
    if (uVar10 < 0x13) {
      if (uVar10 <= uVar13) {
        uVar13 = uVar10;
      }
      uVar11 = (uint)*_DAT_2c135078;
      if (uVar13 < uVar11) {
        uVar13 = uVar11;
      }
      if (uVar3 == 0) {
        uVar3 = 6;
      }
      if (uVar10 <= uVar3) {
        uVar3 = uVar10;
      }
      uVar3 = uVar3 & 0xff;
    }
    else {
      uVar11 = (uint)*_DAT_2c135078;
      if (uVar13 < uVar11) {
        uVar13 = uVar11;
      }
      if (uVar3 == 0) {
        uVar3 = 6;
      }
    }
    if (uVar3 < uVar11) {
      uVar3 = uVar11;
    }
    if ((uVar3 & 0xff) != uVar13) {
      func_0x2c134590(uVar13);
      func_0x2c134704(uVar3 & 0xff,uVar13);
    }
  }
LAB_2c134f8e:
  if (iVar4 == 0) {
    *_DAT_2c135068 = 0xffffffff;
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(iVar4);
  }
  return 0;
}

