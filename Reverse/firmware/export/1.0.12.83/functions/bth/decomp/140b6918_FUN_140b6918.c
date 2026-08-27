/* FUN_140b6918 @ 0x140b6918 */

undefined4 FUN_140b6918(int param_1,uint *param_2,int param_3,int param_4)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  int *piVar21;
  uint uVar22;
  undefined4 uVar23;
  uint *puVar24;
  int *piVar25;
  int *piVar26;
  uint uVar27;
  uint local_6c;
  uint *local_5c;
  
  puVar2 = (uint *)FUN_140e5128(*(undefined4 *)(param_1 + 0x14),0);
  uVar3 = *puVar2;
  uVar10 = puVar2[1];
  uVar14 = puVar2[2];
  uVar17 = puVar2[3];
  uVar4 = puVar2[4];
  uVar11 = puVar2[5];
  uVar15 = puVar2[6];
  uVar18 = puVar2[7];
  uVar5 = puVar2[8];
  uVar12 = puVar2[9];
  uVar16 = puVar2[10];
  if (puVar2[9] == 0) {
    FUN_140e5408(puVar2 + 2,puVar2[1],0);
  }
  else if (puVar2[1] != 0) {
    FUN_140e5168(puVar2 + 2,*puVar2);
  }
  puVar24 = puVar2 + 2;
  *puVar2 = 0;
  puVar2[1] = 0;
  iVar6 = FUN_140e52b8(puVar24);
  if (iVar6 < 1) {
    uVar23 = 0x1002;
  }
  else {
    uVar22 = puVar2[1];
    if (uVar22 == 0) {
      uVar8 = FUN_140e5948(puVar24);
      uVar19 = 0x1e;
      local_5c = DAT_140b6d7c;
      uVar13 = 0x1e;
      uVar20 = DAT_140b6d7c[1];
      *puVar2 = uVar8;
      uVar22 = 0;
      local_6c = 0;
      uVar7 = uVar8;
    }
    else {
      puVar2[1] = uVar22 - 1;
      uVar19 = 1 - (uVar22 - 1);
      if ((int)uVar19 < 1) {
        local_6c = 0;
        uVar19 = uVar22 - 2;
        uVar7 = *puVar2;
        uVar22 = 3 - uVar22;
      }
      else {
        if (uVar19 == 0x20) {
          local_6c = 0;
        }
        else {
          local_6c = *puVar2 << (uVar19 & 0xff);
        }
        uVar7 = FUN_140e5948(puVar24);
        *puVar2 = uVar7;
        uVar19 = puVar2[1] + 0x1f;
        uVar22 = 1 - uVar19;
      }
      puVar1 = DAT_140b6c7c;
      local_5c = DAT_140b6c7c;
      puVar2[1] = uVar19;
      uVar20 = puVar1[1];
      if ((int)uVar22 < 1) {
        uVar22 = 0;
        uVar8 = uVar7;
        uVar13 = uVar19;
      }
      else {
        if (uVar22 == 0x20) {
          uVar22 = 0;
        }
        else {
          uVar22 = uVar7 << (uVar22 & 0xff);
        }
        uVar8 = FUN_140e5948(puVar24);
        *puVar2 = uVar8;
        uVar13 = puVar2[1] + 0x20;
      }
    }
    uVar13 = uVar13 - 1;
    puVar2[1] = uVar13;
    if ((((uVar8 >> (uVar13 & 0xff) | uVar22) & uVar20) == 0) &&
       (((uVar7 >> (uVar19 & 0xff) | local_6c) & uVar20) != 0)) {
      uVar19 = 8 - uVar13;
      uVar22 = 0;
      if (0 < (int)uVar19) {
        if (uVar19 != 0x20) {
          uVar22 = uVar8 << (uVar19 & 0xff);
        }
        uVar8 = FUN_140e5948(puVar24);
        *puVar2 = uVar8;
        uVar13 = puVar2[1] + 0x20;
      }
      uVar13 = uVar13 - 8;
      uVar19 = local_5c[8];
      puVar2[1] = uVar13;
      if (((uVar8 >> (uVar13 & 0xff) | uVar22) & uVar19) == 0xff) {
        uVar22 = 0x10 - uVar13;
        if ((int)uVar22 < 1) {
          uVar22 = 0;
        }
        else {
          if (uVar22 == 0x20) {
            uVar22 = 0;
          }
          else {
            uVar22 = uVar8 << (uVar22 & 0xff);
          }
          uVar8 = FUN_140e5948(puVar24);
          *puVar2 = uVar8;
          uVar13 = puVar2[1] + 0x20;
        }
        uVar13 = uVar13 - 0x10;
        uVar19 = local_5c[0x10];
        puVar2[1] = uVar13;
        if ((((uVar8 >> (uVar13 & 0xff) | uVar22) & uVar19) == 0xffff) && ((int)uVar13 < 0)) {
          uVar22 = FUN_140e5948(puVar24);
          *puVar2 = uVar22;
          uVar13 = puVar2[1] + 0x20;
          puVar2[1] = uVar13;
        }
      }
      uVar22 = 4 - uVar13;
      if ((int)uVar22 < 1) {
        uVar19 = 0;
        uVar22 = *puVar2;
      }
      else {
        if (uVar22 == 0x20) {
          uVar19 = 0;
        }
        else {
          uVar19 = *puVar2 << (uVar22 & 0xff);
        }
        uVar22 = FUN_140e5948(puVar24);
        *puVar2 = uVar22;
        uVar13 = puVar2[1] + 0x20;
      }
      uVar13 = uVar13 - 4;
      uVar8 = local_5c[4];
      puVar2[1] = uVar13;
      if (((uVar22 >> (uVar13 & 0xff) | uVar19) & uVar8) == 0xf) {
        uVar19 = 4 - uVar13;
        if ((int)uVar19 < 1) {
          uVar19 = 0;
        }
        else {
          if (uVar19 == 0x20) {
            uVar19 = 0;
          }
          else {
            uVar19 = uVar22 << (uVar19 & 0xff);
          }
          uVar22 = FUN_140e5948(puVar24);
          uVar13 = puVar2[1] + 0x20;
          *puVar2 = uVar22;
        }
        uVar13 = uVar13 - 4;
        puVar2[1] = uVar13;
        if ((uVar8 & (uVar19 | uVar22 >> (uVar13 & 0xff))) == 0xf) {
          if (0 < (int)(8 - uVar13)) {
            uVar22 = FUN_140e5948(puVar24);
            *puVar2 = uVar22;
            uVar13 = puVar2[1] + 0x20;
          }
          puVar2[1] = uVar13 - 8;
        }
      }
      if (*param_2 != 0) {
        uVar19 = 0;
        uVar22 = local_5c[0x10];
        piVar21 = (int *)(param_4 + -4);
        piVar25 = (int *)(param_3 + -4);
        piVar26 = (int *)(param_1 + 0x14bc);
        do {
          uVar8 = puVar2[1];
          uVar13 = 0x10 - uVar8;
          if ((int)uVar13 < 1) {
            uVar13 = 0;
            uVar7 = *puVar2;
          }
          else {
            if (uVar13 == 0x20) {
              uVar13 = 0;
            }
            else {
              uVar13 = *puVar2 << (uVar13 & 0xff);
            }
            uVar7 = FUN_140e5948(puVar24);
            uVar8 = puVar2[1] + 0x20;
            *puVar2 = uVar7;
          }
          uVar8 = uVar8 - 0x10;
          puVar2[1] = uVar8;
          uVar13 = (uVar13 | uVar7 >> (uVar8 & 0xff)) & uVar22;
          if (uVar13 == 0xffff) {
            uVar13 = 0x10 - uVar8;
            if ((int)uVar13 < 1) {
              uVar13 = 0;
            }
            else {
              if (uVar13 == 0x20) {
                uVar13 = 0;
              }
              else {
                uVar13 = uVar7 << (uVar13 & 0xff);
              }
              uVar7 = FUN_140e5948(puVar24);
              uVar8 = puVar2[1] + 0x20;
              *puVar2 = uVar7;
            }
            uVar8 = uVar8 - 0x10;
            uVar27 = uVar7 >> (uVar8 & 0xff);
            uVar20 = (uVar13 | uVar27) & uVar22;
            puVar2[1] = uVar8;
            uVar13 = uVar20 + 0xffff;
            if (uVar20 != 0xffff) goto LAB_140b6af6;
            if ((int)uVar8 < 0) {
              if (uVar8 == 0xffffffe0) {
                uVar7 = 0;
              }
              else {
                uVar7 = uVar7 << (-uVar8 & 0xff);
              }
              uVar8 = FUN_140e5948(puVar24);
              uVar13 = puVar2[1];
              puVar2[1] = uVar13 + 0x20;
              *puVar2 = uVar8;
              uVar27 = uVar8 >> (uVar13 + 0x20 & 0xff) | uVar7;
            }
            iVar9 = (*local_5c & uVar27) + 0x1fffe;
            piVar21[1] = iVar9;
            if (iVar9 != 0) goto LAB_140b6afe;
LAB_140b6c60:
            uVar23 = 0x4002;
            *param_2 = 0;
            goto LAB_140b69f6;
          }
LAB_140b6af6:
          piVar21[1] = uVar13;
          if (uVar13 == 0) goto LAB_140b6c60;
LAB_140b6afe:
          if (puVar2[9] == 0) {
            FUN_140e5408(puVar24,puVar2[1]);
          }
          else if (puVar2[1] != 0) {
            FUN_140e5168(puVar24,*puVar2);
          }
          *puVar2 = 0;
          puVar2[1] = 0;
          iVar9 = FUN_140e52b8(puVar24);
          piVar25[1] = iVar6 - iVar9;
          if (puVar2[1] == 0) {
            uVar8 = FUN_140e5948(puVar24);
            *puVar2 = uVar8;
            puVar2[1] = 0x1f;
            uVar8 = uVar8 >> 0x1f;
          }
          else {
            uVar8 = puVar2[1] - 1;
            puVar2[1] = uVar8;
            uVar8 = *puVar2 >> (uVar8 & 0xff) & 1;
          }
          if (uVar19 == 0 && uVar8 == 0) goto LAB_140b6c60;
          uVar8 = puVar2[1];
          uVar7 = piVar21[1] * 8 - 1;
          uVar13 = puVar2[9];
          if (uVar7 < uVar8) {
            if (uVar13 != 0) {
LAB_140b6b9c:
              if (uVar8 != 0) {
                FUN_140e5168(puVar24,*puVar2,uVar8);
                uVar13 = puVar2[9];
              }
              goto LAB_140b6ba0;
            }
            puVar2[1] = uVar8 - uVar7;
          }
          else {
            if (uVar13 != 0) goto LAB_140b6b9c;
            FUN_140e5408(puVar24);
            uVar13 = puVar2[9];
LAB_140b6ba0:
            *puVar2 = 0;
            puVar2[1] = 0;
            FUN_140e5108(puVar24,uVar7,uVar13 & 0xff);
          }
          piVar21 = piVar21 + 1;
          piVar25 = piVar25 + 1;
          uVar19 = uVar19 + 1;
          piVar26 = piVar26 + 1;
          *piVar26 = *piVar25 + *piVar21 * 8;
        } while (uVar19 < *param_2);
      }
    }
    else if (*(char *)(param_1 + 0x14b8) != '\0') {
      uVar23 = 0x4002;
      *(undefined1 *)(param_1 + 0x14b8) = 0;
      goto LAB_140b69f6;
    }
    uVar23 = 0;
  }
LAB_140b69f6:
  *puVar2 = uVar3;
  puVar2[1] = uVar10;
  puVar2[2] = uVar14;
  puVar2[3] = uVar17;
  puVar2[4] = uVar4;
  puVar2[5] = uVar11;
  puVar2[6] = uVar15;
  puVar2[7] = uVar18;
  puVar2[8] = uVar5;
  puVar2[9] = uVar12;
  puVar2[10] = uVar16;
  return uVar23;
}

