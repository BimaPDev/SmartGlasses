/* FUN_140bdc98 @ 0x140bdc98 */

undefined4 FUN_140bdc98(char *param_1,uint param_2,uint *param_3,int param_4,char param_5)

{
  byte bVar1;
  bool bVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  byte *pbVar8;
  char *pcVar9;
  uint uVar10;
  char cVar11;
  char *pcVar12;
  uint uVar13;
  char **ppcVar14;
  int *piVar15;
  int iVar16;
  char *local_b8 [17];
  int local_74;
  int local_70 [17];
  int local_2c;
  
  pcVar3 = DAT_140bdf84;
  local_2c = *DAT_140bdf58;
  if (((param_1 != (char *)0x0) && (param_3 != (uint *)0x0)) && (0 < param_4)) {
    if (*DAT_140bdf84 != '\0') {
      FUN_1402a6e8(4,0x205,DAT_140bdf70,DAT_140bdf74,DAT_140bdf80,param_4);
    }
    uVar10 = 0;
    pbVar8 = (byte *)(param_1 + -1);
    bVar2 = false;
    uVar13 = 0;
    do {
      pbVar8 = pbVar8 + 1;
      bVar1 = *pbVar8;
      if (bVar1 == 0) {
        if (param_2 <= uVar10) {
          cVar11 = *pcVar3;
          goto joined_r0x140bdf50;
        }
        bVar2 = false;
      }
      else if (bVar2) {
        if ((bVar1 & 0xdf) == 0x52) {
          param_1[uVar13] = ' ';
          param_1[uVar13 + 1] = ' ';
          if (*pcVar3 != '\0') {
            FUN_1402a6e8(4,0x1b5,DAT_140bdfc8,DAT_140bdfc4,DAT_140bdfc0,param_1,1);
          }
          if (param_5 != '\0') goto LAB_140bdd2e;
          uVar6 = 0;
          if ((code *)*DAT_140bdfcc != (code *)0x0) {
            (*(code *)*DAT_140bdfcc)(param_1,param_2);
          }
          goto LAB_140bde58;
        }
        if ((bVar1 & 0xdf) == 0x4c) goto LAB_140bdef4;
        bVar2 = false;
      }
      else if (bVar1 == 0x2d) {
        bVar2 = true;
        uVar13 = uVar10;
      }
      uVar10 = uVar10 + 1;
    } while( true );
  }
  goto LAB_140bded4;
LAB_140bdef4:
  param_1[uVar13] = ' ';
  param_1[uVar13 + 1] = ' ';
  cVar11 = *pcVar3;
joined_r0x140bdf50:
  if (cVar11 != '\0') {
    FUN_1402a6e8(4,0x1b5,DAT_140bdf70,DAT_140bdf74,DAT_140bdf7c,param_1,0);
  }
LAB_140bdd2e:
  iVar16 = 0;
  do {
    if ((*param_3 < 0x16) && ((int)((DAT_140bdf78 >> (*param_3 & 0xff)) << 0x1f) < 0)) {
LAB_140bdd72:
      uVar13 = param_3[1];
      if (uVar13 != 0) {
        uVar6 = FUN_140dd3a4(uVar13);
        iVar5 = FUN_140dd3b4(uVar13,param_1,uVar6);
        if (iVar5 == 0) {
          iVar5 = 1;
          ppcVar14 = local_b8;
          pcVar12 = param_1;
          do {
            iVar4 = iVar5 + -1;
            do {
              do {
                pcVar9 = pcVar12;
                cVar11 = *pcVar9;
                pcVar12 = pcVar9 + 1;
              } while (cVar11 == ' ');
            } while (cVar11 == '\t');
            if (cVar11 == '\0') {
              local_b8[iVar4] = (char *)0x0;
              goto LAB_140bdde8;
            }
            if (cVar11 == '\"') {
              cVar11 = pcVar9[1];
              pcVar9 = pcVar9 + 1;
              *ppcVar14 = pcVar9;
              if (cVar11 != '\0') {
                while (cVar11 != '\"') {
                  pcVar9 = pcVar9 + 1;
                  cVar11 = *pcVar9;
                  if (cVar11 == '\0') goto LAB_140bde92;
                }
                if (*pcVar9 != '\0') goto LAB_140bddd6;
              }
LAB_140bde92:
              local_b8[iVar5] = (char *)0x0;
              cVar11 = *pcVar3;
              iVar4 = iVar5;
              goto joined_r0x140bdea4;
            }
            *ppcVar14 = pcVar9;
            while (cVar11 != ',') {
              pcVar9 = pcVar9 + 1;
              cVar11 = *pcVar9;
              if (cVar11 == '\0') goto LAB_140bde92;
              if ((cVar11 == ' ') || (cVar11 == '\t')) goto LAB_140bddd6;
            }
            if (*pcVar9 == '\0') goto LAB_140bde92;
LAB_140bddd6:
            iVar5 = iVar5 + 1;
            ppcVar14 = ppcVar14 + 1;
            pcVar12 = pcVar9 + 1;
            *pcVar9 = '\0';
          } while (iVar5 != 0x11);
          iVar4 = 0x10;
LAB_140bdde8:
          cVar11 = *pcVar3;
joined_r0x140bdea4:
          if (cVar11 != '\0') {
            FUN_1402a6e8(4,0x22c,DAT_140bdf70,DAT_140bdf74,DAT_140bdf6c,iVar4,local_b8[0],param_3[2]
                        );
          }
          pcVar12 = local_b8[1];
          if (*param_3 != 0x13) {
LAB_140bde4e:
            (*(code *)param_3[3])(iVar4,local_b8);
            uVar6 = 0;
            goto LAB_140bde58;
          }
          if (local_b8[1] != (char *)0x0) {
            if (((*local_b8[1] == 'm') && (local_b8[1][1] == 'm')) && (local_b8[1][2] == 'i'))
            goto LAB_140bde4e;
            FUN_140e5278(&local_74,DAT_140bdf64,0x48);
            if (pcVar3[4] != '\0') {
              iVar7 = 0xb;
              piVar15 = &local_74;
              iVar5 = DAT_140bdf68;
              while( true ) {
                iVar5 = FUN_140dd3b4(pcVar12,iVar5,iVar7 + -1);
                if (iVar5 == 0) goto LAB_140bde4e;
                piVar15 = piVar15 + 1;
                iVar5 = *piVar15;
                if (iVar5 == 0) break;
                iVar7 = FUN_140dd3a4(iVar5);
              }
            }
          }
        }
      }
    }
    else {
      piVar15 = &local_74;
      local_74 = *DAT_140bdf5c;
      local_70[0] = DAT_140bdf5c[1];
      local_70[1] = DAT_140bdf5c[2];
      local_70[2] = DAT_140bdf5c[3];
      if (pcVar3[4] != '\0') {
        iVar4 = 8;
        iVar5 = DAT_140bdf60;
        while (iVar5 = FUN_140dd3b4(param_1,iVar5,iVar4 + -1), iVar5 != 0) {
          piVar15 = piVar15 + 1;
          iVar5 = *piVar15;
          if (iVar5 == 0) goto LAB_140bdec4;
          iVar4 = FUN_140dd3a4(iVar5);
        }
        goto LAB_140bdd72;
      }
    }
LAB_140bdec4:
    iVar16 = iVar16 + 1;
    param_3 = param_3 + 5;
  } while (param_4 != iVar16);
LAB_140bded4:
  uVar6 = 0xffffffff;
LAB_140bde58:
  if (*DAT_140bdf58 != local_2c) {
                    /* WARNING: Subroutine does not return */
    FUN_14039adc();
  }
  return uVar6;
}

