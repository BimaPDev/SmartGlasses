/* FUN_2c4cecbc @ 0x2c4cecbc */

undefined4 FUN_2c4cecbc(int param_1,uint *param_2,int param_3,int param_4)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  int *piVar19;
  int *piVar20;
  uint *puVar21;
  undefined4 uVar22;
  uint uVar23;
  int *piVar24;
  uint uVar25;
  uint local_60;
  uint *local_5c;
  
  puVar1 = (uint *)FUN_2c4d28f4(*(undefined4 *)(param_1 + 0x14),0);
  uVar2 = *puVar1;
  uVar7 = puVar1[1];
  uVar10 = puVar1[2];
  uVar15 = puVar1[3];
  uVar3 = puVar1[4];
  uVar8 = puVar1[5];
  uVar11 = puVar1[6];
  uVar16 = puVar1[7];
  uVar4 = puVar1[8];
  uVar9 = puVar1[9];
  uVar12 = puVar1[10];
  if (puVar1[9] == 0) {
    FUN_2c4d766c(puVar1 + 2,puVar1[1],0);
  }
  else if (puVar1[1] != 0) {
    FUN_2c4d7598(puVar1 + 2,*puVar1);
  }
  puVar21 = puVar1 + 2;
  uVar25 = 0;
  *puVar1 = 0;
  puVar1[1] = 0;
  iVar5 = FUN_2c4d76a8(puVar21);
  if (iVar5 < 1) {
    uVar22 = 0x1002;
    goto LAB_2c4cedae;
  }
  uVar23 = puVar1[1];
  if (uVar23 == 0) {
    uVar17 = FUN_2c4d74d4(puVar21);
    local_5c = DAT_2c4cefcc;
    *puVar1 = uVar17;
    uVar18 = 0x1d;
    uVar25 = local_5c[1];
    puVar1[1] = 0x1d;
    if (((uVar25 & uVar17 >> 0x1d) != 0) || (uVar23 = 0, (uVar25 & uVar17 >> 0x1e) == 0))
    goto LAB_2c4ceda2;
LAB_2c4cee2a:
    uVar18 = uVar18 - 8;
    puVar1[1] = uVar18;
    if (((uVar17 >> (uVar18 & 0xff) | uVar23) & local_5c[8]) == 0xff) {
      uVar25 = 0x10 - uVar18;
      if ((int)uVar25 < 1) {
        uVar25 = 0;
      }
      else {
        if (uVar25 == 0x20) {
          uVar25 = 0;
        }
        else {
          uVar25 = uVar17 << (uVar25 & 0xff);
        }
        uVar17 = FUN_2c4d74d4(puVar21);
        *puVar1 = uVar17;
        uVar18 = puVar1[1] + 0x20;
      }
      uVar18 = uVar18 - 0x10;
      uVar23 = local_5c[0x10];
      puVar1[1] = uVar18;
      if ((((uVar17 >> (uVar18 & 0xff) | uVar25) & uVar23) == 0xffff) && ((int)uVar18 < 0)) {
        uVar25 = FUN_2c4d74d4(puVar21);
        *puVar1 = uVar25;
        uVar18 = puVar1[1] + 0x20;
        puVar1[1] = uVar18;
      }
    }
    uVar25 = 4 - uVar18;
    if ((int)uVar25 < 1) {
      uVar23 = *puVar1;
      uVar25 = 0;
    }
    else {
      if (uVar25 == 0x20) {
        uVar25 = 0;
      }
      else {
        uVar25 = *puVar1 << (uVar25 & 0xff);
      }
      uVar23 = FUN_2c4d74d4(puVar21);
      *puVar1 = uVar23;
      uVar18 = puVar1[1] + 0x20;
    }
    uVar18 = uVar18 - 4;
    uVar17 = local_5c[4];
    puVar1[1] = uVar18;
    if (((uVar23 >> (uVar18 & 0xff) | uVar25) & uVar17) == 0xf) {
      uVar25 = 4 - uVar18;
      if ((int)uVar25 < 1) {
        uVar25 = 0;
      }
      else {
        if (uVar25 == 0x20) {
          uVar25 = 0;
        }
        else {
          uVar25 = uVar23 << (uVar25 & 0xff);
        }
        uVar23 = FUN_2c4d74d4(puVar21);
        *puVar1 = uVar23;
        uVar18 = puVar1[1] + 0x20;
      }
      uVar18 = uVar18 - 4;
      puVar1[1] = uVar18;
      if (((uVar23 >> (uVar18 & 0xff) | uVar25) & uVar17) == 0xf) {
        if (0 < (int)(8 - uVar18)) {
          uVar25 = FUN_2c4d74d4(puVar21);
          *puVar1 = uVar25;
          uVar18 = puVar1[1] + 0x20;
        }
        puVar1[1] = uVar18 - 8;
      }
    }
    if (*param_2 != 0) {
      uVar23 = 0;
      piVar19 = (int *)(param_4 + -4);
      piVar24 = (int *)(param_3 + -4);
      piVar20 = (int *)(param_1 + 0x14bc);
      uVar25 = local_5c[0x10];
      do {
        uVar17 = puVar1[1];
        uVar18 = 0x10 - uVar17;
        if ((int)uVar18 < 1) {
          local_60 = *puVar1;
          uVar18 = 0;
        }
        else {
          if (uVar18 == 0x20) {
            uVar18 = 0;
          }
          else {
            uVar18 = *puVar1 << (uVar18 & 0xff);
          }
          local_60 = FUN_2c4d74d4(puVar21);
          uVar17 = puVar1[1] + 0x20;
          *puVar1 = local_60;
        }
        uVar17 = uVar17 - 0x10;
        puVar1[1] = uVar17;
        uVar18 = (uVar18 | local_60 >> (uVar17 & 0xff)) & uVar25;
        if (uVar18 == 0xffff) {
          uVar18 = 0x10 - uVar17;
          if ((int)uVar18 < 1) {
            uVar18 = 0;
          }
          else {
            if (uVar18 == 0x20) {
              uVar18 = 0;
            }
            else {
              uVar18 = local_60 << (uVar18 & 0xff);
            }
            local_60 = FUN_2c4d74d4(puVar21);
            uVar17 = puVar1[1] + 0x20;
            *puVar1 = local_60;
          }
          uVar17 = uVar17 - 0x10;
          uVar14 = local_60 >> (uVar17 & 0xff);
          puVar1[1] = uVar17;
          uVar13 = (uVar18 | uVar14) & uVar25;
          uVar18 = uVar13 + 0xffff;
          if (uVar13 != 0xffff) goto LAB_2c4ceeda;
          if ((int)uVar17 < 0) {
            if (uVar17 == 0xffffffe0) {
              local_60 = 0;
            }
            else {
              local_60 = local_60 << (-uVar17 & 0xff);
            }
            uVar17 = FUN_2c4d74d4(puVar21);
            uVar18 = puVar1[1];
            *puVar1 = uVar17;
            puVar1[1] = uVar18 + 0x20;
            uVar14 = uVar17 >> (uVar18 + 0x20 & 0xff) | local_60;
          }
          iVar6 = (*local_5c & uVar14) + 0x1fffe;
          piVar19[1] = iVar6;
          if (iVar6 != 0) goto LAB_2c4ceee2;
LAB_2c4cf056:
          uVar22 = 0x4002;
          *param_2 = 0;
          goto LAB_2c4cedae;
        }
LAB_2c4ceeda:
        piVar19[1] = uVar18;
        if (uVar18 == 0) goto LAB_2c4cf056;
LAB_2c4ceee2:
        if (puVar1[9] == 0) {
          FUN_2c4d766c(puVar21,puVar1[1]);
        }
        else if (puVar1[1] != 0) {
          FUN_2c4d7598(puVar21,*puVar1);
        }
        *puVar1 = 0;
        puVar1[1] = 0;
        iVar6 = FUN_2c4d76a8(puVar21);
        piVar24[1] = iVar5 - iVar6;
        if (puVar1[1] == 0) {
          uVar17 = FUN_2c4d74d4(puVar21);
          *puVar1 = uVar17;
          uVar17 = uVar17 >> 0x1f;
          puVar1[1] = 0x1f;
        }
        else {
          uVar17 = puVar1[1] - 1;
          puVar1[1] = uVar17;
          uVar17 = *puVar1 >> (uVar17 & 0xff) & 1;
        }
        if (uVar23 == 0 && uVar17 == 0) goto LAB_2c4cf056;
        uVar17 = puVar1[1];
        uVar18 = puVar1[9];
        uVar13 = piVar19[1] * 8 - 1;
        if (uVar13 < uVar17) {
          if (uVar18 != 0) {
LAB_2c4cef90:
            if (uVar17 != 0) {
              FUN_2c4d7598(puVar21,*puVar1,uVar17);
              uVar18 = puVar1[9];
            }
            goto LAB_2c4cef94;
          }
          puVar1[1] = uVar17 - uVar13;
        }
        else {
          if (uVar18 != 0) goto LAB_2c4cef90;
          FUN_2c4d766c(puVar21);
          uVar18 = puVar1[9];
LAB_2c4cef94:
          *puVar1 = 0;
          puVar1[1] = 0;
          FUN_2c4d768c(puVar21,uVar13,uVar18 & 0xff);
        }
        piVar19 = piVar19 + 1;
        uVar23 = uVar23 + 1;
        piVar24 = piVar24 + 1;
        piVar20 = piVar20 + 1;
        *piVar20 = *piVar24 + *piVar19 * 8;
      } while (uVar23 < *param_2);
    }
  }
  else {
    puVar1[1] = uVar23 - 1;
    uVar17 = 1 - (uVar23 - 1);
    if ((int)uVar17 < 1) {
      uVar18 = uVar23 - 2;
      uVar23 = 3 - uVar23;
      uVar17 = *puVar1;
    }
    else {
      if (uVar17 != 0x20) {
        uVar25 = *puVar1 << (uVar17 & 0xff);
      }
      uVar17 = FUN_2c4d74d4(puVar21);
      *puVar1 = uVar17;
      uVar18 = puVar1[1] + 0x1f;
      uVar23 = 1 - uVar18;
    }
    local_5c = DAT_2c4cefcc;
    puVar1[1] = uVar18;
    uVar13 = uVar17 >> (uVar18 & 0xff);
    uVar14 = DAT_2c4cefcc[1];
    if ((int)uVar23 < 1) {
      uVar23 = 0;
    }
    else {
      if (uVar23 == 0x20) {
        uVar23 = 0;
      }
      else {
        uVar23 = uVar17 << (uVar23 & 0xff);
      }
      uVar17 = FUN_2c4d74d4(puVar21);
      *puVar1 = uVar17;
      uVar18 = puVar1[1] + 0x20;
    }
    uVar18 = uVar18 - 1;
    puVar1[1] = uVar18;
    if ((((uVar17 >> (uVar18 & 0xff) | uVar23) & uVar14) == 0) &&
       (((uVar13 | uVar25) & uVar14) != 0)) {
      uVar25 = 8 - uVar18;
      if ((int)uVar25 < 1) {
        uVar23 = 0;
      }
      else {
        if (uVar25 == 0x20) {
          uVar23 = 0;
        }
        else {
          uVar23 = uVar17 << (uVar25 & 0xff);
        }
        uVar17 = FUN_2c4d74d4(puVar21);
        *puVar1 = uVar17;
        uVar18 = puVar1[1] + 0x20;
      }
      goto LAB_2c4cee2a;
    }
LAB_2c4ceda2:
    if (*(char *)(param_1 + 0x14b8) != '\0') {
      uVar22 = 0x4002;
      *(undefined1 *)(param_1 + 0x14b8) = 0;
      goto LAB_2c4cedae;
    }
  }
  uVar22 = 0;
LAB_2c4cedae:
  *puVar1 = uVar2;
  puVar1[1] = uVar7;
  puVar1[2] = uVar10;
  puVar1[3] = uVar15;
  puVar1[4] = uVar3;
  puVar1[5] = uVar8;
  puVar1[6] = uVar11;
  puVar1[7] = uVar16;
  puVar1[8] = uVar4;
  puVar1[9] = uVar9;
  puVar1[10] = uVar12;
  return uVar22;
}

