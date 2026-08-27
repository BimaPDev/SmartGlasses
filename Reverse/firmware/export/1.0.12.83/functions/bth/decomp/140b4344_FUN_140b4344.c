/* FUN_140b4344 @ 0x140b4344 */

undefined4 FUN_140b4344(uint param_1,uint param_2)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  byte *pbVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  uint *puVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  undefined4 unaff_lr;
  uint uVar15;
  
  uVar14 = DAT_140b4580;
  puVar5 = DAT_140b457c;
  pbVar4 = DAT_140b4578;
  uVar8 = 1 << (param_1 & 0xff);
  if ((DAT_140b4574 & uVar8) == 0 && -1 < (int)uVar8) {
    uVar6 = FUN_1402ce98();
    return uVar6;
  }
  if (0x12 < param_2) {
    return 0xffffffff;
  }
  iVar13 = 0;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    iVar13 = getBasePriority();
  }
  if (iVar13 != 0x40) {
    bVar1 = *DAT_140b4578;
    *DAT_140b457c = 0x140b436e;
    puVar5[1] = unaff_lr;
    uVar8 = bVar1 + 1;
    *pbVar4 = (char)uVar8 + (char)(uint)((ulonglong)uVar14 * (ulonglong)uVar8 >> 0x23) * -10;
    *(undefined4 *)(DAT_140b4584 + (uint)bVar1 * 4) = unaff_lr;
  }
  puVar10 = DAT_140b45a8;
  puVar11 = DAT_140b4594;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(0x40);
  }
  if (param_1 == 0x13) {
    iVar12 = 0;
  }
  else if (param_1 == 0x11) {
    iVar12 = 1;
  }
  else if (param_1 == 0x14) {
    iVar12 = 2;
  }
  else if (param_1 == 0x18) {
    iVar12 = 3;
  }
  else if (param_1 == 0x1e) {
    iVar12 = 4;
  }
  else {
    if (param_1 != 0x1f) {
      if (iVar13 == 0) {
        *DAT_140b457c = 0xffffffff;
      }
      pbVar4 = DAT_140b4588;
      bVar1 = *DAT_140b4588;
      *(undefined4 *)(DAT_140b458c + (uint)bVar1 * 4) = unaff_lr;
      *pbVar4 = (byte)((bVar1 + 1) % 10);
      bVar2 = (bool)isCurrentModePrivileged();
      if (bVar2) {
        setBasePriority(iVar13);
      }
                    /* WARNING: Subroutine does not return */
      FUN_1402b0f8(DAT_140b4590);
    }
    iVar12 = 5;
  }
  if (param_2 == 0) {
    uVar15 = *DAT_140b4594 & ~(0x1f << iVar12 * 5);
    uVar14 = DAT_140b4594[1] &
             ~(0x1f << (iVar12 * 5 - 0x20U & 0xff) | 0x1fU >> (iVar12 * -5 + 0x20U & 0xff));
    uVar8 = *DAT_140b45a8 & ~(1 << iVar12);
    *DAT_140b4594 = uVar15;
    puVar11[1] = uVar14;
    *puVar10 = uVar8;
  }
  else {
    iVar3 = iVar12 * 5;
    uVar8 = *DAT_140b45a8;
    uVar15 = *DAT_140b4594 & ~(0x1f << iVar3) | param_2 << iVar3;
    uVar14 = DAT_140b4594[1] &
             ~(0x1f << (iVar3 - 0x20U & 0xff) | 0x1fU >> (iVar12 * -5 + 0x20U & 0xff)) |
             param_2 << (iVar3 - 0x20U & 0xff) | param_2 >> (iVar12 * -5 + 0x20U & 0xff);
    *DAT_140b4594 = uVar15;
    puVar11[1] = uVar14;
    uVar8 = uVar8 | 1 << iVar12;
    *puVar10 = uVar8;
  }
  uVar7 = 0;
  uVar9 = 0;
  do {
    if ((int)((uVar8 >> (uVar9 & 0xff)) << 0x1f) < 0) {
      uVar7 = uVar7 + *(int *)(DAT_140b45ac +
                              ((uVar15 >> (uVar9 * 5 & 0xff) | uVar14 << (uVar9 * -5 + 0x20 & 0xff)
                               | uVar14 >> (uVar9 * 5 - 0x20 & 0xff)) & 0x1f) * 4);
    }
    uVar9 = uVar9 + 1;
  } while (uVar9 != 6);
  uVar14 = 0;
  iVar12 = 1;
  puVar11 = DAT_140b4598;
  do {
    uVar8 = 0;
    puVar10 = puVar11;
    if (uVar7 == 0) {
LAB_140b44c4:
      uVar6 = FUN_1402ce98(0x1a,uVar8);
      if (iVar13 == 0) {
        *DAT_140b457c = 0xffffffff;
      }
      bVar1 = *DAT_140b4588;
      uVar14 = bVar1 + 1;
      *DAT_140b4588 =
           (char)uVar14 + (char)(uint)((ulonglong)DAT_140b4580 * (ulonglong)uVar14 >> 0x23) * -10;
      *(undefined4 *)(DAT_140b458c + (uint)bVar1 * 4) = unaff_lr;
      bVar2 = (bool)isCurrentModePrivileged();
      if (bVar2) {
        setBasePriority(iVar13);
      }
      return uVar6;
    }
    while( true ) {
      uVar14 = uVar14 + 1;
      iVar12 = iVar12 + 1;
      puVar11 = puVar10 + 1;
      if (uVar14 == 0) break;
      if ((*puVar11 < uVar7) && (uVar7 <= puVar10[2])) {
        uVar8 = uVar14 & 0xff;
        goto LAB_140b44c4;
      }
      puVar10 = puVar11;
      if (iVar12 == 0x13) {
        FUN_1402a6e8(4,0xaa,DAT_140b45a4,DAT_140b45a0,DAT_140b459c);
        uVar8 = 0x12;
        goto LAB_140b44c4;
      }
    }
  } while( true );
}

