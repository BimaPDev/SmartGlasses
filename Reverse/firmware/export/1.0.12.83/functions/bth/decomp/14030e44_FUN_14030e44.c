/* FUN_14030e44 @ 0x14030e44 */

undefined4 FUN_14030e44(uint *param_1)

{
  bool bVar1;
  char cVar2;
  short sVar3;
  bool bVar4;
  bool bVar5;
  byte bVar6;
  undefined4 uVar7;
  undefined2 *puVar8;
  int *piVar9;
  short *psVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  undefined4 uVar15;
  uint uVar16;
  uint uVar17;
  undefined4 uVar18;
  uint uVar19;
  byte bVar20;
  uint uVar21;
  uint uVar22;
  int iVar23;
  uint local_54;
  ushort local_42;
  int local_40 [3];
  int local_34;
  
  local_34 = *DAT_1403111c;
  local_42 = 0;
  FUN_1402e1fc(0x3003,&local_42,0);
  local_42 = local_42 & 0xfe00 | 0x50;
  FUN_1402e37c(0x3003);
  FUN_14030db4();
  iVar11 = FUN_14038c10(DAT_14031120,6,0);
  if (iVar11 != 0) {
    FUN_1402a6e8(4,0x164,DAT_140312d8,DAT_140312d4,DAT_140312e4,DAT_140312e0,0x164,iVar11);
  }
  FUN_14030b6c(1);
  piVar9 = DAT_14031158;
  puVar8 = DAT_14031130;
  uVar7 = DAT_1403112c;
  uVar18 = DAT_14031124;
  local_54 = 200;
  iVar11 = 0x7fffffff;
  uVar19 = 0x50;
  uVar22 = 0;
  bVar4 = false;
  *DAT_14031128 = '\x01';
  bVar5 = true;
  do {
    bVar20 = 0;
    FUN_1402a6e8(4,0x169,uVar18,uVar7,DAT_14031134);
    bVar6 = 0;
LAB_14030ee4:
    while( true ) {
      if (*piVar9 != 0) {
        FUN_140e5098(*piVar9,4);
        FUN_140e53d8(local_40,4,5000);
        iVar11 = local_40[0];
      }
      if (iVar11 != 8) {
        FUN_1402a6e8(4,0x16f,DAT_140312d8,DAT_140312d4,DAT_140312d0,iVar11);
        uVar18 = 0xffffffff;
        cVar2 = *DAT_140312dc;
        goto joined_r0x14031214;
      }
      iVar12 = (int)(short)puVar8[4];
      iVar14 = (short)puVar8[3] + iVar12;
      uVar15 = *(undefined4 *)(puVar8 + 6);
      FUN_1402a6e8(4,0x172,uVar18,uVar7,DAT_14031138,*puVar8,puVar8[1],puVar8[2],
                   (int)(short)puVar8[3],iVar12,uVar15,iVar14);
      if ((ushort)puVar8[1] < 0x10) break;
      bVar20 = bVar20 + 1;
      if (2 < bVar20) {
LAB_14030f4c:
        uVar18 = 0xffffffff;
        goto LAB_14030f50;
      }
    }
    FUN_1402e1fc(0x3003,&local_42);
    psVar10 = DAT_140312cc;
    uVar13 = (uint)local_42;
    sVar3 = puVar8[3];
    uVar21 = (uint)sVar3;
    uVar19 = uVar13 & 0x1ff;
    if (bVar5) {
      uVar13 = (uint)*DAT_140312cc;
      if (uVar13 == 0) {
        if (DAT_140312cc[1] == 0) {
          *DAT_140312cc = sVar3;
          uVar13 = uVar21;
        }
      }
      else if (DAT_140312cc[1] == 0) {
        DAT_140312cc[1] = sVar3;
      }
      if (psVar10[2] == 0) {
        *(char *)(psVar10 + 2) = (char)uVar19;
      }
      else if (((char)psVar10[2] != '\0') && (*(char *)((int)psVar10 + 5) == '\0')) {
        *(char *)((int)psVar10 + 5) = (char)uVar19;
      }
      if ((((uVar13 != 0) && (iVar12 = (int)psVar10[1], iVar12 != 0)) &&
          (uVar21 = (uint)*(byte *)(psVar10 + 2), uVar21 != 0)) &&
         (uVar17 = (uint)*(byte *)((int)psVar10 + 5), uVar17 != 0)) {
        iVar14 = iVar12 - uVar13;
        if (iVar14 < 0) {
          iVar14 = -iVar14;
        }
        uVar16 = (int)(uVar17 - uVar21) >> 0x1f;
        iVar23 = (uVar17 - uVar21 ^ uVar16) - uVar16;
        local_54 = ((short)iVar14 * 500) / iVar23 & 0xffff;
        bVar5 = false;
        FUN_1402a6e8(4,0x10b,uVar18,uVar7,DAT_140312e8,uVar13,iVar12,uVar21,uVar17,
                     (int)(short)iVar14,iVar23,local_54);
      }
      if (uVar19 == 0x50) {
        local_42 = local_42 & 0xfe00 | 0xdc;
        bVar20 = 0;
        FUN_1402e37c(0x3003);
        uVar19 = 0xdc;
      }
      else {
LAB_14031080:
        bVar20 = 0;
      }
      goto LAB_14030ee4;
    }
    uVar16 = ((uVar21 ^ (int)uVar21 >> 0x1f) - ((int)uVar21 >> 0x1f) & 0xffff) * 500;
    uVar17 = uVar19;
    if (0x5db < uVar16) {
      if (uVar22 != 2) {
        if ((uVar16 < 0x9c4) || (uVar22 = uVar16 / local_54 & 0xff, uVar22 == 0)) {
          uVar22 = 2;
        }
        else if (199 < uVar22) {
          uVar22 = 200;
        }
      }
      uVar16 = uVar22;
      FUN_1402a6e8(4,0x1ad,uVar18,uVar7,DAT_1403114c,uVar21,uVar13,uVar19,uVar22,iVar12,uVar15,
                   iVar14);
      if (uVar21 == 0) goto LAB_140312aa;
      if ((int)uVar21 < 1) goto LAB_1403102c;
      if ((uVar22 + 0x27 & 0xff) < uVar19) {
        uVar13 = uVar19 - uVar22;
        uVar19 = uVar13 & 0xffff;
        uVar13 = uVar13 & 0x1ff;
      }
      else {
        if (uVar19 == 0x28) goto LAB_14030f4c;
        uVar13 = 0x28;
        uVar19 = 0x28;
      }
      uVar13 = local_42 & 0xfe00 | uVar13;
      local_42 = (ushort)uVar13;
      FUN_1402a6e8(4,0x1c4,uVar18,uVar7,DAT_14031154,uVar13,uVar19,uVar17,uVar16,iVar12,uVar15,
                   iVar14);
LAB_14031066:
      FUN_1402e37c(0x3003,local_42);
      bVar20 = bVar6 + 1;
      bVar1 = bVar6 < 10;
      bVar6 = bVar20;
      if (bVar1) goto LAB_14031080;
      goto LAB_14030f4c;
    }
    if ((int)uVar21 < 1) {
      uVar22 = 2;
      uVar16 = 2;
      FUN_1402a6e8(4,0x1ad,uVar18,uVar7,DAT_1403114c,uVar21,uVar13,uVar19,2,iVar12,uVar15,iVar14);
      if (uVar21 == 0) goto LAB_140312aa;
LAB_1403102c:
      if ((int)(0x1d7 - uVar22) < (int)uVar19) {
        if (uVar19 == 0x1d7) goto LAB_14030f4c;
        uVar13 = 0x1d7;
        uVar19 = 0x1d7;
      }
      else {
        uVar19 = uVar19 + uVar22;
        uVar13 = uVar19 & 0x1ff;
      }
      uVar13 = local_42 & 0xfe00 | uVar13;
      local_42 = (ushort)uVar13;
      FUN_1402a6e8(4,0x1d0,uVar18,uVar7,DAT_14031150,uVar13,uVar19,uVar17,uVar16,iVar12,uVar15,
                   iVar14);
      goto LAB_14031066;
    }
LAB_140312aa:
    if (bVar4) {
      uVar18 = 0xffffffff;
      if (bVar6 < 5) {
        uVar18 = 0;
      }
LAB_14030f50:
      *param_1 = uVar19;
      cVar2 = *DAT_14031128;
joined_r0x14031214:
      if (cVar2 != '\0') {
        FUN_14032660();
        FUN_140e5398(0xc80);
        *DAT_140312dc = '\0';
      }
      if (*DAT_1403113c != 0) {
        FUN_140e5718();
      }
      FUN_1402e37c(0x200c,*DAT_14031140);
      FUN_1402e37c(0x2076,*DAT_14031144);
      FUN_1402a6e8(4,0x1db,DAT_14031124,DAT_1403112c,DAT_14031148,*param_1,bVar6,uVar18);
      if (*DAT_1403111c == local_34) {
        return uVar18;
      }
                    /* WARNING: Subroutine does not return */
      FUN_14039adc();
    }
    uVar22 = 2;
    bVar4 = true;
  } while( true );
}

