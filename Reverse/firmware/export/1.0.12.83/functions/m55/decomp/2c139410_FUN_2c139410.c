/* FUN_2c139410 @ 0x2c139410 */

/* WARNING: Possible PIC construction at 0x2c1394a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x2c1394a8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * FUN_2c139410(void)

{
  ushort uVar1;
  bool bVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  ushort *puVar7;
  char *pcVar8;
  int iVar9;
  uint uVar10;
  uint extraout_r1;
  uint extraout_r1_00;
  int extraout_r1_01;
  int extraout_r1_02;
  code *pcVar11;
  int extraout_r2;
  int extraout_r2_00;
  ushort *puVar12;
  undefined4 *extraout_r3;
  int extraout_r3_00;
  int extraout_r3_01;
  short *psVar13;
  undefined4 *puVar14;
  code *pcVar15;
  int iVar16;
  ushort *puVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  undefined4 **ppuVar21;
  longlong lVar22;
  ulonglong uVar23;
  undefined2 uStack_6c0;
  short sStack_6be;
  undefined1 auStack_6bc [512];
  int iStack_4bc;
  code **ppcStack_4b8;
  uint uStack_4b4;
  ushort *puStack_4b0;
  uint uStack_4ac;
  code *pcStack_4a8;
  short *psStack_4a4;
  undefined4 *puStack_4a0;
  int *piStack_49c;
  int iStack_494;
  int iStack_490;
  int iStack_48c;
  ushort uStack_482;
  undefined4 uStack_480;
  undefined4 uStack_47c;
  int iStack_478;
  int iStack_474;
  int iStack_470;
  int iStack_46c;
  ushort auStack_464 [2];
  undefined1 auStack_460 [1020];
  undefined4 uStack_64;
  code *pcStack_5c;
  ushort *puStack_58;
  undefined4 *puStack_54;
  undefined4 *puStack_50;
  uint uStack_4c;
  ushort *puStack_48;
  undefined4 *puStack_44;
  uint uStack_40;
  undefined4 uStack_3c;
  int iStack_38;
  ushort *puStack_34;
  undefined4 uStack_2c;
  
  puVar4 = puRam2c139518;
  puVar12 = puRam2c139514;
  puVar3 = puRam2c139500;
  puVar14 = puRam2c1394fc;
  ppuVar21 = (undefined4 **)&iStack_38;
  uStack_2c = *puRam2c1394e8;
  uVar18 = iRam2c1394ec - (int)puRam2c139514;
  uVar19 = (uint)((ulonglong)uRam2c1394f0 * (ulonglong)uVar18 >> 0x23);
  pcVar15 = (code *)((uint)(iRam2c1394f4 - (int)puRam2c1394f8) >> 5);
  func_0x2c13f494(&iStack_38,*puRam2c1394fc,0xffffffff);
  puVar17 = (ushort *)0x0;
  if (iStack_38 == 0x20) {
    puVar17 = puStack_34;
  }
  uVar10 = (uint)*puVar17;
  uVar1 = *puVar17 >> 8;
  if (uVar1 == 0) {
    if (pcVar15 != (code *)0x0) {
      pcVar11 = (code *)0x0;
      puVar7 = puRam2c1394f8;
      do {
        if (*puVar7 == uVar10) {
          (**(code **)(puVar7 + 4))(*(undefined4 *)(puVar17 + 2),puVar17[1]);
          goto LAB_2c13948e;
        }
        pcVar11 = pcVar11 + 1;
        puVar7 = puVar7 + 0x10;
      } while (pcVar11 != pcVar15);
    }
  }
  else {
    if (uVar1 == 1) {
      if (0xb < uVar18) {
        uVar20 = 0;
        puVar7 = puVar12;
LAB_2c13947e:
        if (*puVar7 != uVar10) goto LAB_2c139472;
        (**(code **)(puVar7 + 2))(*(undefined4 *)(puVar17 + 2),puVar17[1]);
LAB_2c13948e:
        if (*(int *)(puVar17 + 2) != 0) {
          func_0x2c13a358(*puVar4);
        }
        func_0x2c13f4f4(*puVar14,puVar17);
        pcVar8 = (char *)*puVar3;
        puVar14 = extraout_r3;
        psVar13 = (short *)(undefined4 *)0x2c1394a9;
        goto SUB_2c141a7c;
      }
    }
    else {
      FUN_2c13635c(uRam2c139504);
      uVar10 = extraout_r1;
    }
LAB_2c1394d2:
    FUN_2c13635c(uRam2c139508,uRam2c13950c,uVar10);
    uVar10 = extraout_r1_00;
  }
  FUN_2c13635c(uRam2c139508,uRam2c139510,uVar10);
  *(code **)(extraout_r2 + 0x68) = pcVar15;
  *(code **)(pcVar15 + 0x68) = pcVar15;
  *(char *)((int)puVar14 + 0x13) = (char)pcVar15;
  *(undefined1 *)(extraout_r3_00 + 0x13) = 0x65;
  pcRam000000d5 = pcVar15;
  *(undefined1 *)((int)puVar3 + 0x13) = 0x65;
  puVar5 = puRam2c139704;
  uStack_3c = 0x2c1394e7;
  puStack_44 = puVar4;
  puStack_48 = puVar12;
  puStack_50 = puVar3;
  puStack_54 = puVar14;
  uStack_64 = *puRam2c1396f8;
  uVar10 = (uint)(iRam2c139700 - (int)puRam2c1396fc) >> 5;
  pcStack_5c = pcVar15;
  puStack_58 = puVar17;
  uStack_4c = uVar18;
  uStack_40 = uVar19;
  do {
    do {
      do {
        func_0x2c13f334(&iStack_470,0,0xffffffff);
        uVar6 = uRam2c139728;
      } while (iStack_470 != 8);
    } while (-1 < iStack_46c << 0x1f);
LAB_2c139560:
    iVar16 = 0;
    bVar2 = (bool)isCurrentModePrivileged();
    if (bVar2) {
      iVar16 = getBasePriority();
    }
    if (iVar16 != 0x40) {
      *puVar5 = 0x2c13956c;
      puVar5[1] = 0x2c1394e7;
    }
    bVar2 = (bool)isCurrentModePrivileged();
    if (bVar2) {
      setBasePriority(0x40);
    }
    iVar9 = func_0x2c139e04(uVar6);
    if (iVar16 == 0) {
      *puVar5 = 0xffffffff;
    }
    bVar2 = (bool)isCurrentModePrivileged();
    if (bVar2) {
      setBasePriority(iVar16);
    }
    if (0 < iVar9) {
      uStack_480 = 0;
      uStack_47c = 0;
      iStack_478 = 0;
      iStack_474 = 0;
      uStack_482 = 0;
      iVar16 = 0;
      bVar2 = (bool)isCurrentModePrivileged();
      if (bVar2) {
        iVar16 = getBasePriority();
      }
      if (iVar16 != 0x40) {
        *puVar5 = 0x2c1395a4;
        puVar5[1] = 0x2c1394e7;
      }
      bVar2 = (bool)isCurrentModePrivileged();
      if (bVar2) {
        setBasePriority(0x40);
      }
      puStack_4a0 = &uStack_47c;
      piStack_49c = &iStack_474;
      func_0x2c139ed8(uVar6,2,&uStack_480,&iStack_478);
      iVar9 = iStack_478;
      FUN_2c13e7f0(&uStack_482,uStack_480,iStack_478);
      FUN_2c13e7f0((int)&uStack_482 + iVar9,uStack_47c,iStack_474);
      if (iVar16 == 0) {
        *puVar5 = 0xffffffff;
      }
      bVar2 = (bool)isCurrentModePrivileged();
      if (bVar2) {
        setBasePriority(iVar16);
      }
      puVar17 = (ushort *)(uint)uStack_482;
      if (puVar17 < (ushort *)0x401) goto code_r0x2c1395f2;
      FUN_2c13635c(uRam2c139714,puVar17);
      goto LAB_2c1396e0;
    }
  } while( true );
LAB_2c139472:
  uVar20 = uVar20 + 1;
  puVar7 = puVar7 + 6;
  if (uVar19 <= uVar20) goto LAB_2c1394d2;
  goto LAB_2c13947e;
code_r0x2c1395f2:
  if (puVar17 != (ushort *)0x0) {
    uStack_480 = 0;
    uStack_47c = 0;
    iStack_478 = 0;
    iStack_474 = 0;
    iStack_494 = 0;
    bVar2 = (bool)isCurrentModePrivileged();
    if (bVar2) {
      iStack_494 = getBasePriority();
    }
    if (iStack_494 != 0x40) {
      *puVar5 = 0x2c13960e;
      puVar5[1] = 0x2c1394e7;
    }
    bVar2 = (bool)isCurrentModePrivileged();
    if (bVar2) {
      setBasePriority(0x40);
    }
    func_0x2c139e64(uVar6,0,2,0x40);
    puStack_4a0 = &uStack_47c;
    piStack_49c = &iStack_474;
    func_0x2c139ed8(uVar6,puVar17,&uStack_480,&iStack_478);
    iStack_490 = iStack_474;
    if (puVar17 == (ushort *)(iStack_478 + iStack_474)) {
      iStack_48c = iStack_478;
      FUN_2c13e7f0(auStack_464,uStack_480,iStack_478);
      FUN_2c13e7f0((int)auStack_464 + iStack_48c,uStack_47c,iStack_490);
      func_0x2c139e64(uVar6,0,puVar17);
      FUN_2c13e9dc(uStack_480,0,iStack_478);
      FUN_2c13e9dc(uStack_47c,0,iStack_474);
    }
    else {
      FUN_2c13e9dc(auStack_464,0,puVar17);
    }
    if (iStack_494 == 0) {
      *puVar5 = 0xffffffff;
    }
    bVar2 = (bool)isCurrentModePrivileged();
    if (bVar2) {
      setBasePriority(iStack_494);
    }
    if (auStack_464[0] >> 8 == 0) {
      if (uVar10 == 0) {
LAB_2c1396ee:
        FUN_2c13635c(uRam2c139724,uRam2c139720);
        *(undefined4 **)(extraout_r2_00 + 0x68) = puVar5;
        puVar5[0x1a] = puVar5;
        pcRam000000d5 = (code *)puVar5;
        pcVar15 = (code *)(extraout_r3_01 + (int)puVar17);
        pcVar15[0x13] = (code)0x65;
        psStack_4a4 = (short *)0x2c1396f7;
        uVar18 = (uint)(iRam2c139788 - (int)psRam2c13978c) >> 5;
        if (uVar18 == 0) goto LAB_2c13977e;
        psVar13 = psRam2c13978c;
        goto LAB_2c13974a;
      }
      uVar18 = 0;
      puVar12 = puRam2c1396fc;
      while (*puVar12 != auStack_464[0]) {
        uVar18 = uVar18 + 1;
        puVar12 = puVar12 + 0x10;
        if (uVar18 == uVar10) goto LAB_2c1396ee;
      }
      if (*(code **)(puVar12 + 6) == (code *)0x0) {
LAB_2c1396e0:
        FUN_2c135940(0x1291,uRam2c13971c,uRam2c139718);
      }
      else {
        (**(code **)(puVar12 + 6))(auStack_460,(uint)(puVar17 + -2) & 0xffff);
      }
    }
    else {
      puStack_4a0 = puRam2c139708;
      FUN_2c135988(4,0x131,uRam2c13970c,uRam2c139710);
    }
  }
  goto LAB_2c139560;
LAB_2c13977e:
  pcStack_4a8 = pcVar15;
  uVar23 = FUN_2c13635c(uRam2c13979c,uRam2c139798);
  iVar16 = (int)(uVar23 >> 0x20);
  *(code **)((int)uVar23 + 0x70) = pcVar15;
  *(code **)(pcVar15 + 0x68) = pcVar15;
  uStack_4b4 = (uint)bRam00000079;
  uStack_4ac = 0x2c139787;
  iStack_4bc = *_DAT_2c139840;
  puStack_4b0 = puVar17;
  if (uVar23 < 0x20100000000) {
    uStack_6c0 = 1;
    sStack_6be = *_DAT_2c139844;
    *_DAT_2c139844 = sStack_6be + 1;
    FUN_2c13e7f0(auStack_6bc,0x65,iVar16);
    FUN_2c13826c(0,&uStack_6c0,iVar16 + 4);
    uVar18 = (uint)(_DAT_2c139848 - _DAT_2c13984c) >> 5;
    if (uVar18 != 0) {
      iVar16 = 0;
      do {
        if (*(short *)(_DAT_2c13984c + iVar16 * 2) == sRam00000065) {
          pcVar8 = (char *)FUN_2c13f3b4(*_DAT_2c139850,0xffffffff);
          if (*_DAT_2c139840 == iStack_4bc) {
            return pcVar8;
          }
          goto LAB_2c13983c;
        }
        iVar16 = iVar16 + 0x10;
      } while (uVar18 * 0x10 - iVar16 != 0);
    }
    FUN_2c13635c(_DAT_2c139858,_DAT_2c139854,sRam00000065);
    iVar16 = extraout_r1_02;
  }
  FUN_2c13635c(_DAT_2c139860,_DAT_2c13985c,iVar16,0x200);
LAB_2c13983c:
                    /* WARNING: Subroutine does not return */
  FUN_2c13424c();
LAB_2c13974a:
  if (*psVar13 != sRam00000065) {
    psVar13 = psVar13 + 0x10;
    if (psVar13 == psRam2c13978c + uVar18 * 0x10) goto LAB_2c13977e;
    goto LAB_2c13974a;
  }
  pcStack_4a8 = *(code **)(psVar13 + 0xc);
  iVar16 = *(int *)(psVar13 + 8);
  if (pcStack_4a8 == (code *)0x0) {
    uStack_4ac = uRam2c139794;
    puStack_4b0 = (ushort *)0x2c1396f7;
    uStack_4b4 = *DAT_2c135984;
    psStack_4a4 = psVar13;
    if (*DAT_2c135980 == '\0') {
      lVar22 = (ulonglong)uRam2c139794 << 0x20;
    }
    else {
      ppcStack_4b8 = &pcStack_4a8;
      lVar22 = FUN_2c13583c(0x1290,uRam2c139794);
    }
    if ((*DAT_2c135984 ^ uStack_4b4) == 0) {
      return (char *)lVar22;
    }
                    /* WARNING: Subroutine does not return */
    FUN_2c13424c((char *)lVar22,(int)((ulonglong)lVar22 >> 0x20),*DAT_2c135984 ^ uStack_4b4,0);
  }
  pcVar11 = pcStack_4a8;
  pcStack_4a8 = pcVar15;
  pcVar8 = (char *)(*pcVar11)(0x67,extraout_r1_01 - 2U & 0xffff);
  if (iVar16 == 0) {
    return pcVar8;
  }
  ppuVar21 = &puStack_4a0;
  pcVar8 = (char *)*puRam2c139790;
  puVar14 = puRam2c139790;
  pcVar15 = pcStack_4a8;
  psVar13 = psStack_4a4;
SUB_2c141a7c:
  ppuVar21[-1] = (undefined4 *)psVar13;
  ppuVar21[-2] = (undefined4 *)puVar17;
  ppuVar21[-3] = (undefined4 *)pcVar15;
  ppuVar21[-4] = puVar14;
  func_0x2c13eee0();
  uVar18 = 0;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    uVar18 = getCurrentExceptionNumber();
    uVar18 = uVar18 & 0x1ff;
  }
  if (uVar18 == 0) {
    iVar16 = 0;
    bVar2 = (bool)isCurrentModePrivileged();
    if (bVar2) {
      iVar16 = isIRQinterruptsEnabled();
    }
    if (iVar16 == 0) {
      iVar16 = 0;
      bVar2 = (bool)isCurrentModePrivileged();
      if (bVar2) {
        iVar16 = getBasePriority();
      }
      if (iVar16 == 0) {
        software_interrupt(0);
        return pcVar8;
      }
    }
  }
  if ((pcVar8 == (char *)0x0) || (*pcVar8 != -10)) {
    FUN_2c13eec0(pcVar8,0xfffffffc);
    return (char *)0xfffffffc;
  }
  puVar12 = (ushort *)(pcVar8 + 0xc);
  do {
    ExclusiveAccess(puVar12);
    uVar1 = *puVar12;
    if (*(ushort *)(pcVar8 + 0xe) <= uVar1) {
      ClearExclusiveLocal();
      goto LAB_2c141ab8;
    }
    bVar2 = (bool)hasExclusiveAccess(puVar12);
  } while (!bVar2);
  *puVar12 = uVar1 + 1;
LAB_2c141ab8:
  if (uVar1 < *(ushort *)(pcVar8 + 0xe)) {
    FUN_2c1415e0(pcVar8);
    func_0x2c13eee4(pcVar8,*(undefined2 *)(pcVar8 + 0xc));
    return (char *)0x0;
  }
  FUN_2c13eec0(pcVar8,0xffffffef);
  return (char *)0xfffffffd;
}

