/* FUN_2c4cb050 @ 0x2c4cb050 */

int FUN_2c4cb050(int param_1,undefined2 *param_2,int param_3,undefined4 param_4,uint param_5)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  undefined4 *puVar17;
  uint uVar18;
  undefined4 *puVar19;
  undefined8 uVar20;
  uint local_94;
  uint local_8c;
  uint local_88;
  uint local_78;
  uint local_60;
  int local_5c;
  int local_58;
  uint auStack_54 [3];
  undefined1 auStack_48 [12];
  uint local_3c;
  
  local_3c = *DAT_2c4cb370;
  iVar10 = 0;
  local_60 = 0;
  if (param_1 == 0) {
    iVar7 = 0x2001;
    param_3 = param_1;
  }
  else if (param_3 < 0x801) {
    iVar12 = param_1 + 0x4b8;
    if ((param_5 & 4) != 0) {
      *(undefined4 *)(param_1 + 0x2f4) = 0;
    }
    puVar4 = (undefined4 *)FUN_2c4d28f4(*(undefined4 *)(param_1 + 0x14),0);
    if (puVar4[9] == 0) {
      FUN_2c4d766c(puVar4 + 2,puVar4[1]);
    }
    else if (puVar4[1] != 0) {
      FUN_2c4d7598(puVar4 + 2,*puVar4);
    }
    puVar19 = puVar4 + 2;
    *puVar4 = 0;
    puVar4[1] = 0;
    iVar5 = FUN_2c4d76a8(puVar19);
    uVar18 = param_5 & 3;
    if (((uVar18 == 0) && (1 < *(byte *)(param_1 + 0x14b8) - 2)) &&
       (*(char *)(param_1 + 0x14ba) != '\x05')) {
      local_88 = 0;
      local_78 = local_88;
      if (*(int *)(param_1 + 0xc) < 1) {
        local_8c = param_5;
      }
      else {
        iVar10 = 0;
LAB_2c4cb6b8:
        do {
          uVar11 = FUN_2c4d36cc(*(undefined4 *)(param_1 + 0x14),iVar10);
          if (uVar11 != 0) {
            if (uVar11 == 0x203) {
              bVar2 = false;
              uVar11 = 0xe00b;
              iVar7 = 0x200b;
              goto LAB_2c4cb28c;
            }
            if (uVar11 < 0x204) {
              if (uVar11 == 0x101) {
                bVar2 = false;
                uVar11 = 0xd002;
                iVar7 = 0x1002;
                goto LAB_2c4cb28c;
              }
              if (uVar11 == 0x102) {
                FUN_2c4d3558(&local_58,*(undefined4 *)(param_1 + 0x14));
                *(int *)(param_1 + 0x2f4) = local_58;
                local_78 = 1;
                goto LAB_2c4cb6f4;
              }
            }
            else {
              if (uVar11 == 0x402) {
                bVar2 = false;
                uVar11 = 0xe003;
                iVar7 = 0x2003;
                goto LAB_2c4cb28c;
              }
              if (uVar11 == 0x403) {
                iVar10 = iVar10 + 1;
                uVar11 = 1;
                local_88 = 1;
                if (*(int *)(param_1 + 0xc) <= iVar10) break;
                goto LAB_2c4cb6b8;
              }
            }
            bVar2 = false;
            uVar11 = 0xc005;
            iVar7 = 5;
            goto LAB_2c4cb28c;
          }
LAB_2c4cb6f4:
          iVar10 = iVar10 + 1;
          uVar11 = local_88;
        } while (iVar10 < *(int *)(param_1 + 0xc));
        local_8c = uVar11 | param_5;
        local_88 = uVar11;
      }
    }
    else {
      if (0 < *(int *)(param_1 + 0x2f4)) {
        *(int *)(param_1 + 0x2f4) = *(int *)(param_1 + 0x2f4) + -1;
      }
      local_88 = 0;
      local_8c = param_5;
      local_78 = 0;
    }
    uVar20 = DAT_2c4cb368;
    *(undefined1 *)(param_1 + 0x2c) = 1;
    uVar16 = 0;
    local_94 = 1;
    *(undefined4 *)(param_1 + 0x14c0) = 0;
    *(undefined4 *)(param_1 + 0x14c4) = 0;
    *(undefined4 *)(param_1 + 0x14c8) = 0;
    *(undefined4 *)(param_1 + 0x14cc) = 0;
    bVar3 = false;
LAB_2c4cb11e:
    do {
      if ((((uVar18 == 0) && (*(char *)(param_1 + 0x14b8) != '\x01')) &&
          ((uVar16 == 0 &&
           ((*(char *)(param_1 + 0x14bc) != '\0' || (*(char *)(param_1 + 0x14ba) == '\x05')))))) &&
         (local_78 == 0 && local_88 == 0)) {
        iVar10 = FUN_2c4cecbc(param_1,&local_60,auStack_54,auStack_48);
        if (iVar10 == 0) {
LAB_2c4cb5ae:
          local_94 = local_94 + local_60;
          goto LAB_2c4cb146;
        }
        if (iVar10 != 0x1002) {
          if (iVar10 == 0x4002) {
            *(undefined1 *)(param_1 + 0x2c) = 0;
          }
          goto LAB_2c4cb5ae;
        }
        uVar11 = 0xd002;
        uVar16 = 0;
        iVar7 = 0x1002;
LAB_2c4cb72e:
        bVar2 = false;
        if (bVar3) {
          bVar2 = false;
LAB_2c4cb738:
          if (uVar16 < local_60) {
            FUN_2c4d3564(*(undefined4 *)(param_1 + 0x14));
          }
        }
        goto LAB_2c4cb28c;
      }
LAB_2c4cb146:
      puVar6 = (undefined4 *)FUN_2c4d28f4(*(undefined4 *)(param_1 + 0x14),0);
      if (puVar6[9] == 0) {
        FUN_2c4d766c(puVar6 + 2,puVar6[1]);
      }
      else if (puVar6[1] != 0) {
        FUN_2c4d7598(puVar6 + 2,*puVar6);
      }
      puVar17 = puVar6 + 2;
      *puVar6 = 0;
      puVar6[1] = 0;
      iVar10 = FUN_2c4d76a8(puVar17);
      *(uint *)(param_1 + 0x14d0) = uVar16;
      if (uVar16 < local_60) {
        uVar11 = puVar6[1];
        uVar14 = puVar6[9];
        uVar13 = auStack_54[uVar16];
        if (uVar13 < uVar11) {
          if (uVar14 == 0) {
            puVar6[1] = uVar11 - uVar13;
            goto LAB_2c4cb17e;
          }
LAB_2c4cb5b8:
          if (uVar11 != 0) {
            FUN_2c4d7598(puVar17,*puVar6,uVar11);
            uVar14 = puVar6[9];
          }
        }
        else {
          if (uVar14 != 0) goto LAB_2c4cb5b8;
          FUN_2c4d766c(puVar17);
          uVar14 = puVar6[9];
        }
        *puVar6 = 0;
        puVar6[1] = 0;
        FUN_2c4d768c(puVar17,uVar13,uVar14 & 0xff);
      }
LAB_2c4cb17e:
      if (((param_5 & 4) == 0) && (local_78 != 0)) {
        uVar11 = 0xd001;
        iVar7 = 0x1001;
        goto LAB_2c4cb72e;
      }
      if (uVar18 == 2) {
        if (*(char *)(param_1 + 0x14b8) == '\0') {
          FUN_2c4d3af8(*(undefined4 *)(param_1 + 0x14),5,1);
          *(undefined4 *)(param_1 + 0x2f4) = 0;
          *(undefined8 *)(param_1 + 0x300) = uVar20;
          *(undefined8 *)(param_1 + 0x2f8) = uVar20;
          *(undefined4 *)(param_1 + 0x2e8) = 0;
          *(undefined4 *)(param_1 + 0x4b0) = 0x10000;
          if (*(char *)(param_1 + 0x14b8) != '\0') goto LAB_2c4cb408;
          iVar7 = FUN_2c4cf910(param_1,local_8c,iVar12,0x800,*(undefined4 *)(param_1 + 0x2d8));
          uVar14 = iVar7 - 0x4000;
          FUN_2c4cb8c8(param_1,0,0);
          uVar11 = uVar14 & 0xffff;
          goto LAB_2c4cb1e8;
        }
        *(undefined4 *)(param_1 + 0x2e8) = 0;
        *(undefined4 *)(param_1 + 0x4b0) = 0x10000;
LAB_2c4cb408:
        if (-1 < (int)(param_5 << 0x1f)) goto LAB_2c4cb1b2;
        iVar7 = FUN_2c4cf910(param_1,local_8c,iVar12,0x800,*(undefined4 *)(param_1 + 0x2d8));
        FUN_2c4cb8c8(param_1,0);
LAB_2c4cb1e2:
        uVar14 = iVar7 - 0x4000;
        uVar11 = uVar14 & 0xffff;
LAB_2c4cb1e8:
        bVar2 = iVar7 == 0 || uVar11 < 0x1000;
        if (iVar7 == 0 || uVar11 < 0x1000) {
          bVar2 = iVar7 != 0 && 0xfff < uVar11;
          bVar3 = true;
LAB_2c4cb212:
          if (!bVar2) goto LAB_2c4cb218;
LAB_2c4cb62e:
          bVar2 = uVar11 < 0x1000 || iVar7 == 0;
        }
        if (bVar3) goto LAB_2c4cb738;
        iVar10 = puVar4[9];
        goto joined_r0x2c4cb3b4;
      }
      *(undefined4 *)(param_1 + 0x2e8) = 0;
      *(undefined4 *)(param_1 + 0x4b0) = 0x10000;
      uVar11 = local_8c;
      if ((*(char *)(param_1 + 0x14b8) != '\0') && (-1 < (int)(param_5 << 0x1f))) {
LAB_2c4cb1b2:
        uVar11 = local_8c | 2;
      }
      iVar7 = FUN_2c4cf910(param_1,uVar11,iVar12,0x800,*(undefined4 *)(param_1 + 0x2d8));
      FUN_2c4cb8c8(param_1,0);
      if (uVar18 != 0 || local_88 != 0) goto LAB_2c4cb1e2;
      uVar14 = iVar7 - 0x4000;
      uVar11 = uVar14 & 0xffff;
      if (*(char *)(param_1 + 0x14b8) != '\0') goto LAB_2c4cb1e8;
      bVar2 = 0xfff < uVar11 && iVar7 != 0;
      if (bVar2) {
        iVar8 = FUN_2c4d3564(*(undefined4 *)(param_1 + 0x14));
        if (iVar8 != 0) {
LAB_2c4cb512:
          *(undefined1 *)(param_1 + 0x2c) = 0;
          goto LAB_2c4cb212;
        }
        goto LAB_2c4cb62e;
      }
      if (uVar16 < local_60) goto LAB_2c4cb1e8;
      iVar8 = FUN_2c4d3564(*(undefined4 *)(param_1 + 0x14));
      if (iVar8 != 0) goto LAB_2c4cb512;
LAB_2c4cb218:
      *(undefined4 *)(param_1 + 0x2b0) = *(undefined4 *)(param_1 + 0x2c4);
      *(undefined4 *)(param_1 + 0x2b4) = *(undefined4 *)(param_1 + 0x2d8);
      *(undefined4 *)(param_1 + 0x2b8) = *(undefined4 *)(param_1 + 0x2dc);
      *(undefined4 *)(param_1 + 0x2ec) = *(undefined4 *)(param_1 + 0x30);
      if (uVar16 < local_60) {
        if (puVar6[9] == 0) {
          FUN_2c4d766c(puVar17,puVar6[1]);
        }
        else if (puVar6[1] != 0) {
          FUN_2c4d7598(puVar17,*puVar6);
        }
        *puVar6 = 0;
        puVar6[1] = 0;
        iVar8 = FUN_2c4d76a8(puVar17);
        iVar15 = puVar6[1];
        uVar11 = puVar6[9];
        uVar13 = (iVar10 - iVar8) + iVar15;
        if (uVar13 < 0x20) {
          if (uVar11 == 0) {
            puVar6[1] = uVar13;
            FUN_2c4d766c(puVar17,uVar13);
            *puVar6 = 0;
            puVar6[1] = 0;
            goto LAB_2c4cb25e;
          }
LAB_2c4cb4a4:
          if (iVar15 != 0) {
            FUN_2c4d7598(puVar17,*puVar6,iVar15);
            uVar11 = puVar6[9];
          }
        }
        else {
          if (uVar11 != 0) goto LAB_2c4cb4a4;
          FUN_2c4d766c(puVar17);
          uVar11 = puVar6[9];
        }
        *puVar6 = 0;
        puVar6[1] = 0;
        FUN_2c4d766c(puVar17,iVar10 - iVar8,uVar11 & 0xff);
      }
      else if ((*(byte *)(param_1 + 0x14ba) - 1 < 3) &&
              (cVar1 = *(char *)(param_1 + 0x14bb) + -1, *(char *)(param_1 + 0x14bb) = cVar1,
              cVar1 < '\0')) {
        *(undefined1 *)(param_1 + 0x14ba) = 0;
      }
LAB_2c4cb25e:
      if (*(char *)(param_1 + 0x14b8) == '\x03') {
        if ((local_94 <= uVar16) && ((int)(param_5 << 0x1f) < 0)) break;
        goto LAB_2c4cb11e;
      }
      uVar16 = uVar16 + 1;
    } while (uVar16 < local_94);
    uVar11 = uVar14 & 0xffff;
    bVar2 = iVar7 == 0;
    if (uVar11 < 0x1000) {
      bVar2 = true;
    }
LAB_2c4cb28c:
    iVar10 = puVar4[9];
joined_r0x2c4cb3b4:
    if (iVar10 == 0) {
      FUN_2c4d766c(puVar19,puVar4[1]);
    }
    else if (puVar4[1] != 0) {
      FUN_2c4d7598(puVar19,*puVar4);
    }
    *puVar4 = 0;
    puVar4[1] = 0;
    iVar8 = FUN_2c4d76a8(puVar19);
    iVar10 = *(int *)(param_1 + 0x2b4);
    iVar5 = iVar5 - iVar8;
    if (0 < iVar10) {
      local_5c = 0;
      uVar9 = FUN_2c4d7334(*(undefined4 *)(param_1 + 0x2b0),iVar10,&local_5c);
      iVar10 = local_5c;
      uVar18 = FUN_2c4d72d8(iVar5,uVar9,&local_58);
      iVar10 = iVar10 + local_58 + 0x1f;
      iVar8 = LZCOUNT(uVar18 ^ (int)uVar18 >> 0x1f);
      uVar16 = iVar10 - 0x1f;
      if ((int)uVar16 < 0) {
        uVar16 = 0x1f - iVar10;
        iVar15 = 0;
        if (((int)uVar16 < 0x20 - iVar8) &&
           (iVar15 = (int)uVar18 >> (uVar16 & 0xff), iVar15 < DAT_2c4cb8a4)) {
          iVar15 = DAT_2c4cb8a4;
        }
      }
      else if ((int)uVar16 < iVar8) {
        iVar15 = uVar18 << (uVar16 & 0xff);
        if (iVar15 < DAT_2c4cb8a4) {
          iVar15 = DAT_2c4cb8a4;
        }
      }
      else {
        iVar15 = DAT_2c4cb8a4;
        if (0 < (int)uVar18) {
          iVar15 = 0x7fffffff;
        }
      }
      iVar10 = *(int *)(param_1 + 0x2b4);
      *(int *)(param_1 + 0x2d4) = iVar15;
    }
    uVar18 = *(uint *)(param_1 + 0x2f8);
    uVar16 = iVar5 >> 3;
    *(uint *)(param_1 + 0x2f8) = uVar18 + uVar16;
    *(uint *)(param_1 + 0x2fc) =
         *(int *)(param_1 + 0x2fc) + (iVar5 >> 0x1f) + (uint)CARRY4(uVar18,uVar16);
    if (bVar2) {
      uVar18 = *(uint *)(param_1 + 0x308);
      *(uint *)(param_1 + 0x308) = uVar18 + 1;
      *(uint *)(param_1 + 0x30c) = *(int *)(param_1 + 0x30c) + (uint)(0xfffffffe < uVar18);
      if (uVar11 < 0x1000) {
        uVar18 = *(uint *)(param_1 + 0x300);
        *(uint *)(param_1 + 0x300) = uVar18 + uVar16;
        uVar11 = *(uint *)(param_1 + 0x310);
        *(uint *)(param_1 + 0x304) =
             (iVar5 >> 0x1f) + *(int *)(param_1 + 0x304) + (uint)CARRY4(uVar18,uVar16);
        *(uint *)(param_1 + 0x310) = uVar11 + 1;
        *(uint *)(param_1 + 0x314) = *(int *)(param_1 + 0x314) + (uint)(0xfffffffe < uVar11);
      }
    }
    iVar5 = *(int *)(param_1 + 0x2b8);
    if ((((iVar5 < 1) || (iVar10 < 1)) || (*(int *)(param_1 + 0x2b0) < 1)) && (bVar2)) {
      if (param_3 < iVar5 * iVar10) {
        iVar7 = 0x200c;
      }
      else {
        iVar7 = 5;
      }
    }
    else if (iVar10 * iVar5 - param_3 == 0 || iVar10 * iVar5 < param_3) {
      if (((iVar7 - 0x4000U & 0xffff) < 0x1000) || (iVar7 == 0)) {
        if (iVar5 == 2) {
          if (3 < iVar10) {
            param_3 = 0;
            iVar5 = param_1 + 0x4c0;
            iVar12 = iVar12 + iVar10 * 2 + 8;
            do {
              param_3 = param_3 + 1;
              iVar10 = iVar5 + 8;
              *param_2 = *(undefined2 *)(iVar5 + -8);
              param_2[1] = *(undefined2 *)(iVar12 + -8);
              param_2[2] = *(undefined2 *)(iVar5 + -6);
              param_2[3] = *(undefined2 *)(iVar12 + -6);
              param_2[4] = *(undefined2 *)(iVar5 + -4);
              param_2[5] = *(undefined2 *)(iVar12 + -4);
              param_2[6] = *(undefined2 *)(iVar5 + -2);
              param_2[7] = *(undefined2 *)(iVar12 + -2);
              iVar5 = iVar10;
              iVar12 = iVar12 + 8;
              param_2 = param_2 + 8;
            } while (param_3 < *(int *)(param_1 + 0x2b4) >> 2);
          }
        }
        else if ((iVar5 == 1) && (3 < iVar10)) {
          iVar10 = 0;
          iVar12 = param_1 + 0x4c0;
          do {
            iVar10 = iVar10 + 1;
            *param_2 = *(undefined2 *)(iVar12 + -8);
            param_2[1] = *(undefined2 *)(iVar12 + -6);
            param_2[2] = *(undefined2 *)(iVar12 + -4);
            param_2[3] = *(undefined2 *)(iVar12 + -2);
            param_3 = *(int *)(param_1 + 0x2b4);
            iVar12 = iVar12 + 8;
            param_2 = param_2 + 4;
          } while (iVar10 < param_3 >> 2);
        }
        goto LAB_2c4cb374;
      }
    }
    else {
      iVar7 = 0x200c;
    }
    uVar20 = FUN_2c674268(param_2,0,param_3 << 1);
    iVar10 = (int)((ulonglong)uVar20 >> 0x20);
    param_3 = (int)uVar20;
  }
  else {
    iVar7 = 2;
    param_3 = param_1;
  }
LAB_2c4cb374:
  if ((*DAT_2c4cb644 ^ local_3c) != 0) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail(param_3,iVar10,*DAT_2c4cb644 ^ local_3c,0);
  }
  return iVar7;
}

