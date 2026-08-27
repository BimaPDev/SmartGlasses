/* FUN_2c4d5aa4 @ 0x2c4d5aa4 */

/* WARNING: Type propagation algorithm not settling */

void FUN_2c4d5aa4(int param_1,byte *param_2,uint param_3,uint param_4,int param_5,int param_6,
                 int param_7,uint param_8,byte *param_9,int param_10,byte param_11)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  byte *extraout_r1;
  byte bVar7;
  uint uVar8;
  byte *pbVar9;
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
  
  local_2c = *DAT_2c4d5da8;
  uVar15 = (uint)(char)param_11;
  bVar2 = (byte)param_4;
  if (param_2 != (byte *)0x0) {
    uVar8 = (uint)param_11;
    if ((uVar8 < 0x13) && ((DAT_2c4d5dac >> uVar8 & 1) != 0)) {
      bVar19 = *(byte *)(param_1 + 0xd0);
      *param_9 = bVar19;
      uVar5 = (uint)*(char *)(param_10 + (uint)bVar19);
      if ((uVar5 != uVar15) && (2 < uVar8 - 0x10)) {
        if ((param_2 != (byte *)0x2) || (uVar15 != 0)) {
          if ((uVar5 != 3) || (uVar15 != 0)) goto switchD_2c4d5bcc_default;
        }
        else {
          param_2 = (byte *)0x1;
        }
      }
      if (param_4 < 3) {
        *(undefined1 *)(param_6 + param_4) = 1;
        *(byte *)(param_7 + param_4) = bVar2;
      }
      else {
        FUN_2c4d48a0(param_6 + param_4,param_7 + param_4,param_2);
        param_2 = extraout_r1;
      }
      if ((uVar15 & 0xffffffef) == 1) {
        param_2 = (byte *)(uint)*(byte *)(param_6 + param_4);
        *(byte *)(param_6 + param_4 + 1) = *(byte *)(param_6 + param_4);
        *(char *)(param_7 + param_4 + 1) = *(char *)(param_7 + param_4) + '\x01';
      }
      uVar4 = 1;
      *(char *)(param_1 + 0xd0) = *(char *)(param_1 + 0xd0) + '\x01';
      goto LAB_2c4d5ad6;
    }
LAB_2c4d5ad4:
    uVar4 = 1;
    goto LAB_2c4d5ad6;
  }
  if ((*(char *)(param_1 + 0xcd) == '\0') || (param_8 < *(byte *)(param_1 + 0xce))) {
    if (2 < param_11 - 0x10) {
      if ((1 < param_11) && (uVar15 != 3)) goto LAB_2c4d5ad4;
      *(byte *)(param_10 + (uint)*(byte *)(param_1 + 0xd0)) = param_11;
    }
    bVar2 = *(byte *)(param_1 + 0xd0);
    uVar4 = 1;
    *(byte *)(param_1 + 0xd0) = bVar2 + 1;
    *param_9 = bVar2;
    goto LAB_2c4d5ad6;
  }
  local_68[0] = param_2;
  local_68[3] = param_2;
  local_50[0] = param_2;
  local_50[3] = param_2;
  local_38 = param_2;
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
  switch(uVar15) {
  case 0:
    cVar14 = '\0';
    goto SUB_2c4d5be6;
  case 1:
    cVar14 = '\x01';
SUB_2c4d5be6:
    uVar15 = (uint)*(byte *)(param_1 + 3);
    if (uVar15 != 0) {
      pcVar17 = (char *)(param_1 + 0xf);
LAB_2c4d5c16:
      uVar8 = (uint)(byte)pcVar17[0x21];
      pcVar20 = pcVar17 + 1;
      cVar3 = *pcVar20;
      if ((cVar3 != cVar14) || ((byte)pcVar17[0x11] != param_3)) goto LAB_2c4d5c24;
      local_74 = (byte *)((uVar8 & 0xf) << 4 | 1);
      pbVar18 = local_68[uVar8];
      bVar19 = (byte)pbVar18;
      pbVar13 = local_68[uVar8 + 3];
      if (uVar8 != 0) {
        uVar5 = uVar8;
        do {
          uVar5 = uVar5 - 1;
          pbVar9 = (byte *)(param_1 + 0x2f);
          do {
            pbVar10 = pbVar9 + 1;
            if (*pbVar10 == uVar5) {
              pbVar18 = pbVar18 + 1;
              if (pbVar9[-0x1f] == 0) {
                iVar16 = 1;
              }
              else {
                iVar16 = 2;
              }
              pbVar13 = pbVar13 + iVar16;
            }
            pbVar9 = pbVar10;
          } while ((byte *)(param_1 + 0x2f) + uVar15 != pbVar10);
          if (*(byte *)(param_1 + 4) != 0) {
            pbVar9 = (byte *)(param_1 + 0x5f);
            do {
              pbVar10 = pbVar9 + 1;
              if (*pbVar10 == uVar5) {
                pbVar18 = pbVar18 + 1;
                if (pbVar9[-0x1f] == 0) {
                  iVar16 = 1;
                }
                else {
                  iVar16 = 2;
                }
                pbVar13 = pbVar13 + iVar16;
              }
              pbVar9 = pbVar10;
            } while ((byte *)(param_1 + 0x5f) + *(byte *)(param_1 + 4) != pbVar10);
          }
          if (*(byte *)(param_1 + 5) != 0) {
            pbVar9 = (byte *)(param_1 + 0x8f);
            do {
              pbVar10 = pbVar9 + 1;
              if (*pbVar10 == uVar5) {
                pbVar18 = pbVar18 + 1;
                if (pbVar9[-0x1f] == 0) {
                  iVar16 = 1;
                }
                else {
                  iVar16 = 2;
                }
                pbVar13 = pbVar13 + iVar16;
              }
              pbVar9 = pbVar10;
            } while ((byte *)(param_1 + 0x8f) + *(byte *)(param_1 + 5) != pbVar10);
          }
        } while (uVar5 != 0);
        bVar19 = (char)pbVar18 + *(byte *)(param_1 + 6);
        pbVar13 = pbVar13 + *(byte *)(param_1 + 6);
      }
      bVar7 = *(byte *)(local_50 + uVar8);
      goto LAB_2c4d5fc4;
    }
LAB_2c4d5e7e:
    uVar8 = (uint)*(byte *)(param_1 + 4);
    if (uVar8 != 0) {
      pcVar17 = (char *)(param_1 + 0x3f);
LAB_2c4d5eae:
      uVar5 = (uint)(byte)pcVar17[0x21];
      pcVar20 = pcVar17 + 1;
      cVar3 = *pcVar20;
      if ((cVar3 != cVar14) || ((byte)pcVar17[0x11] != param_3)) goto LAB_2c4d5eba;
      local_74 = (byte *)((uVar5 & 0xf) << 4 | 2);
      pbVar18 = local_68[uVar5];
      bVar19 = (byte)pbVar18;
      pbVar13 = local_68[uVar5 + 3];
      if (uVar5 != 0) {
        pbVar9 = (byte *)(param_1 + 0x5f);
        uVar11 = uVar5;
        do {
          uVar11 = uVar11 - 1;
          pbVar10 = pbVar9;
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
          } while (pbVar9 + uVar8 != pbVar12);
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
      bVar7 = *(byte *)(local_50 + uVar5 + 3);
      goto LAB_2c4d5fc4;
    }
LAB_2c4d5ff8:
    uVar5 = (uint)*(byte *)(param_1 + 5);
    if (uVar5 != 0) {
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
            pbVar9 = (byte *)(param_1 + 0x8f);
            uVar6 = uVar11;
            do {
              uVar6 = uVar6 - 1;
              if (uVar15 != 0) {
                pbVar10 = (byte *)(param_1 + 0x2f);
                do {
                  pbVar12 = pbVar10 + 1;
                  if (*pbVar12 == uVar6) {
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
              pbVar10 = pbVar9;
              if (uVar8 != 0) {
                pbVar12 = (byte *)(param_1 + 0x5f);
                do {
                  pbVar1 = pbVar12 + 1;
                  if (*pbVar1 == uVar6) {
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
                } while ((byte *)(param_1 + 0x5f) + uVar8 != pbVar1);
              }
              do {
                pbVar12 = pbVar10 + 1;
                if (*pbVar12 == uVar6) {
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
              } while (pbVar9 + uVar5 != pbVar12);
            } while (uVar6 != 0);
            bVar19 = (char)pbVar18 + *(byte *)(param_1 + 6);
            pbVar13 = pbVar13 + *(byte *)(param_1 + 6);
          }
          bVar7 = *(byte *)(local_50 + uVar11 + 6);
LAB_2c4d5fc4:
          pbVar13[param_5] = bVar2;
          pbVar13[param_6] = (byte)local_74;
          pbVar13[param_7] = bVar7;
          if (cVar14 != '\0') {
            pbVar13[param_5 + 1] = bVar2 + 1;
            pbVar13[param_6 + 1] = (byte)local_74;
            pbVar13[param_7 + 1] = bVar7 + 1;
          }
          uVar4 = 1;
          *param_9 = bVar19;
          param_2 = local_74;
          goto LAB_2c4d5ad6;
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
      } while ((char *)(param_1 + 0x6f) + uVar5 != pcVar20);
    }
    break;
  case 2:
    param_2 = (byte *)(uint)*(byte *)(param_1 + 8);
    if (param_2 != (byte *)0x0) {
      pbVar13 = (byte *)(param_1 + 0xbb);
      param_2 = param_2 + (int)pbVar13;
      do {
        pbVar13 = pbVar13 + 1;
        if (*pbVar13 == param_3) goto LAB_2c4d5ad4;
      } while (pbVar13 != param_2);
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
      pbVar13 = (byte *)(param_1 + 0x9f);
      param_2 = (byte *)0x0;
      do {
        pbVar13 = pbVar13 + 1;
        pbVar18 = local_68[3] + (int)param_2;
        if (*pbVar13 == param_3) {
          pbVar18[param_5] = bVar2;
          *param_9 = (char)local_68[0] + (byte)param_2;
          uVar4 = 1;
          pbVar18[param_6] = 4;
          pbVar18[param_7] = (byte)param_2;
          goto LAB_2c4d5ad6;
        }
        param_2 = param_2 + 1;
      } while (param_2 != (byte *)(uint)*(byte *)(param_1 + 6));
    }
    break;
  case 4:
    param_2 = (byte *)(uint)*(byte *)(param_1 + 7);
    if (param_2 != (byte *)0x0) {
      pbVar13 = (byte *)(param_1 + 0xa3);
      param_2 = param_2 + (int)pbVar13;
      do {
        pbVar13 = pbVar13 + 1;
        if (*pbVar13 == param_3) goto LAB_2c4d5ad4;
      } while (pbVar13 != param_2);
    }
  }
switchD_2c4d5bcc_default:
  uVar4 = 0;
LAB_2c4d5ad6:
  if ((*DAT_2c4d5da8 ^ local_2c) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail(uVar4,param_2,*DAT_2c4d5da8 ^ local_2c,0);
LAB_2c4d5c24:
  local_68[uVar8] = local_68[uVar8] + 1;
  if (cVar3 == '\0') {
    local_68[uVar8 + 3] = local_68[uVar8 + 3] + 1;
    param_2 = local_50[uVar8] + 1;
    local_50[uVar8] = param_2;
  }
  else {
    local_68[uVar8 + 3] = local_68[uVar8 + 3] + 2;
    param_2 = local_50[uVar8] + 2;
    local_50[uVar8] = param_2;
  }
  pcVar17 = pcVar20;
  if ((char *)(param_1 + 0xf) + uVar15 == pcVar20) goto LAB_2c4d5e7e;
  goto LAB_2c4d5c16;
LAB_2c4d5eba:
  local_68[uVar5] = local_68[uVar5] + 1;
  if (cVar3 == '\0') {
    local_68[uVar5 + 3] = local_68[uVar5 + 3] + 1;
    param_2 = local_50[uVar5 + 3] + 1;
    local_50[uVar5 + 3] = param_2;
  }
  else {
    local_68[uVar5 + 3] = local_68[uVar5 + 3] + 2;
    param_2 = local_50[uVar5 + 3] + 2;
    local_50[uVar5 + 3] = param_2;
  }
  pcVar17 = pcVar20;
  if ((char *)(param_1 + 0x3f) + uVar8 == pcVar20) goto LAB_2c4d5ff8;
  goto LAB_2c4d5eae;
}

