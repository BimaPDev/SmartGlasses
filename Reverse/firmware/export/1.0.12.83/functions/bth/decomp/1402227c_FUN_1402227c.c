/* FUN_1402227c @ 0x1402227c */

/* WARNING: Type propagation algorithm not settling */

void FUN_1402227c(int param_1,byte *param_2,uint param_3,uint param_4,int param_5,int param_6,
                 int param_7,uint param_8,byte *param_9,int param_10,byte param_11)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  undefined4 uVar4;
  uint uVar5;
  byte *extraout_r1;
  byte bVar6;
  uint uVar7;
  byte *pbVar8;
  uint extraout_r2;
  uint uVar9;
  byte *pbVar10;
  uint uVar11;
  byte *pbVar12;
  byte *pbVar13;
  char cVar14;
  uint uVar15;
  int iVar16;
  char *pcVar17;
  byte *pbVar18;
  byte bVar19;
  char *pcVar20;
  longlong lVar21;
  byte *local_74;
  byte *local_68 [4];
  byte *local_58;
  byte *pbStack_54;
  byte *local_50 [4];
  byte *local_40;
  byte *pbStack_3c;
  byte *local_38;
  byte *local_34;
  byte *pbStack_30;
  uint local_2c;
  byte abStack_28 [4];
  
  local_2c = *DAT_14022574;
  uVar15 = (uint)(char)param_11;
  bVar2 = (byte)param_4;
  if (param_2 != (byte *)0x0) {
    if (param_11 < 2) {
      bVar19 = *(byte *)(param_1 + 0xd0);
      *param_9 = bVar19;
      uVar7 = (uint)*(char *)(param_10 + (uint)bVar19);
      if (uVar7 != uVar15) {
        if (param_2 == (byte *)0x2) {
          if (uVar15 == 0) {
            param_2 = (byte *)0x1;
            goto LAB_140222d4;
          }
        }
        else if ((uVar7 == 3) && (uVar15 == 0)) goto LAB_140222d4;
        goto switchD_14022392_default;
      }
LAB_140222d4:
      if (param_4 < 3) goto LAB_14022366;
LAB_140222e0:
      FUN_14024b14(param_6 + param_4,param_7 + param_4,param_2);
      param_2 = extraout_r1;
    }
    else {
      if (uVar15 == 3) {
        bVar19 = *(byte *)(param_1 + 0xd0);
        *param_9 = bVar19;
        if (*(char *)(param_10 + (uint)bVar19) != '\x03') goto switchD_14022392_default;
        goto LAB_140222d4;
      }
      if (2 < param_11 - 0x10) goto LAB_140222b4;
      *param_9 = *(byte *)(param_1 + 0xd0);
      if (2 < param_4) goto LAB_140222e0;
LAB_14022366:
      *(undefined1 *)(param_6 + param_4) = 1;
      *(byte *)(param_7 + param_4) = bVar2;
    }
    if ((uVar15 & 0xffffffef) == 1) {
      param_2 = (byte *)(uint)*(byte *)(param_6 + param_4);
      *(byte *)(param_6 + param_4 + 1) = *(byte *)(param_6 + param_4);
      *(char *)(param_7 + param_4 + 1) = *(char *)(param_7 + param_4) + '\x01';
    }
    uVar4 = 1;
    *(char *)(param_1 + 0xd0) = *(char *)(param_1 + 0xd0) + '\x01';
    goto LAB_1402233c;
  }
  if ((*(char *)(param_1 + 0xcd) == '\0') || (param_8 < *(byte *)(param_1 + 0xce))) {
    if (2 < param_11 - 0x10) {
      if ((1 < param_11) && (uVar15 != 3)) {
LAB_140222b4:
        uVar4 = 1;
        goto LAB_1402233c;
      }
      *(byte *)(param_10 + (uint)*(byte *)(param_1 + 0xd0)) = param_11;
    }
    uVar4 = 1;
    bVar2 = *(byte *)(param_1 + 0xd0);
    *(byte *)(param_1 + 0xd0) = bVar2 + 1;
    *param_9 = bVar2;
    goto LAB_1402233c;
  }
  local_68[1] = param_2;
  local_68[2] = param_2;
  local_58 = param_2;
  pbStack_54 = param_2;
  local_50[1] = param_2;
  local_50[2] = param_2;
  local_40 = param_2;
  pbStack_3c = param_2;
  local_34 = param_2;
  pbStack_30 = param_2;
  local_68[0] = param_2;
  local_68[3] = param_2;
  local_50[0] = param_2;
  local_50[3] = param_2;
  local_38 = param_2;
  switch(uVar15) {
  case 0:
    cVar14 = '\0';
    goto LAB_140223d4;
  case 1:
    cVar14 = '\x01';
LAB_140223d4:
    uVar15 = (uint)*(byte *)(param_1 + 3);
    if (uVar15 != 0) {
      pcVar17 = (char *)(param_1 + 0xf);
LAB_14022404:
      uVar7 = (uint)(byte)pcVar17[0x21];
      pcVar20 = pcVar17 + 1;
      cVar3 = *pcVar20;
      if ((cVar3 != cVar14) || ((byte)pcVar17[0x11] != param_3)) goto LAB_14022412;
      local_74 = (byte *)((uVar7 & 0xf) << 4 | 1);
      pbVar18 = local_68[uVar7];
      bVar19 = (byte)pbVar18;
      pbVar13 = local_68[uVar7 + 3];
      if (uVar7 != 0) {
        uVar9 = uVar7;
        do {
          uVar9 = uVar9 - 1;
          pbVar8 = (byte *)(param_1 + 0x2f);
          do {
            pbVar10 = pbVar8 + 1;
            if (*pbVar10 == uVar9) {
              pbVar18 = pbVar18 + 1;
              if (pbVar8[-0x1f] == 0) {
                iVar16 = 1;
              }
              else {
                iVar16 = 2;
              }
              pbVar13 = pbVar13 + iVar16;
            }
            pbVar8 = pbVar10;
          } while ((byte *)(param_1 + 0x2f) + uVar15 != pbVar10);
          if (*(byte *)(param_1 + 4) != 0) {
            pbVar8 = (byte *)(param_1 + 0x5f);
            do {
              pbVar10 = pbVar8 + 1;
              if (*pbVar10 == uVar9) {
                pbVar18 = pbVar18 + 1;
                if (pbVar8[-0x1f] == 0) {
                  iVar16 = 1;
                }
                else {
                  iVar16 = 2;
                }
                pbVar13 = pbVar13 + iVar16;
              }
              pbVar8 = pbVar10;
            } while ((byte *)(param_1 + 0x5f) + *(byte *)(param_1 + 4) != pbVar10);
          }
          if (*(byte *)(param_1 + 5) != 0) {
            pbVar8 = (byte *)(param_1 + 0x8f);
            do {
              pbVar10 = pbVar8 + 1;
              if (*pbVar10 == uVar9) {
                pbVar18 = pbVar18 + 1;
                if (pbVar8[-0x1f] == 0) {
                  iVar16 = 1;
                }
                else {
                  iVar16 = 2;
                }
                pbVar13 = pbVar13 + iVar16;
              }
              pbVar8 = pbVar10;
            } while ((byte *)(param_1 + 0x8f) + *(byte *)(param_1 + 5) != pbVar10);
          }
        } while (uVar9 != 0);
        bVar19 = (char)pbVar18 + *(byte *)(param_1 + 6);
        pbVar13 = pbVar13 + *(byte *)(param_1 + 6);
      }
      bVar6 = *(byte *)(local_50 + uVar7);
      goto LAB_140227aa;
    }
LAB_14022666:
    uVar7 = (uint)*(byte *)(param_1 + 4);
    if (uVar7 != 0) {
      pcVar17 = (char *)(param_1 + 0x3f);
LAB_14022696:
      uVar9 = (uint)(byte)pcVar17[0x21];
      pcVar20 = pcVar17 + 1;
      cVar3 = *pcVar20;
      if ((cVar3 != cVar14) || ((byte)pcVar17[0x11] != param_3)) goto LAB_140226a2;
      local_74 = (byte *)((uVar9 & 0xf) << 4 | 2);
      pbVar18 = local_68[uVar9];
      bVar19 = (byte)pbVar18;
      pbVar13 = local_68[uVar9 + 3];
      if (uVar9 != 0) {
        pbVar8 = (byte *)(param_1 + 0x5f);
        uVar11 = uVar9;
        do {
          uVar11 = uVar11 - 1;
          pbVar10 = pbVar8;
          if (uVar15 != 0) {
            pbVar12 = (byte *)(param_1 + 0x2f);
            do {
              pbVar1 = pbVar12 + 1;
              if (*pbVar1 == uVar11) {
                pbVar18 = pbVar18 + 1;
                if (pbVar12[-0x1f] == 0) {
                  iVar16 = 1;
                }
                else {
                  iVar16 = 2;
                }
                pbVar13 = pbVar13 + iVar16;
              }
              pbVar12 = pbVar1;
            } while ((byte *)(param_1 + 0x2f) + uVar15 != pbVar1);
          }
          do {
            pbVar12 = pbVar10 + 1;
            if (*pbVar12 == uVar11) {
              pbVar18 = pbVar18 + 1;
              if (pbVar10[-0x1f] == 0) {
                iVar16 = 1;
              }
              else {
                iVar16 = 2;
              }
              pbVar13 = pbVar13 + iVar16;
            }
            pbVar10 = pbVar12;
          } while (pbVar8 + uVar7 != pbVar12);
          if (*(byte *)(param_1 + 5) != 0) {
            pbVar10 = (byte *)(param_1 + 0x8f);
            do {
              pbVar12 = pbVar10 + 1;
              if (*pbVar12 == uVar11) {
                pbVar18 = pbVar18 + 1;
                if (pbVar10[-0x1f] == 0) {
                  iVar16 = 1;
                }
                else {
                  iVar16 = 2;
                }
                pbVar13 = pbVar13 + iVar16;
              }
              pbVar10 = pbVar12;
            } while ((byte *)(param_1 + 0x8f) + *(byte *)(param_1 + 5) != pbVar12);
          }
        } while (uVar11 != 0);
        bVar19 = (char)pbVar18 + *(byte *)(param_1 + 6);
        pbVar13 = pbVar13 + *(byte *)(param_1 + 6);
      }
      bVar6 = *(byte *)(local_50 + uVar9 + 3);
      goto LAB_140227aa;
    }
LAB_140227e0:
    uVar9 = (uint)*(byte *)(param_1 + 5);
    if (uVar9 != 0) {
      pcVar17 = (char *)(param_1 + 0x6f);
      do {
        uVar11 = (uint)(byte)pcVar17[0x21];
        pcVar20 = pcVar17 + 1;
        cVar3 = *pcVar20;
        if ((cVar3 == cVar14) && ((byte)pcVar17[0x11] == param_3)) {
          local_74 = (byte *)((uVar11 & 0xf) << 4 | 3);
          pbVar18 = local_68[uVar11];
          bVar19 = (byte)pbVar18;
          pbVar13 = local_68[uVar11 + 3];
          if (uVar11 != 0) {
            pbVar8 = (byte *)(param_1 + 0x8f);
            uVar5 = uVar11;
            do {
              uVar5 = uVar5 - 1;
              if (uVar15 != 0) {
                pbVar10 = (byte *)(param_1 + 0x2f);
                do {
                  pbVar12 = pbVar10 + 1;
                  if (*pbVar12 == uVar5) {
                    pbVar18 = pbVar18 + 1;
                    if (pbVar10[-0x1f] == 0) {
                      iVar16 = 1;
                    }
                    else {
                      iVar16 = 2;
                    }
                    pbVar13 = pbVar13 + iVar16;
                  }
                  pbVar10 = pbVar12;
                } while ((byte *)(param_1 + 0x2f) + uVar15 != pbVar12);
              }
              pbVar10 = pbVar8;
              if (uVar7 != 0) {
                pbVar12 = (byte *)(param_1 + 0x5f);
                do {
                  pbVar1 = pbVar12 + 1;
                  if (*pbVar1 == uVar5) {
                    pbVar18 = pbVar18 + 1;
                    if (pbVar12[-0x1f] == 0) {
                      iVar16 = 1;
                    }
                    else {
                      iVar16 = 2;
                    }
                    pbVar13 = pbVar13 + iVar16;
                  }
                  pbVar12 = pbVar1;
                } while ((byte *)(param_1 + 0x5f) + uVar7 != pbVar1);
              }
              do {
                pbVar12 = pbVar10 + 1;
                if (*pbVar12 == uVar5) {
                  pbVar18 = pbVar18 + 1;
                  if (pbVar10[-0x1f] == 0) {
                    iVar16 = 1;
                  }
                  else {
                    iVar16 = 2;
                  }
                  pbVar13 = pbVar13 + iVar16;
                }
                pbVar10 = pbVar12;
              } while (pbVar8 + uVar9 != pbVar12);
            } while (uVar5 != 0);
            bVar19 = (char)pbVar18 + *(byte *)(param_1 + 6);
            pbVar13 = pbVar13 + *(byte *)(param_1 + 6);
          }
          bVar6 = *(byte *)(local_50 + uVar11 + 6);
LAB_140227aa:
          pbVar13[param_5] = bVar2;
          pbVar13[param_6] = (byte)local_74;
          pbVar13[param_7] = bVar6;
          if (cVar14 != '\0') {
            pbVar13[param_5 + 1] = bVar2 + 1;
            pbVar13[param_6 + 1] = (byte)local_74;
            pbVar13[param_7 + 1] = bVar6 + 1;
          }
          uVar4 = 1;
          *param_9 = bVar19;
          param_2 = local_74;
          goto LAB_1402233c;
        }
        local_68[uVar11] = local_68[uVar11] + 1;
        if (cVar3 == '\0') {
          local_68[uVar11 + 3] = local_68[uVar11 + 3] + 1;
          param_2 = local_50[uVar11 + 6] + 1;
          local_50[uVar11 + 6] = param_2;
        }
        else {
          local_68[uVar11 + 3] = local_68[uVar11 + 3] + 2;
          param_2 = local_50[uVar11 + 6] + 2;
          local_50[uVar11 + 6] = param_2;
        }
        pcVar17 = pcVar20;
      } while ((char *)(param_1 + 0x6f) + uVar9 != pcVar20);
    }
    break;
  case 2:
    param_2 = (byte *)(uint)*(byte *)(param_1 + 8);
    if (param_2 != (byte *)0x0) {
      pbVar13 = (byte *)(param_1 + 0xbb);
      param_2 = param_2 + (int)pbVar13;
      do {
        pbVar13 = pbVar13 + 1;
        if (*pbVar13 == param_3) goto LAB_140222b4;
      } while (param_2 != pbVar13);
    }
    break;
  case 3:
    if (*(byte *)(param_1 + 3) != 0) {
      pcVar17 = (char *)(param_1 + 0xf);
      pcVar20 = pcVar17 + *(byte *)(param_1 + 3);
      do {
        uVar15 = (uint)(byte)pcVar17[0x21];
        pcVar17 = pcVar17 + 1;
        if (*pcVar17 == '\0') {
          iVar16 = 1;
        }
        else {
          iVar16 = 2;
        }
        local_68[uVar15] = local_68[uVar15] + 1;
        local_68[uVar15 + 3] = local_68[uVar15 + 3] + iVar16;
      } while (pcVar17 != pcVar20);
    }
    if (*(byte *)(param_1 + 4) != 0) {
      pcVar17 = (char *)(param_1 + 0x3f);
      pcVar20 = pcVar17 + *(byte *)(param_1 + 4);
      do {
        uVar15 = (uint)(byte)pcVar17[0x21];
        pcVar17 = pcVar17 + 1;
        if (*pcVar17 == '\0') {
          iVar16 = 1;
        }
        else {
          iVar16 = 2;
        }
        local_68[uVar15] = local_68[uVar15] + 1;
        local_68[uVar15 + 3] = local_68[uVar15 + 3] + iVar16;
      } while (pcVar17 != pcVar20);
    }
    param_2 = (byte *)0x0;
    if (*(byte *)(param_1 + 5) != 0) {
      pcVar17 = (char *)(param_1 + 0x6f);
      pcVar20 = pcVar17 + *(byte *)(param_1 + 5);
      do {
        uVar15 = (uint)(byte)pcVar17[0x21];
        param_2 = abStack_28 + uVar15 * 4;
        pcVar17 = pcVar17 + 1;
        if (*pcVar17 == '\0') {
          iVar16 = 1;
        }
        else {
          iVar16 = 2;
        }
        local_68[uVar15] = local_68[uVar15] + 1;
        local_68[uVar15 + 3] = local_68[uVar15 + 3] + iVar16;
      } while (pcVar20 != pcVar17);
    }
    if ((byte *)(uint)*(byte *)(param_1 + 6) != (byte *)0x0) {
      param_2 = (byte *)0x0;
      pbVar13 = (byte *)(param_1 + 0x9f);
      do {
        pbVar13 = pbVar13 + 1;
        pbVar18 = local_68[3] + (int)param_2;
        if (*pbVar13 == param_3) {
          pbVar18[param_5] = bVar2;
          *param_9 = (char)local_68[0] + (byte)param_2;
          uVar4 = 1;
          pbVar18[param_6] = 4;
          pbVar18[param_7] = (byte)param_2;
          goto LAB_1402233c;
        }
        param_2 = param_2 + 1;
      } while ((byte *)(uint)*(byte *)(param_1 + 6) != param_2);
    }
    break;
  case 4:
    param_2 = (byte *)(uint)*(byte *)(param_1 + 7);
    if (param_2 != (byte *)0x0) {
      pbVar13 = (byte *)(param_1 + 0xa3);
      param_2 = param_2 + (int)pbVar13;
      do {
        pbVar13 = pbVar13 + 1;
        if (*pbVar13 == param_3) goto LAB_140222b4;
      } while (pbVar13 != param_2);
    }
  }
switchD_14022392_default:
  uVar4 = 0;
LAB_1402233c:
  if ((*DAT_14022574 ^ local_2c) == 0) {
    return;
  }
  lVar21 = FUN_14024a44(uVar4,param_2,*DAT_14022574 ^ local_2c,0);
  do {
    while( true ) {
      uVar15 = (uint)((ulonglong)lVar21 >> 0x20);
      iVar16 = (int)lVar21;
      if ((*(byte *)(iVar16 + 0x21) <= uVar15) || (*(byte *)(iVar16 + uVar15 + 0x22) <= extraout_r2)
         ) break;
      lVar21 = CONCAT44(uVar15 + extraout_r2,
                        *(undefined4 *)(iVar16 + (uVar15 + extraout_r2) * 0x10 + 0xc));
    }
    lVar21 = (ulonglong)uVar15 << 0x20;
  } while( true );
LAB_14022412:
  local_68[uVar7] = local_68[uVar7] + 1;
  if (cVar3 == '\0') {
    local_68[uVar7 + 3] = local_68[uVar7 + 3] + 1;
    param_2 = local_50[uVar7] + 1;
    local_50[uVar7] = param_2;
  }
  else {
    local_68[uVar7 + 3] = local_68[uVar7 + 3] + 2;
    param_2 = local_50[uVar7] + 2;
    local_50[uVar7] = param_2;
  }
  pcVar17 = pcVar20;
  if (pcVar20 == (char *)(param_1 + 0xf) + uVar15) goto LAB_14022666;
  goto LAB_14022404;
LAB_140226a2:
  local_68[uVar9] = local_68[uVar9] + 1;
  if (cVar3 == '\0') {
    local_68[uVar9 + 3] = local_68[uVar9 + 3] + 1;
    param_2 = local_50[uVar9 + 3] + 1;
    local_50[uVar9 + 3] = param_2;
  }
  else {
    local_68[uVar9 + 3] = local_68[uVar9 + 3] + 2;
    param_2 = local_50[uVar9 + 3] + 2;
    local_50[uVar9 + 3] = param_2;
  }
  pcVar17 = pcVar20;
  if ((char *)(param_1 + 0x3f) + uVar7 == pcVar20) goto LAB_140227e0;
  goto LAB_14022696;
}

