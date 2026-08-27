/* FUN_2c4c4878 @ 0x2c4c4878 */

/* WARNING: Removing unreachable block (ram,0x2c4c4adc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4c4878(void)

{
  bool bVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  bool bVar16;
  uint uVar17;
  uint uVar18;
  undefined4 unaff_lr;
  char cVar19;
  code *pcStack_58;
  int iStack_54;
  uint uStack_50;
  int iStack_38;
  uint uStack_34;
  undefined4 uStack_2c;
  
  iVar9 = _LAB_2c4c4b7c;
  puVar4 = _LAB_2c4c4b78;
  uStack_2c = *_LAB_2c4c4b68;
  do {
    FUN_2c644134(&iStack_38,0,0xffffffff);
    uVar6 = uStack_34;
    if (iStack_38 != 8) {
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x51a,_LAB_2c4c4d80,_LAB_2c4c4d88,_LAB_2c4c4d84,_LAB_2c4c4d7c,iStack_38);
    }
    uVar18 = 0;
    do {
      if ((1 << (uVar18 & 0xff) & uVar6) != 0) {
        FUN_2c644044(*puVar4,0xffffffff);
        puVar3 = _LAB_2c4c4b6c;
        uVar15 = (uVar18 & 0xff) >> 1;
        uVar14 = uVar18 & 1;
        iVar10 = uVar14 * 0x9c + uVar15 * 0x138 + iVar9;
        if ((*(int *)(iVar10 + 0x98) == 0) || (-1 < (int)((uint)*(byte *)(iVar10 + 2) << 0x1d))) {
          FUN_2c644080(*puVar4);
        }
        else {
          iVar10 = 0;
          bVar16 = (bool)isCurrentModePrivileged();
          if (bVar16) {
            iVar10 = getBasePriority();
          }
          if (iVar10 != 0x40) {
            *_LAB_2c4c4b6c = 0x2c4c4908;
            puVar3[1] = unaff_lr;
          }
          bVar16 = (bool)isCurrentModePrivileged();
          if (bVar16) {
            setBasePriority(0x40);
          }
          iVar11 = uVar14 * 0x9c + uVar15 * 0x138 + iVar9;
          cVar19 = *(char *)(iVar11 + 1);
          *(undefined1 *)(iVar11 + 1) = 0;
          if (iVar10 == 0) {
            *_LAB_2c4c4b6c = 0xffffffff;
          }
          bVar16 = (bool)isCurrentModePrivileged();
          if (bVar16) {
            setBasePriority(iVar10);
          }
          cVar19 = cVar19 + -1;
          iVar10 = _LAB_2c4c4b70 + uVar15 * 2;
          *(char *)(iVar10 + uVar14) = cVar19;
          if (cVar19 != '\0') {
            uVar7 = FUN_2c674198();
                    /* WARNING: Subroutine does not return */
            TRACE(4,0x472,_LAB_2c4c4d80,_LAB_2c4c4d88,_LAB_2c4c4d9c,uVar7,uVar15,uVar14,
                  *(undefined1 *)(iVar10 + uVar14));
          }
          iVar10 = uVar14 * 0x9c + uVar15 * 0x138;
          iVar11 = iVar9 + iVar10;
          cVar19 = *(char *)(iVar9 + iVar10);
          iVar10 = func_0x2c4c47e8(uVar15,uVar14,0);
          puVar3 = _LAB_2c4c4b6c;
          uVar8 = *(uint *)(iVar11 + 0x14);
          uVar17 = iVar10 - *(int *)(iVar11 + 0x10);
          if (uVar8 < uVar17) {
                    /* WARNING: Subroutine does not return */
            TRACE(4,0x482,_LAB_2c4c4d80,_LAB_2c4c4d88,_LAB_2c4c4d98,uVar15,uVar14,iVar10);
          }
          iVar10 = uVar14 * 0x9c + uVar15 * 0x138 + iVar9;
          if ((*(char *)(iVar10 + 0x2d) == '\0') ||
             (uVar12 = (uint)*(byte *)(iVar10 + 0x24), uVar12 < 2)) {
            if (uVar17 < uVar8 >> 1) {
              bVar16 = false;
              cVar19 = '\x01';
            }
            else if (uVar17 < uVar8) {
              bVar16 = true;
              cVar19 = '\0';
            }
            else {
              bVar16 = cVar19 == '\0';
            }
            iVar10 = 0;
            bVar1 = (bool)isCurrentModePrivileged();
            if (bVar1) {
              iVar10 = getBasePriority();
            }
            if (iVar10 != 0x40) {
              *_LAB_2c4c4b6c = 0x2c4c4b16;
              puVar3[1] = unaff_lr;
            }
            bVar1 = (bool)isCurrentModePrivileged();
            if (bVar1) {
              setBasePriority(0x40);
            }
            if (cVar19 == '\0') {
              iVar13 = uVar14 * 0x9c + uVar15 * 0x138 + iVar9;
              iVar11 = *(int *)(iVar13 + 0x10);
              uStack_50 = *(uint *)(iVar13 + 0x14);
              iStack_54 = iVar11;
            }
            else {
              iVar11 = uVar14 * 0x9c + uVar15 * 0x138 + iVar9;
              iStack_54 = *(int *)(iVar11 + 0x10);
              uStack_50 = *(uint *)(iVar11 + 0x14);
              iVar11 = iStack_54 + (uStack_50 >> 1);
            }
            pcStack_58 = *(code **)(uVar14 * 0x9c + uVar15 * 0x138 + iVar9 + 0x98);
            if (iVar10 == 0) {
              *_LAB_2c4c4b6c = 0xffffffff;
            }
            bVar1 = (bool)isCurrentModePrivileged();
            if (bVar1) {
              setBasePriority(iVar10);
            }
          }
          else {
            uVar12 = uVar8 / uVar12;
            if (uVar17 <= uVar8) {
              cVar19 = uVar17 - uVar12 * (uVar17 / uVar12) < uVar12 >> 1;
            }
            iVar10 = 0;
            bVar16 = (bool)isCurrentModePrivileged();
            if (bVar16) {
              iVar10 = getBasePriority();
            }
            if (iVar10 != 0x40) {
              *_LAB_2c4c4b6c = 0x2c4c49ca;
              puVar3[1] = unaff_lr;
            }
            bVar16 = (bool)isCurrentModePrivileged();
            if (bVar16) {
              setBasePriority(0x40);
            }
            if (cVar19 == '\0') {
              iVar11 = *(int *)(uVar14 * 0x9c + uVar15 * 0x138 + iVar9 + 0x10);
              iStack_54 = iVar11;
            }
            else {
              iStack_54 = *(int *)(uVar14 * 0x9c + uVar15 * 0x138 + iVar9 + 0x10);
              iVar11 = iStack_54 + (uVar12 >> 1);
            }
            iVar13 = uVar14 * 0x9c + uVar15 * 0x138 + iVar9;
            uStack_50 = *(uint *)(iVar13 + 0x14);
            pcStack_58 = *(code **)(iVar13 + 0x98);
            if (iVar10 == 0) {
              *_LAB_2c4c4b6c = 0xffffffff;
            }
            bVar16 = (bool)isCurrentModePrivileged();
            if (bVar16) {
              setBasePriority(iVar10);
            }
            bVar16 = cVar19 == '\0';
          }
          uStack_50 = uStack_50 >> 1;
          iVar13 = uVar14 * 0x9c + uVar15 * 0x138;
          iVar10 = iVar9 + iVar13;
          if (*(char *)(iVar10 + 0xd) != '\0') {
            iVar5 = FUN_2c674818();
            if (*(char *)(iVar9 + iVar13) == cVar19) {
              cVar19 = *(char *)(iVar10 + 0xc);
              if ((uint)(*(int *)(iVar10 + 4) << 1) <= (uint)(iVar5 - *(int *)(iVar10 + 8)))
              goto joined_r0x2c4c4d1a;
              if (cVar19 != '\0') goto LAB_2c4c4d1e;
            }
            else {
              cVar19 = *(char *)(iVar10 + 0xc);
joined_r0x2c4c4d1a:
              if (cVar19 == '\0') {
                uVar7 = FUN_2c674198();
                iVar9 = uVar14 * 0x9c + uVar15 * 0x138 + iVar9;
                iVar10 = *(int *)(iVar9 + 8);
                uVar6 = FUN_2c6740d8();
                lVar2 = (ulonglong)_LAB_2c4c4d8c * (ulonglong)(uVar6 >> 5);
                iVar9 = *(int *)(iVar9 + 4);
                uVar6 = (uint)((ulonglong)lVar2 >> 0x27);
                uVar18 = FUN_2c6740d8(uVar6,(int)lVar2);
                    /* WARNING: Subroutine does not return */
                TRACE(4,0x4c0,_LAB_2c4c4d80,_LAB_2c4c4d88,_LAB_2c4c4d90,uVar7,uVar15,uVar14,
                      (uint)((iVar5 - iVar10) * 10) / uVar6,
                      (int)((ulonglong)(uint)(iVar9 * 10) /
                           ((ulonglong)_LAB_2c4c4d8c * (ulonglong)(uVar18 >> 5) >> 0x27)));
              }
LAB_2c4c4d1e:
              *(undefined1 *)(uVar14 * 0x9c + uVar15 * 0x138 + iVar9 + 0xc) = 0;
            }
            *(int *)(uVar14 * 0x9c + uVar15 * 0x138 + iVar9 + 8) = iVar5;
          }
          *(bool *)(iVar9 + uVar14 * 0x9c + uVar15 * 0x138) = bVar16;
          if (((uVar14 == 0) &&
              (uVar8 = *(byte *)(uVar15 * 0x138 + iVar9 + 3) - 1 & 0xff, uVar8 < 0xb)) &&
             ((int)((0x55fU >> uVar8) << 0x1f) < 0)) {
            if (pcStack_58 == (code *)0x0) {
              if (iStack_54 != 0) goto LAB_2c4c4a8a;
            }
            else if (iStack_54 != 0) {
              (*pcStack_58)(iVar11,uStack_50);
LAB_2c4c4a8a:
              if ((*(byte *)(uVar15 * 0x138 + iVar9 + 0x26) - 1 < 2) &&
                 (iVar10 = func_0x2c4c561c(uVar15,0), iVar10 != 0)) {
                func_0x2c4c4ed4(uVar15,0,iVar11,uStack_50);
              }
              if ((code *)*_LAB_2c4c4b74 != (code *)0x0) {
                (*(code *)*_LAB_2c4c4b74)(iVar11,uStack_50,uVar15 * 0x138 + iVar9 + 0x18);
              }
            }
          }
          else if ((pcStack_58 != (code *)0x0) && (iStack_54 != 0)) {
            (*pcStack_58)(iVar11,uStack_50);
          }
          iVar10 = uVar14 * 0x9c + uVar15 * 0x138 + iVar9;
          if (*(char *)(iVar10 + 1) != '\0') {
            uVar7 = FUN_2c674198();
                    /* WARNING: Subroutine does not return */
            TRACE(4,0x4ee,_LAB_2c4c4d80,_LAB_2c4c4d88,_LAB_2c4c4d94,uVar7,uVar15,uVar14,
                  *(undefined1 *)(iVar10 + 1));
          }
          FUN_2c644080(*puVar4);
        }
      }
      uVar18 = uVar18 + 1;
    } while (uVar18 != 10);
  } while( true );
}

