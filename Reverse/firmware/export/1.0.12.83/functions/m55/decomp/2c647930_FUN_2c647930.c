/* FUN_2c647930 @ 0x2c647930 */

undefined4 FUN_2c647930(byte *param_1,uint param_2,uint *param_3,int param_4,char param_5)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  byte *pbVar9;
  uint uVar10;
  byte bVar11;
  byte *pbVar12;
  int *piVar13;
  int iVar14;
  char **ppcVar15;
  bool bVar16;
  char *local_b8 [17];
  int local_74;
  int local_70 [17];
  int local_2c;
  
  pcVar2 = DAT_2c647c40;
  bVar16 = param_3 == (uint *)0x0;
  iVar14 = 0;
  if (!bVar16) {
    iVar14 = param_4;
  }
  uVar8 = param_2;
  if ((bVar16 || param_4 == 0) || iVar14 < 0) {
    uVar8 = 1;
  }
  if ((!bVar16 && param_4 != 0) && iVar14 >= 0) {
    uVar8 = 0;
  }
  if (param_1 == (byte *)0x0) {
    uVar8 = uVar8 | 1;
  }
  local_2c = *DAT_2c647c10;
  if (uVar8 == 0) {
    if (*DAT_2c647c40 != '\0') {
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x205,DAT_2c647c24,DAT_2c647c2c,DAT_2c647c38,param_4);
    }
    bVar11 = *param_1;
    if (param_2 != 0 || bVar11 != 0) {
      bVar16 = false;
      uVar8 = 0;
      uVar10 = 0;
      pbVar12 = param_1;
      do {
        if (bVar16) {
          if ((bVar11 & 0xdf) == 0x52) {
            param_1[uVar8] = 0x20;
            param_1[uVar8 + 1] = 0x20;
            if (*pcVar2 != '\0') {
                    /* WARNING: Subroutine does not return */
              TRACE(4,0x1b5,DAT_2c647c74,DAT_2c647c7c,DAT_2c647c78,param_1,1);
            }
            if (param_5 != '\0') goto LAB_2c6479c2;
            uVar6 = 0;
            if ((code *)*DAT_2c647c34 != (code *)0x0) {
              (*(code *)*DAT_2c647c34)(param_1,param_2);
            }
            goto LAB_2c647b02;
          }
          if ((bVar11 & 0xdf) == 0x4c) {
            param_1[uVar8] = 0x20;
            param_1[uVar8 + 1] = 0x20;
            if (*pcVar2 == '\0') goto LAB_2c6479c2;
            goto LAB_2c647bf4;
          }
          bVar16 = false;
        }
        else if (bVar11 == 0x2d) {
          uVar8 = uVar10;
          bVar16 = true;
        }
        uVar10 = uVar10 + 1;
        pbVar12 = pbVar12 + 1;
        bVar11 = *pbVar12;
      } while ((uVar10 < param_2) || (bVar11 != 0));
    }
    if (*DAT_2c647c40 != '\0') {
LAB_2c647bf4:
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x1b5,DAT_2c647c24,DAT_2c647c2c,DAT_2c647c3c,param_1,0);
    }
LAB_2c6479c2:
    iVar14 = 0;
    do {
      if ((*param_3 < 0x16) && ((int)((DAT_2c647c30 >> (*param_3 & 0xff)) << 0x1f) < 0)) {
LAB_2c647a06:
        uVar8 = param_3[1];
        if (uVar8 != 0) {
          uVar6 = FUN_2c66c4ec(uVar8);
          iVar5 = FUN_2c66c540(uVar8,param_1,uVar6);
          if (iVar5 == 0) {
            iVar5 = 1;
            ppcVar15 = local_b8;
            pbVar12 = param_1;
            do {
              bVar11 = *pbVar12;
              iVar4 = iVar5 + -1;
              if ((bVar11 == 9) || (bVar11 == 0x20)) {
                do {
                  do {
                    pbVar12 = pbVar12 + 1;
                    bVar11 = *pbVar12;
                  } while (bVar11 == 0x20);
                } while (bVar11 == 9);
              }
              if (bVar11 == 0) {
                local_b8[iVar4] = (char *)0x0;
                goto LAB_2c647a94;
              }
              if (bVar11 == 0x22) {
                bVar11 = pbVar12[1];
                *ppcVar15 = (char *)(pbVar12 + 1);
                pbVar9 = pbVar12 + 1;
                if (bVar11 == 0x22) goto LAB_2c647a7e;
                if (bVar11 != 0) {
                  pbVar9 = pbVar12 + 2;
                  bVar11 = *pbVar9;
                  if (bVar11 != 0) {
                    while (bVar11 != 0x22) {
                      pbVar9 = pbVar9 + 1;
                      bVar11 = *pbVar9;
                      if (bVar11 == 0) goto LAB_2c647b5e;
                    }
                    goto LAB_2c647a7e;
                  }
                }
LAB_2c647b5e:
                cVar1 = *pcVar2;
                local_b8[iVar5] = (char *)0x0;
                if (cVar1 == '\0') goto LAB_2c647a9c;
                goto LAB_2c647b70;
              }
              bVar11 = *pbVar12;
              *ppcVar15 = (char *)pbVar12;
              pbVar9 = pbVar12;
              if (bVar11 != 0x2c && bVar11 != 9) {
                do {
                  pbVar9 = pbVar12;
                  if ((bVar11 & 0xdf) == 0) break;
                  pbVar12 = pbVar12 + 1;
                  bVar11 = *pbVar12;
                  pbVar9 = pbVar12;
                } while (bVar11 != 9 && bVar11 != 0x2c);
              }
LAB_2c647a7e:
              if (bVar11 == 0) goto LAB_2c647b5e;
              iVar5 = iVar5 + 1;
              ppcVar15 = ppcVar15 + 1;
              pbVar12 = pbVar9 + 1;
              *pbVar9 = 0;
            } while (iVar5 != 0x11);
            iVar4 = 0x10;
LAB_2c647a94:
            iVar5 = iVar4;
            if (*pcVar2 != '\0') {
LAB_2c647b70:
                    /* WARNING: Subroutine does not return */
              TRACE(4,0x22c,DAT_2c647c24,DAT_2c647c2c,DAT_2c647c28,iVar5,local_b8[0],param_3[2]);
            }
LAB_2c647a9c:
            pcVar3 = local_b8[1];
            if (*param_3 != 0x13) {
LAB_2c647af8:
              (*(code *)param_3[3])(iVar5,local_b8);
              uVar6 = 0;
              goto LAB_2c647b02;
            }
            if (local_b8[1] != (char *)0x0) {
              if (((*local_b8[1] == 'm') && (local_b8[1][1] == 'm')) && (local_b8[1][2] == 'i'))
              goto LAB_2c647af8;
              FUN_2c674668(&local_74,DAT_2c647c1c,0x48);
              if (pcVar2[4] != '\0') {
                piVar13 = &local_74;
                iVar7 = 0xb;
                iVar4 = DAT_2c647c20;
                while( true ) {
                  iVar4 = FUN_2c66c540(pcVar3,iVar4,iVar7 + -1);
                  if (iVar4 == 0) goto LAB_2c647af8;
                  piVar13 = piVar13 + 1;
                  iVar4 = *piVar13;
                  if (iVar4 == 0) break;
                  iVar7 = FUN_2c66c4ec(iVar4);
                }
              }
            }
          }
        }
      }
      else {
        piVar13 = &local_74;
        local_74 = *DAT_2c647c14;
        local_70[0] = DAT_2c647c14[1];
        local_70[1] = DAT_2c647c14[2];
        local_70[2] = DAT_2c647c14[3];
        if (pcVar2[4] != '\0') {
          iVar4 = 8;
          iVar5 = DAT_2c647c18;
          while (iVar5 = FUN_2c66c540(param_1,iVar5,iVar4 + -1), iVar5 != 0) {
            piVar13 = piVar13 + 1;
            iVar5 = *piVar13;
            if (iVar5 == 0) goto LAB_2c647b26;
            iVar4 = FUN_2c66c4ec(iVar5);
          }
          goto LAB_2c647a06;
        }
      }
LAB_2c647b26:
      iVar14 = iVar14 + 1;
      param_3 = param_3 + 5;
    } while (iVar14 < param_4);
  }
  uVar6 = 0xffffffff;
LAB_2c647b02:
  if (*DAT_2c647c10 != local_2c) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return uVar6;
}

