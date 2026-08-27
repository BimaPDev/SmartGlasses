/* FUN_2c5bdc84 @ 0x2c5bdc84 */

/* WARNING: Possible PIC construction at 0x2c5be0b2: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x2c5be0b6) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5bdc84(undefined4 param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  int iVar2;
  uint *puVar3;
  undefined4 uVar4;
  undefined4 *extraout_r1;
  undefined4 *puVar5;
  uint uVar6;
  undefined2 *extraout_r3;
  undefined2 *extraout_r3_00;
  char cVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  uint uVar11;
  undefined1 *puVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  char *pcVar16;
  char *pcVar17;
  uint *puVar18;
  char *pcVar19;
  undefined1 *unaff_r10;
  undefined1 *unaff_r11;
  undefined4 *puVar20;
  undefined4 uVar21;
  undefined4 auStack_88 [3];
  undefined4 uStack_7c;
  undefined2 uStack_78;
  undefined4 uStack_74;
  undefined2 uStack_70;
  uint *puStack_6c;
  uint uStack_68;
  uint auStack_64 [4];
  undefined1 *apuStack_54 [2];
  undefined1 auStack_4c [16];
  undefined1 *apuStack_3c [2];
  undefined1 auStack_34 [16];
  int iStack_24;
  
  iStack_24 = *piRam2c5bddc4;
  puVar18 = auStack_64;
  auStack_64[0] = auStack_64[0] & 0xffffff00;
  pcVar16 = (char *)*param_2;
  uStack_68 = 0;
  pcVar19 = pcVar16 + param_2[1];
  puStack_6c = puVar18;
  if (pcVar19 == pcVar16) {
    uVar14 = 1;
    puVar3 = puVar18;
  }
  else {
    unaff_r10 = (undefined1 *)0x0;
    do {
      uVar14 = uStack_68;
      pcVar17 = pcVar16 + 1;
      cVar7 = *pcVar16;
      uVar11 = uStack_68 + 1;
      if (cVar7 == '-') {
        cVar7 = ' ';
      }
      uVar6 = auStack_64[0];
      if (puStack_6c == puVar18) {
        uVar6 = 0xf;
      }
      if (uVar6 < uVar11) {
        auStack_88[0] = 1;
        FUN_2c52263c(&puStack_6c,uStack_68,0);
      }
      puVar3 = puStack_6c;
      *(char *)((int)puStack_6c + uVar14) = cVar7;
      *(undefined1 *)((int)puStack_6c + uVar11) = 0;
      pcVar16 = pcVar17;
      uStack_68 = uVar11;
    } while (pcVar19 != pcVar17);
    if (uVar11 == 0) {
      uVar14 = 1;
    }
    else {
      iVar2 = FUN_2c643680(puStack_6c,0x2f,uVar11);
      if (iVar2 == 0) {
        uVar14 = 1;
      }
      else {
        uVar14 = (iVar2 - (int)puVar3) + 2;
      }
    }
  }
  puVar9 = auStack_4c;
  puVar12 = &DAT_00000104;
  apuStack_54[0] = puVar9;
  FUN_2c5bcd64(apuStack_54,puVar3);
  uStack_78 = 0x104;
  uStack_7c = 0xd2;
  func_0x2c5e9094(apuStack_54[0],&uStack_7c);
  if (uVar14 <= uStack_68) {
    apuStack_3c[0] = auStack_34;
    FUN_2c5bcd64(apuStack_3c,(undefined1 *)((int)puStack_6c + uVar14),
                 (undefined1 *)(uStack_68 + (int)puStack_6c));
    uStack_70 = 0x104;
    uStack_74 = 0xd3;
    func_0x2c5e9094(apuStack_3c[0],&uStack_74);
    if (apuStack_3c[0] != auStack_34) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
    if (apuStack_54[0] != puVar9) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
    if (puStack_6c != puVar18) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
    if (*piRam2c5bddc4 == iStack_24) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  uVar21 = 0x2c5bddc3;
  FUN_2c65868c(uRam2c5bddcc,uRam2c5bddc8,uVar14,uStack_68);
  *extraout_r3 = 0;
  puVar8 = (undefined1 *)((int)puVar3 - 0x2a);
  puVar5 = extraout_r1;
  uVar4 = uRam2c5bdde0;
  puVar20 = auStack_88;
  do {
    *(undefined4 *)((int)puVar20 + -4) = uVar21;
    *(undefined1 **)((int)puVar20 + -8) = unaff_r11;
    *(undefined1 **)((int)puVar20 + -0xc) = unaff_r10;
    *(char **)((int)puVar20 + -0x10) = pcVar19;
    *(uint **)((int)puVar20 + -0x14) = puVar18;
    *(undefined1 **)((int)puVar20 + -0x18) = puVar9;
    *(undefined4 *)((int)puVar20 + -0x1c) = uVar4;
    *(undefined1 **)((int)puVar20 + -0x20) = puVar12;
    *(undefined1 **)((int)puVar20 + -0x24) = puVar8;
    iVar15 = 0;
    *(int *)((int)puVar20 + -0x2c) = *piRam2c5bdff0;
    unaff_r10 = (undefined1 *)((int)puVar20 + -0xcc);
    *(undefined1 *)((int)puVar20 + -0xcc) = 0;
    puVar9 = (undefined1 *)*puVar5;
    iVar2 = puVar5[1];
    *(undefined1 **)((int)puVar20 + -0xd4) = unaff_r10;
    *(undefined4 *)((int)puVar20 + -0xd0) = 0;
    puVar8 = puVar9 + iVar2;
    puVar12 = unaff_r10;
    if (puVar9 == puVar8) {
      iVar2 = -1;
    }
    else {
      unaff_r11 = (undefined1 *)0x0;
      do {
        while( true ) {
          puVar10 = puVar9 + 1;
          uVar1 = *puVar9;
          iVar2 = func_0x2c6690e4(uVar1);
          puVar9 = puVar10;
          if (iVar2 != 0) break;
          uVar14 = iVar15 + 1;
          if (puVar12 == unaff_r10) {
            uVar11 = 0xf;
          }
          else {
            uVar11 = *(uint *)((int)puVar20 + -0xcc);
          }
          if (uVar11 < uVar14) {
            *(undefined4 *)((int)puVar20 + -0xf8) = 1;
            FUN_2c52263c((undefined1 *)((int)puVar20 + -0xd4),iVar15,0);
            puVar12 = *(undefined1 **)((int)puVar20 + -0xd4);
          }
          puVar12[iVar15] = uVar1;
          *(uint *)((int)puVar20 + -0xd0) = uVar14;
          *(undefined1 *)(*(int *)((int)puVar20 + -0xd4) + uVar14) = 0;
          puVar12 = *(undefined1 **)((int)puVar20 + -0xd4);
          iVar15 = *(int *)((int)puVar20 + -0xd0);
          if (puVar8 == puVar10) goto LAB_2c5bde3a;
        }
      } while (puVar8 != puVar10);
LAB_2c5bde3a:
      if (iVar15 == 0) {
        iVar2 = -1;
      }
      else {
        iVar2 = FUN_2c643680(puVar12,0x2f,iVar15);
        if (iVar2 == 0) {
          iVar2 = -1;
        }
        else {
          iVar2 = iVar2 - (int)puVar12;
        }
      }
    }
    puVar9 = (undefined1 *)((int)puVar20 + -0x9c);
    *(undefined1 **)((int)puVar20 + -0xbc) = (undefined1 *)((int)puVar20 + -0xb4);
    FUN_2c5bcd64((undefined1 *)((int)puVar20 + -0xbc),puVar12);
    *(undefined1 **)((int)puVar20 + -0xa4) = puVar9;
    FUN_2c5bcd64((undefined1 *)((int)puVar20 + -0xa4),iRam2c5bdff4 + -6);
    iVar13 = *(int *)((int)puVar20 + -0xa0);
    *(int *)((int)puVar20 + -0xf8) = iVar13;
    pcVar19 = *(char **)((int)puVar20 + -0xbc);
    puVar18 = *(uint **)((int)puVar20 + -0xb8);
    iVar15 = FUN_2c5bccf8(pcVar19,puVar18,*(undefined4 *)((int)puVar20 + -0xa4),0);
    puVar3 = (uint *)(iVar15 + iVar13);
    if (puVar3 <= puVar18) {
      pcVar17 = pcVar19 + (int)puVar18;
      puVar18 = (uint *)((int)puVar20 + -0x84);
      pcVar16 = pcVar19 + (int)puVar3;
      pcVar19 = &Reset;
      *(uint **)((int)puVar20 + -0x8c) = puVar18;
      FUN_2c5bcd64((undefined1 *)((int)puVar20 + -0x8c),pcVar16,pcVar17);
      *(undefined4 *)((int)puVar20 + -0xe4) = 0xd2;
      uVar11 = iVar2 + 1;
      *(undefined2 *)((int)puVar20 + -0xe0) = 4;
      func_0x2c5e9094(*(undefined4 *)((int)puVar20 + -0xbc),(undefined1 *)((int)puVar20 + -0xe4));
      func_0x2c5e9094(*(undefined4 *)((int)puVar20 + -0x8c),(undefined1 *)((int)puVar20 + -0xe4));
      uVar14 = *(uint *)((int)puVar20 + -0xd0);
      if (uVar14 < uVar11) {
        FUN_2c65868c(uRam2c5be000,uRam2c5bdffc,uVar11,uVar14);
LAB_2c5bdfd2:
                    /* WARNING: Subroutine does not return */
        stack_chk_fail();
      }
      unaff_r11 = (undefined1 *)((int)puVar20 + -0x54);
      *(undefined1 **)((int)puVar20 + -0x74) = (undefined1 *)((int)puVar20 + -0x6c);
      FUN_2c5bcd64((undefined1 *)((int)puVar20 + -0x74),*(int *)((int)puVar20 + -0xd4) + uVar11,
                   uVar14 + *(int *)((int)puVar20 + -0xd4));
      *(undefined1 **)((int)puVar20 + -0x5c) = unaff_r11;
      FUN_2c5bcd64((undefined1 *)((int)puVar20 + -0x5c),iRam2c5bdff8 + -6);
      iVar2 = *(int *)((int)puVar20 + -0x58);
      *(int *)((int)puVar20 + -0xf8) = iVar2;
      iVar13 = *(int *)((int)puVar20 + -0x74);
      *(undefined4 *)((int)puVar20 + -0xec) = *(undefined4 *)((int)puVar20 + -0x70);
      iVar15 = FUN_2c5bccf8(iVar13,*(undefined4 *)((int)puVar20 + -0x70),
                            *(undefined4 *)((int)puVar20 + -0x5c),0);
      uVar11 = *(uint *)((int)puVar20 + -0xec);
      uVar14 = iVar15 + iVar2;
      if (uVar14 <= uVar11) {
        *(undefined1 **)((int)puVar20 + -0x44) = (undefined1 *)((int)puVar20 + -0x3c);
        FUN_2c5bcd64((undefined1 *)((int)puVar20 + -0x44),iVar13 + uVar14,iVar13 + uVar11);
        *(undefined4 *)((int)puVar20 + -0xdc) = 0xd3;
        *(undefined2 *)((int)puVar20 + -0xd8) = 4;
        func_0x2c5e9094(*(undefined4 *)((int)puVar20 + -0x74),(undefined1 *)((int)puVar20 + -0xdc));
        func_0x2c5e9094(*(undefined4 *)((int)puVar20 + -0x44),(undefined1 *)((int)puVar20 + -0xdc));
        if (*(undefined1 **)((int)puVar20 + -0x44) != (undefined1 *)((int)puVar20 + -0x3c)) {
                    /* WARNING: Subroutine does not return */
          FUN_2c472680(0);
        }
        if (*(undefined1 **)((int)puVar20 + -0x5c) != unaff_r11) {
                    /* WARNING: Subroutine does not return */
          FUN_2c472680(0);
        }
        if (*(undefined1 **)((int)puVar20 + -0x74) != (undefined1 *)((int)puVar20 + -0x6c)) {
                    /* WARNING: Subroutine does not return */
          FUN_2c472680(0);
        }
        if (*(uint **)((int)puVar20 + -0x8c) != puVar18) {
                    /* WARNING: Subroutine does not return */
          FUN_2c472680(0);
        }
        if (*(undefined1 **)((int)puVar20 + -0xa4) != puVar9) {
                    /* WARNING: Subroutine does not return */
          FUN_2c472680(0);
        }
        if (*(undefined1 **)((int)puVar20 + -0xbc) != (undefined1 *)((int)puVar20 + -0xb4)) {
                    /* WARNING: Subroutine does not return */
          FUN_2c472680(0);
        }
        if (*(undefined1 **)((int)puVar20 + -0xd4) != unaff_r10) {
                    /* WARNING: Subroutine does not return */
          FUN_2c472680(0);
        }
        if (*piRam2c5bdff0 == *(int *)((int)puVar20 + -0x2c)) {
          return;
        }
        goto LAB_2c5bdfd2;
      }
      puVar3 = (uint *)FUN_2c65868c(uRam2c5be000,uRam2c5bdffc,uVar14,uVar11);
    }
    FUN_2c65868c(uRam2c5be000,uRam2c5bdffc,puVar3,puVar18);
    *(int *)((int)puVar20 + 0x2a0) = iVar13;
    *(int *)((int)puVar20 + 0x280) = iVar13;
    *extraout_r3_00 = 0;
    uVar4 = uRam2c5be014;
    *(undefined4 *)((int)puVar20 + -0xfc) = 0x2c5bdfef;
    *(int *)((int)puVar20 + -0x100) = iVar13;
    *(int *)((int)puVar20 + -0x104) = iVar2 + -0x50;
    *(int *)((int)puVar20 + -0x10c) = *_LAB_2c5be0c0;
    FUN_2c674268((undefined1 *)((int)puVar20 + -0x168),0,0x44,0);
    uVar21 = registry_lookup(0x6014);
    puVar12 = (undefined1 *)((int)puVar20 + -0x11c);
    *(undefined4 *)((int)puVar20 + -0x160) = uVar21;
    *(undefined4 *)((int)puVar20 + -0x150) = _LAB_2c5be0c4;
    *(undefined4 *)((int)puVar20 + -0x154) = _LAB_2c5be0c8;
    uVar21 = registry_lookup(0x6015);
    *(undefined4 *)((int)puVar20 + -0x15c) = uVar21;
    uVar21 = registry_lookup(0x6016);
    *(undefined4 *)((int)puVar20 + -0x158) = uVar21;
    uVar21 = FUN_2c5e2e8c(_LAB_2c5be0cc);
    *(undefined4 *)((int)puVar20 + -0x164) = uVar21;
    *(undefined1 *)((int)puVar20 + -0x140) = 0;
    *(undefined4 *)((int)puVar20 + -0x13c) = _LAB_2c5be0d0;
    puVar8 = (undefined1 *)registry_lookup(0x6016);
    *(undefined1 **)((int)puVar20 + -0x124) = puVar12;
    if (puVar8 == (undefined1 *)0x0) {
      puVar10 = (undefined1 *)0x1;
    }
    else {
      iVar2 = FUN_2c66c4ec();
      puVar10 = puVar8 + iVar2;
    }
    FUN_2c5bcd64((undefined1 *)((int)puVar20 + -0x124),puVar8,puVar10);
    iVar2 = FUN_2c5e33e4();
    if (iVar2 != 1) {
      uVar4 = func_0x2c5bd4d0();
      FUN_2c5bdc84(uVar4,(undefined1 *)((int)puVar20 + -0x124));
      FUN_2c5e8f4c((undefined1 *)((int)puVar20 + -0x168));
      if (*(undefined1 **)((int)puVar20 + -0x124) != puVar12) {
                    /* WARNING: Subroutine does not return */
        FUN_2c472680(0);
      }
      if (*_LAB_2c5be0c0 == *(int *)((int)puVar20 + -0x10c)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      stack_chk_fail();
    }
    func_0x2c5bd4d0();
    puVar5 = (undefined4 *)((int)puVar20 + -0x124);
    uVar21 = 0x2c5be0b7;
    puVar20 = (undefined4 *)((int)puVar20 + -0x168);
  } while( true );
}

