/* FUN_2c4cf910 @ 0x2c4cf910 */

int FUN_2c4cf910(uint *param_1,uint param_2,int param_3,int param_4,int param_5)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  byte *pbVar13;
  char cVar14;
  undefined1 uVar15;
  uint uVar16;
  uint *puVar17;
  uint *puVar18;
  uint uVar19;
  uint uVar20;
  byte bVar21;
  uint uVar22;
  char *pcVar23;
  undefined4 *puVar24;
  int iVar25;
  uint *puVar26;
  undefined4 *puVar27;
  uint uVar28;
  uint *puVar29;
  bool bVar30;
  bool bVar31;
  int local_1ec;
  uint local_1e8;
  uint local_1dc;
  char *local_1d4;
  uint *local_1d0;
  char *local_1c8;
  int local_1c0;
  undefined1 local_1ad;
  char local_1ac [64];
  int aiStack_16c [21];
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 local_44;
  undefined4 uStack_40;
  int local_34;
  
  local_34 = *DAT_2c4cfbcc;
  puVar1 = (uint *)FUN_2c4d28f4(param_1[5],0,param_3,0);
  puVar1[10] = (uint)param_1;
  if (puVar1[9] == 0) {
    FUN_2c4d766c(puVar1 + 2,puVar1[1]);
  }
  else if (puVar1[1] != 0) {
    FUN_2c4d7598(puVar1 + 2,*puVar1);
  }
  puVar26 = puVar1 + 2;
  *puVar1 = 0;
  puVar1[1] = 0;
  iVar2 = FUN_2c4d76a8(puVar26);
  if ((int)*param_1 < 1) {
    local_1ec = 0x2007;
    goto LAB_2c4cfa50;
  }
  uVar22 = param_1[0xb1];
  iVar3 = FUN_2c4d349c(param_1[5],0);
  if (iVar3 < 0xf) {
    local_1dc = param_2 & 3;
    if (local_1dc != 0) {
      local_1ec = 0;
      FUN_2c4d4b34(param_1 + 0x76);
      goto LAB_2c4cfa6e;
    }
    *(undefined1 *)(param_1 + 0xb) = 0;
    local_1ec = 0x4004;
    FUN_2c4d4b34();
    uVar16 = param_1[0xc];
    local_1dc = uVar16 & 0x300;
    iVar3 = local_1ec;
    if (local_1dc == 0) goto LAB_2c4cfa04;
LAB_2c4cf9a0:
    local_1dc = 0;
    if (1 < (byte)param_1[299]) goto LAB_2c4cfa7a;
LAB_2c4cf9ac:
    uVar16 = uVar16 & 0xfeffffff;
    param_1[0xc] = uVar16;
    if (*(byte *)((int)param_1 + 0x4ad) < 2) goto LAB_2c4cfa86;
    uVar7 = param_1[0xb1];
    uVar22 = (int)uVar7 / (int)(uint)*(byte *)((int)param_1 + 0x4ad);
  }
  else {
    FUN_2c4d4b34(param_1 + 0x76);
    local_1dc = param_2 & 3;
    if (local_1dc == 0) {
      uVar16 = param_1[0xc];
      local_1dc = uVar16 & 0x300;
      local_1ec = 0;
      iVar3 = 0;
      if (local_1dc != 0) goto LAB_2c4cf9a0;
LAB_2c4cfa04:
      local_1ec = iVar3;
      if (param_1[0xb4] == 0) {
        param_1[0x69] = 0xffffffff;
        *(undefined2 *)(param_1 + 0x6a) = 0xffff;
        *(undefined2 *)((int)param_1 + 0x1a2) = 0xffff;
        iVar3 = FUN_2c4d4b50(param_1 + 0x76);
        if (iVar3 == 0) {
          puVar17 = (uint *)((int)param_1 + 0x127);
          do {
            puVar17 = (uint *)((int)puVar17 + 1);
            *(undefined1 *)puVar17 = 0xff;
          } while (param_1 + 0x59 != puVar17);
        }
        goto LAB_2c4cfa6e;
      }
    }
    else {
      local_1ec = 0;
LAB_2c4cfa6e:
      uVar16 = param_1[0xc];
    }
    if ((byte)param_1[299] < 2) goto LAB_2c4cf9ac;
LAB_2c4cfa7a:
    if (-1 < (int)(uVar16 << 0x1b)) goto LAB_2c4cf9ac;
    uVar16 = uVar16 | 0x1000000;
    param_1[0xc] = uVar16;
LAB_2c4cfa86:
    uVar7 = param_1[0xb1];
  }
  if ((int)uVar7 < 1) {
LAB_2c4cf9c8:
    local_1ec = 0x2008;
    goto LAB_2c4cfa50;
  }
  puVar17 = param_1 + 0x76;
  if (uVar22 != 24000) {
    if ((int)uVar22 < 0x5dc1) {
      if (uVar22 != 12000) {
        if ((int)uVar22 < 0x2ee1) {
          if ((uVar22 != 8000) && ((uVar22 != 0x2b11 && (uVar22 != 0x1cb6)))) {
LAB_2c4cfabc:
            if ((uVar16 & 0x4300) == 0) goto LAB_2c4cf9c8;
          }
        }
        else if ((uVar22 != 16000) && (uVar22 != 0x5622)) goto LAB_2c4cfabc;
      }
    }
    else if (uVar22 != 64000) {
      if ((int)uVar22 < 0xfa01) {
        if ((uVar22 != 0xac44) && ((uVar22 != 48000 && (uVar22 != 32000)))) goto LAB_2c4cfabc;
      }
      else if ((uVar22 != DAT_2c4d07e8) && (uVar22 != DAT_2c4d07ec)) goto LAB_2c4cfabc;
    }
  }
  if (((int)(param_2 << 0x1c) < 0) && ((uVar16 & 0x100) == 0)) {
    if (0 < (int)*param_1) {
      puVar29 = param_1 + 0xcf;
      iVar3 = 0;
      do {
        puVar29 = puVar29 + 1;
        iVar3 = iVar3 + 1;
        FUN_2c674268(*(undefined4 *)*puVar29,0,0xc00);
      } while (iVar3 < (int)*param_1);
    }
    if (0 < (int)param_1[0xb4]) {
      FUN_2c4d4b3c(puVar17);
    }
  }
  puVar29 = param_1 + 0x4a;
  iVar3 = 0;
  local_1ad = 0;
  FUN_2c674268(aiStack_16c,0,0x54);
  uVar22 = 0xffffffff;
  local_1c0 = 0;
  bVar31 = false;
  local_1c8 = (char *)0x0;
  if (local_1dc == 0) {
    cVar14 = (char)param_1[0xb];
    puVar18 = puVar29;
    uVar16 = 7;
    while (cVar14 != '\0') {
      uVar7 = param_1[0xc];
      if ((uVar7 & 0x4358) == 0) {
        uVar7 = puVar1[1];
        uVar22 = 3 - uVar7;
        bVar21 = 0;
        if ((int)uVar22 < 1) {
          uVar22 = *puVar1;
        }
        else {
          bVar21 = 0;
          if (uVar22 != 0x20) {
            bVar21 = (byte)(*puVar1 << (uVar22 & 0xff));
          }
          uVar22 = FUN_2c4d74d4(puVar26);
          *puVar1 = uVar22;
          uVar7 = puVar1[1] + 0x20;
        }
        iVar4 = DAT_2c4d029c;
        uVar7 = uVar7 - 3;
        puVar1[1] = uVar7;
        uVar22 = (uint)(char)(((byte)(uVar22 >> (uVar7 & 0xff)) | bVar21) &
                             (byte)*(undefined4 *)(iVar4 + 0xc));
        if (puVar1[9] != 0) goto LAB_2c4cfb6c;
LAB_2c4d01a8:
        FUN_2c4d766c(puVar26);
      }
      else {
        if (0x3c < iVar3) {
          bVar30 = uVar22 != 7;
          *(undefined1 *)(param_1 + 0xb) = 0;
          local_1ec = 0x4002;
          goto LAB_2c4cfbf0;
        }
        uVar22 = (uint)(char)*puVar18;
        uVar7 = puVar1[1];
        if (puVar1[9] == 0) goto LAB_2c4d01a8;
LAB_2c4cfb6c:
        if (uVar7 != 0) {
          FUN_2c4d7598(puVar26,*puVar1,uVar7);
        }
      }
      *puVar1 = 0;
      puVar1[1] = 0;
      iVar4 = FUN_2c4d76a8(puVar26);
      if (iVar4 < 0) {
        *(undefined1 *)(param_1 + 0xb) = 0;
      }
      switch(uVar22) {
      case 0:
      case 1:
      case 3:
      case 0x10:
      case 0x11:
      case 0x12:
        if (iVar3 < 0x3d) {
          switch(uVar22) {
          case 0:
          case 3:
          case 0x10:
          case 0x12:
            uVar16 = 0;
            iVar4 = 1;
            break;
          case 1:
            uVar16 = 1;
            iVar4 = 2;
            break;
          default:
            uVar16 = 0xffffffff;
            iVar4 = 0;
            break;
          case 0x11:
            bVar30 = (char)puVar18[0xcc] == '\x01';
            if (bVar30) {
              iVar4 = 1;
            }
            else {
              iVar4 = 2;
            }
            uVar16 = (uint)!bVar30;
          }
          iVar25 = aiStack_16c[uVar22];
          if ((iVar25 < (int)param_1[1] >> (uVar16 & 0xff)) &&
             ((int)local_1c8 <= (int)(param_1[1] - iVar4))) {
            if ((((param_1[0xc] & 0x4300) == 0) && (iVar4 != 0)) &&
               (FUN_2c4d0cf8(param_1[(int)local_1c8 + 200],
                             *(int *)(param_1[(int)local_1c8 + 200] + 0xc4) + 0x10f0), iVar4 != 1))
            {
              FUN_2c4d0cf8(param_1[(int)local_1c8 + 0xc9],
                           *(int *)(param_1[(int)local_1c8 + 0xc9] + 0xc4) + 0x10f0);
            }
            if ((char)param_1[0xb] != '\0') {
              local_1ec = FUN_2c4ccef8(puVar1,param_1 + (int)local_1c8 + 200,
                                       param_1 + (int)local_1c8 + 0xd0,(int)(short)param_1[0xb3],
                                       param_1 + 6,param_1[0xc],param_1[iVar3 + 0xd],param_1[0xb6],
                                       iVar4,(int)(char)param_1[0xbc],param_1[5]);
              if (local_1ec == 0) {
                if ((char)param_1[0xb] != '\0') {
                  iVar6 = FUN_2c4d5aa4(puVar17,param_1[0xb4],
                                       *(undefined1 *)(param_1[(int)local_1c8 + 200] + 0xbc),
                                       local_1c8,(int)param_1 + 0x1a2,(int)param_1 + 0x1b2,
                                       (int)param_1 + 0x1ba,8,&local_1ad,puVar29,uVar22);
                  if (iVar6 == 0) {
                    *(undefined1 *)(param_1 + 0xb) = 0;
                  }
                  else {
                    local_1c8 = (char *)((int)local_1c8 + iVar4);
                    local_1ac[local_1c0] = (char)uVar22;
                    local_1c0 = local_1c0 + 1;
                  }
                }
              }
              else {
                *(undefined1 *)(param_1 + 0xb) = 0;
              }
            }
            aiStack_16c[uVar22] = iVar25 + 1;
          }
          else {
            *(undefined1 *)(param_1 + 0xb) = 0;
            local_1ec = 0x4004;
          }
        }
        else {
          *(undefined1 *)(param_1 + 0xb) = 0;
          local_1ec = 0x4002;
        }
      case 7:
      case 0x14:
        if (uVar22 == 7) {
          uVar7 = param_1[0xc];
          bVar30 = false;
          goto LAB_2c4cfbf0;
        }
        break;
      default:
        *(undefined1 *)(param_1 + 0xb) = 0;
        local_1ec = 0x4004;
        break;
      case 4:
        FUN_2c4d3c34(param_1[5],0);
        uVar7 = puVar1[1];
        uVar16 = 4 - uVar7;
        if ((int)uVar16 < 1) {
          uVar16 = *puVar1;
          uVar20 = 0;
        }
        else {
          if (uVar16 == 0x20) {
            uVar20 = 0;
          }
          else {
            uVar20 = *puVar1 << (uVar16 & 0xff);
          }
          uVar16 = FUN_2c4d74d4(puVar26);
          *puVar1 = uVar16;
          uVar7 = puVar1[1] + 0x20;
        }
        uVar7 = uVar7 - 4;
        uVar11 = uVar16 >> (uVar7 & 0xff);
        uVar19 = 1 - uVar7;
        puVar1[1] = uVar7;
        uVar12 = *(uint *)(DAT_2c4d0050 + 0x10);
        if ((int)uVar19 < 1) {
          uVar19 = 0;
        }
        else {
          if (uVar19 == 0x20) {
            uVar19 = 0;
          }
          else {
            uVar19 = uVar16 << (uVar19 & 0xff);
          }
          uVar16 = FUN_2c4d74d4(puVar26);
          *puVar1 = uVar16;
          uVar7 = puVar1[1] + 0x20;
        }
        uVar7 = uVar7 - 1;
        uVar8 = uVar16 >> (uVar7 & 0xff);
        puVar1[1] = uVar7;
        uVar28 = 8 - uVar7;
        uVar9 = *(uint *)(DAT_2c4d0050 + 4);
        if ((int)uVar28 < 1) {
          uVar28 = 0;
        }
        else {
          if (uVar28 == 0x20) {
            uVar28 = 0;
          }
          else {
            uVar28 = uVar16 << (uVar28 & 0xff);
          }
          uVar16 = FUN_2c4d74d4(puVar26);
          uVar7 = puVar1[1] + 0x20;
          *puVar1 = uVar16;
        }
        uVar7 = uVar7 - 8;
        puVar1[1] = uVar7;
        uVar10 = *(uint *)(DAT_2c4d0050 + 0x20);
        uVar28 = (uVar16 >> (uVar7 & 0xff) | uVar28) & uVar10;
        if (uVar28 == 0xff) {
          uVar28 = 8 - uVar7;
          if ((int)uVar28 < 1) {
            uVar28 = 0;
          }
          else {
            if (uVar28 == 0x20) {
              uVar28 = 0;
            }
            else {
              uVar28 = uVar16 << (uVar28 & 0xff);
            }
            uVar16 = FUN_2c4d74d4(puVar26);
            uVar7 = puVar1[1] + 0x20;
            *puVar1 = uVar16;
          }
          puVar1[1] = uVar7 - 8;
          uVar28 = ((uVar16 >> (uVar7 - 8 & 0xff) | uVar28) & uVar10) + 0xff;
        }
        if (((uVar8 | uVar19) & uVar9) != 0) {
          if (puVar1[9] == 0) {
            FUN_2c4d766c(puVar26,puVar1[1]);
            uVar16 = puVar1[9];
LAB_2c4d0896:
            *puVar1 = 0;
            puVar1[1] = 0;
            if (uVar16 == 0) {
              iVar4 = FUN_2c4d76a8(puVar26);
              FUN_2c4d768c(puVar26,iVar4 - iVar2 & 7,(char)puVar1[9]);
              goto LAB_2c4cfe38;
            }
          }
          else {
            if (puVar1[1] != 0) {
              FUN_2c4d7598(puVar26,*puVar1);
              uVar16 = puVar1[9];
              goto LAB_2c4d0896;
            }
            *puVar1 = 0;
          }
          iVar4 = FUN_2c4d76a8(puVar26);
          FUN_2c4d7598(puVar26,0,iVar2 - iVar4 & 7);
        }
LAB_2c4cfe38:
        if (uVar28 != 0) {
          uVar16 = puVar1[1];
          do {
            if (0 < (int)(8 - uVar16)) {
              uVar16 = FUN_2c4d74d4(puVar26);
              *puVar1 = uVar16;
              uVar16 = puVar1[1] + 0x20;
            }
            uVar16 = uVar16 - 8;
            uVar28 = uVar28 - 1;
            puVar1[1] = uVar16;
          } while (uVar28 != 0);
        }
        FUN_2c4d5aa4(puVar17,param_1[0xb4],(uVar20 | uVar11) & uVar12 & 0xff,0,(int)param_1 + 0x1a2,
                     (int)param_1 + 0x1b2,(int)param_1 + 0x1ba,8,&local_1ad,puVar29,4);
        break;
      case 5:
        uVar16 = param_1[0xb4];
        uVar7 = param_1[5];
        FUN_2c4d4b3c(&local_118);
        uVar5 = FUN_2c4d3c34(uVar7,0);
        FUN_2c4d4b5c(&local_118,puVar1,iVar2);
        FUN_2c4d3c50(uVar7,uVar5);
        iVar4 = FUN_2c4d4b50(&local_118);
        if ((iVar4 != 0) && (local_118._1_1_ == '\x01')) {
          iVar4 = FUN_2c4d4b50(puVar17);
          if ((iVar4 == 0) && (uVar16 != 0)) {
            FUN_2c4d58e4(puVar17,uVar16);
          }
          iVar4 = FUN_2c4d4b50(puVar17);
          if (iVar4 != 0) {
            iVar4 = FUN_2c4d58b8(puVar17,&local_118);
            if (iVar4 == 1) {
              FUN_2c674668(puVar17,&local_118,0xd1);
              bVar31 = true;
            }
            else {
              if ((iVar4 != 2) && (iVar4 != -1)) goto LAB_2c4cfd68;
              *(undefined1 *)(param_1 + 0xb) = 0;
              bVar31 = false;
              local_1ec = 0x4002;
            }
            break;
          }
        }
LAB_2c4cfd68:
        bVar31 = true;
        break;
      case 6:
        uVar20 = puVar1[1];
        uVar7 = 4 - uVar20;
        if ((int)uVar7 < 1) {
          uVar7 = *puVar1;
          uVar11 = 0;
        }
        else {
          if (uVar7 == 0x20) {
            uVar11 = 0;
          }
          else {
            uVar11 = *puVar1 << (uVar7 & 0xff);
          }
          uVar7 = FUN_2c4d74d4(puVar26);
          uVar20 = puVar1[1] + 0x20;
          *puVar1 = uVar7;
        }
        uVar20 = uVar20 - 4;
        puVar1[1] = uVar20;
        uVar12 = *(uint *)(DAT_2c4d0050 + 0x10);
        uVar11 = (uVar7 >> (uVar20 & 0xff) | uVar11) & uVar12;
        if (uVar11 == 0xf) {
          uVar11 = 8 - uVar20;
          if ((int)uVar11 < 1) {
            uVar11 = 0;
          }
          else {
            if (uVar11 == 0x20) {
              uVar11 = 0;
            }
            else {
              uVar11 = uVar7 << (uVar11 & 0xff);
            }
            uVar7 = FUN_2c4d74d4(puVar26);
            *puVar1 = uVar7;
            uVar20 = puVar1[1] + 0x20;
          }
          puVar1[1] = uVar20 - 8;
          uVar11 = ((uVar11 | uVar7 >> (uVar20 - 8 & 0xff)) & *(uint *)(DAT_2c4d07f0 + 0x20)) + 0xe;
        }
        iVar4 = uVar11 * 8;
        if (iVar4 < 1) break;
        if (iVar4 < 4) {
          local_1ec = 0x4002;
LAB_2c4d0162:
          *(undefined1 *)(param_1 + 0xb) = 0;
          break;
        }
        if (puVar1[9] == 0) {
          FUN_2c4d766c(puVar26,puVar1[1]);
        }
        else if (puVar1[1] != 0) {
          FUN_2c4d7598(puVar26,*puVar1);
        }
        *puVar1 = 0;
        puVar1[1] = 0;
        iVar25 = FUN_2c4d76a8(puVar26);
        if (iVar4 - iVar25 != 0 && iVar25 <= iVar4) {
          local_1ec = 0x4004;
          goto LAB_2c4d0162;
        }
        uVar7 = puVar1[1];
        uVar20 = 4 - uVar7;
        if ((int)uVar20 < 1) {
          uVar20 = *puVar1;
          uVar11 = 0;
        }
        else {
          if (uVar20 == 0x20) {
            uVar11 = 0;
          }
          else {
            uVar11 = *puVar1 << (uVar20 & 0xff);
          }
          uVar20 = FUN_2c4d74d4(puVar26);
          uVar7 = puVar1[1] + 0x20;
          *puVar1 = uVar20;
        }
        uVar7 = uVar7 - 4;
        puVar1[1] = uVar7;
        uVar19 = iVar4 - 4;
        uVar11 = (uVar20 >> (uVar7 & 0xff) | uVar11) & uVar12 & 0xff;
        if (((int)(param_1[0xc] << 0x1b) < 0) && (uVar11 - 0xd < 2)) {
switchD_2c4cff58_caseD_3:
          uVar16 = puVar1[9];
          if (uVar19 < uVar7) {
            if (uVar16 == 0) {
              puVar1[1] = uVar7 - uVar19;
              local_1ec = 0;
              break;
            }
LAB_2c4cff78:
            FUN_2c4d7598(puVar26,uVar20,uVar7);
            uVar16 = puVar1[9];
          }
          else {
LAB_2c4d05ac:
            if (uVar16 != 0) {
              if (uVar7 != 0) goto LAB_2c4cff78;
              goto LAB_2c4cff88;
            }
LAB_2c4d05ae:
            FUN_2c4d766c(puVar26);
            uVar16 = puVar1[9];
          }
        }
        else {
          switch(uVar11) {
          case 1:
            uVar16 = 4 - uVar7;
            if ((int)uVar16 < 1) {
              uVar16 = 0;
            }
            else {
              if (uVar16 == 0x20) {
                uVar16 = 0;
              }
              else {
                uVar16 = uVar20 << (uVar16 & 0xff);
              }
              uVar20 = FUN_2c4d74d4(puVar26);
              uVar7 = puVar1[1] + 0x20;
              *puVar1 = uVar20;
            }
            uVar7 = uVar7 - 4;
            iVar4 = (iVar4 >> 3) + -1;
            puVar1[1] = uVar7;
            if (((uVar20 >> (uVar7 & 0xff) | uVar16) & uVar12) == 0) {
              do {
                if (iVar4 < 1) {
                  local_1ec = 0;
                  goto LAB_2c4cfd02;
                }
                uVar7 = puVar1[1];
                uVar16 = 8 - uVar7;
                if ((int)uVar16 < 1) {
                  uVar20 = *puVar1;
                  uVar16 = 0;
                }
                else {
                  if (uVar16 == 0x20) {
                    uVar16 = 0;
                  }
                  else {
                    uVar16 = *puVar1 << (uVar16 & 0xff);
                  }
                  uVar20 = FUN_2c4d74d4(puVar26);
                  *puVar1 = uVar20;
                  uVar7 = puVar1[1] + 0x20;
                }
                uVar7 = uVar7 - 8;
                iVar4 = iVar4 + -1;
                uVar11 = *(uint *)(DAT_2c4d029c + 0x20);
                puVar1[1] = uVar7;
              } while (((uVar20 >> (uVar7 & 0xff) | uVar16) & uVar11) == 0xa5);
              uVar19 = iVar4 * 8;
            }
            break;
          case 2:
          case 4:
          case 9:
          case 0xb:
          case 0xc:
switchD_2c4cff58_caseD_2:
            uVar16 = puVar1[9];
            if (uVar7 <= uVar19) goto LAB_2c4d05ac;
            if (uVar16 != 0) goto LAB_2c4cff78;
            goto LAB_2c4d05c8;
          default:
            goto switchD_2c4cff58_caseD_3;
          case 0xd:
          case 0xe:
            if (((uVar16 & 0xff) < 0x13) && ((DAT_2c4d0054 >> (uVar16 & 0xff) & 1) != 0))
            goto switchD_2c4cff58_caseD_2;
          }
          uVar16 = puVar1[9];
          if (uVar19 < uVar7) {
            if (uVar16 == 0) {
LAB_2c4d05c8:
              local_1ec = 0;
              puVar1[1] = uVar7 - uVar19;
              break;
            }
          }
          else {
            if (uVar16 == 0) goto LAB_2c4d05ae;
            if (uVar7 == 0) goto LAB_2c4cff88;
          }
          FUN_2c4d7598(puVar26,*puVar1,uVar7);
          uVar16 = puVar1[9];
        }
LAB_2c4cff88:
        *puVar1 = 0;
        puVar1[1] = 0;
        FUN_2c4d768c(puVar26,uVar19,uVar16 & 0xff);
        local_1ec = 0;
      }
LAB_2c4cfd02:
      iVar3 = iVar3 + 1;
      puVar18 = (uint *)((int)puVar18 + 1);
      uVar16 = uVar22;
      cVar14 = (char)param_1[0xb];
    }
    bVar30 = uVar22 != 7;
    uVar7 = param_1[0xc];
LAB_2c4cfbf0:
    if (((uVar7 & 0x4100) == 0) || (param_1[param_1[0x534] + 0x530] != 0)) {
      if (puVar1[9] == 0) {
        FUN_2c4d766c(puVar26,puVar1[1]);
        uVar22 = puVar1[9];
LAB_2c4d0986:
        *puVar1 = 0;
        puVar1[1] = 0;
        if (uVar22 == 0) {
          iVar3 = FUN_2c4d76a8(puVar26);
          FUN_2c4d768c(puVar26,iVar3 - iVar2 & 7,(char)puVar1[9]);
          goto LAB_2c4cfc30;
        }
      }
      else {
        if (puVar1[1] != 0) {
          FUN_2c4d7598(puVar26,*puVar1);
          uVar22 = puVar1[9];
          goto LAB_2c4d0986;
        }
        *puVar1 = 0;
      }
      iVar3 = FUN_2c4d76a8(puVar26);
      FUN_2c4d7598(puVar26,0,iVar2 - iVar3 & 7);
    }
LAB_2c4cfc30:
    iVar2 = FUN_2c4d354c(param_1[5],0);
    if (0 < iVar2) {
      uVar22 = FUN_2c4d349c(param_1[5],0);
      if (param_1[param_1[0x534] + 0x530] != 0) {
        iVar2 = FUN_2c4d354c(param_1[5],0);
        uVar22 = (uVar22 - iVar2) + param_1[param_1[0x534] + 0x530];
      }
      if ((param_1[0xc] & 0x4100) == 0) {
LAB_2c4d09c0:
        if (uVar22 != 0) {
          if (7 < uVar22) goto LAB_2c4d082a;
LAB_2c4d09d0:
          *(undefined1 *)(param_1 + 0xb) = 0;
          goto LAB_2c4d0834;
        }
      }
      else {
        if (uVar22 < 8) {
          if (param_1[param_1[0x534] + 0x530] == 0) goto LAB_2c4cfc40;
          goto LAB_2c4d09c0;
        }
LAB_2c4d082a:
        if ((char)param_1[0xb] == '\0') {
LAB_2c4d0834:
          if (local_1ec == 0) {
            local_1ec = 0x4002;
          }
        }
        else {
          iVar2 = FUN_2c4d2900(param_1[5]);
          if (iVar2 != 0xc) goto LAB_2c4d09d0;
          *(byte *)(param_1 + 0xb) = (byte)((param_1[0xc] << 0x17) >> 0x1f);
          if ((local_1ec == 0) && ((param_1[0xc] & 0x100) == 0)) {
            local_1ec = 0x4002;
          }
        }
        uVar16 = puVar1[1];
        if ((int)uVar22 < 0) {
          uVar20 = uVar16 - uVar22;
          uVar7 = puVar1[9];
          if (uVar20 < 0x20) {
            if (uVar7 == 0) {
              puVar1[1] = uVar20;
              FUN_2c4d766c(puVar26,uVar20);
              *puVar1 = 0;
              puVar1[1] = 0;
              goto LAB_2c4cfc40;
            }
LAB_2c4d0b2c:
            if (uVar16 != 0) {
              FUN_2c4d7598(puVar26,*puVar1,uVar16);
              uVar7 = puVar1[9];
            }
          }
          else {
            if (uVar7 != 0) goto LAB_2c4d0b2c;
            FUN_2c4d766c(puVar26);
            uVar7 = puVar1[9];
          }
          *puVar1 = 0;
          puVar1[1] = 0;
          FUN_2c4d766c(puVar26,-uVar22,uVar7 & 0xff);
        }
        else {
          if (uVar22 < uVar16) {
            if (puVar1[9] == 0) {
              puVar1[1] = uVar16 - uVar22;
              goto LAB_2c4cfc40;
            }
LAB_2c4d085c:
            FUN_2c4d7598(puVar26,*puVar1,uVar16);
            uVar7 = puVar1[9];
          }
          else {
            uVar7 = puVar1[9];
            if (uVar7 == 0) {
              FUN_2c4d766c(puVar26);
              uVar7 = puVar1[9];
            }
            else if (uVar16 != 0) goto LAB_2c4d085c;
          }
          *puVar1 = 0;
          puVar1[1] = 0;
          FUN_2c4d768c(puVar26,uVar22,uVar7 & 0xff);
        }
      }
    }
LAB_2c4cfc40:
    if ((char)param_1[0xb] != '\0') {
      if (bVar30) {
        if (local_1ec == 0) {
          local_1ec = 0x4002;
        }
        *(undefined1 *)(param_1 + 0xb) = 0;
      }
      else if ((char)param_1[0xb] != '\0') {
        local_1ac[local_1c0] = '\a';
      }
    }
  }
  local_1ad = 0;
  iVar2 = 0;
  pcVar23 = local_1ac;
  uVar22 = 0;
  do {
    iVar3 = iVar2;
    uVar16 = uVar22;
    if (local_1dc == 0) {
      if ((char)param_1[0xb] == '\0') {
        cVar14 = (char)*puVar29;
        if (cVar14 != -1) goto LAB_2c4cfc9c;
        local_1ac[iVar3] = '\a';
switchD_2c4d01e0_caseD_ffffffff:
        if ((uVar22 == 0) || ((int)*param_1 < (int)uVar22)) goto LAB_2c4d02b6;
        goto LAB_2c4d02ca;
      }
      iVar2 = (int)*pcVar23;
      switch(iVar2) {
      case 0:
      case 1:
      case 3:
      case 0x10:
      case 0x11:
      case 0x12:
        switch(iVar2) {
        case 0:
        case 3:
        case 0x10:
        case 0x12:
          uVar16 = uVar22 + 1;
          uVar5 = 1;
          break;
        case 1:
switchD_2c4d0218_caseD_1:
          uVar16 = uVar22 + 2;
          uVar5 = 2;
          break;
        default:
          uVar5 = 0;
          break;
        case 0x11:
          if ((char)puVar29[0xcc] != '\x01') goto switchD_2c4d0218_caseD_1;
          uVar16 = uVar22 + 1;
          uVar5 = 1;
        }
        if (*(int *)(param_1[uVar22 + 0xd0] + 0x38) != 0) {
          *(int *)(*(int *)(param_1[uVar22 + 0xd0] + 0x38) + 4) = param_3;
        }
        FUN_2c4ccbc0(param_1 + uVar22 + 200,param_1 + uVar22 + 0xd0,param_1 + 6,param_1[0xc],
                     param_1[iVar3 + 0xd],uVar5);
        bVar30 = 0x3b < iVar3 || iVar2 == 7;
        break;
      default:
        bVar30 = iVar2 == 7 || 0x3b < iVar3;
        break;
      case -1:
        goto switchD_2c4d01e0_caseD_ffffffff;
      }
    }
    else {
      cVar14 = (char)*puVar29;
      if (cVar14 == -1) {
        local_1ac[iVar3] = '\a';
        if ((uVar22 == 0) || ((int)uVar22 <= (int)*param_1)) goto LAB_2c4cfcdc;
        goto LAB_2c4d0114;
      }
LAB_2c4cfc9c:
      *pcVar23 = cVar14;
      bVar30 = cVar14 == '\a';
      if (0x3b < iVar3) {
        bVar30 = true;
      }
    }
    pcVar23 = pcVar23 + 1;
    puVar29 = (uint *)((int)puVar29 + 1);
    iVar2 = iVar3 + 1;
    uVar22 = uVar16;
  } while (!bVar30);
  if ((uVar16 == 0) || ((int)*param_1 < (int)uVar16)) {
LAB_2c4d0114:
    if (local_1dc == 0) {
LAB_2c4d02b6:
      if (local_1ec == 0) {
        *(undefined1 *)(param_1 + 0xb) = 0;
        local_1ec = 0x4004;
        uVar22 = 0;
      }
      else {
        uVar22 = 0;
        *(undefined1 *)(param_1 + 0xb) = 0;
      }
      goto LAB_2c4d02ca;
    }
    if ((char)param_1[0xb] == '\0') goto LAB_2c4cfce6;
LAB_2c4d0126:
    if ((int)(param_2 << 0x1e) < 0) {
      uVar22 = param_1[0x126];
      *(uint *)((int)param_1 + 0x1b2) = param_1[0x127];
      *(uint *)((int)param_1 + 0x1b6) = param_1[0x128];
      *(uint *)((int)param_1 + 0x1ba) = param_1[0x129];
      *(uint *)((int)param_1 + 0x1be) = param_1[0x12a];
    }
    else {
      if ((int)(param_2 << 0x1f) < 0) goto LAB_2c4d02e4;
      param_1[0x126] = uVar22;
      param_1[0x127] = *(uint *)((int)param_1 + 0x1b2);
      param_1[0x128] = *(uint *)((int)param_1 + 0x1b6);
      param_1[0x129] = *(uint *)((int)param_1 + 0x1ba);
      param_1[0x12a] = *(uint *)((int)param_1 + 0x1be);
    }
  }
  else {
    if (local_1dc == 0) {
LAB_2c4d02ca:
      iVar2 = FUN_2c4d3c68(param_1[5]);
      if (iVar2 == 0) goto LAB_2c4cfcdc;
      *(undefined1 *)(param_1 + 0xb) = 0;
      local_1ec = 0x4005;
    }
    else {
LAB_2c4cfcdc:
      if ((char)param_1[0xb] != '\0') goto LAB_2c4d0126;
LAB_2c4cfce6:
      if (local_1ec == 0) {
        local_1ec = 0x4004;
      }
    }
LAB_2c4d02e4:
    uVar16 = *param_1;
    if (0 < (int)uVar16) {
      if (*(byte *)((int)param_1 + 0x14ba) - 1 < 3) {
        param_1[0x126] = uVar16;
      }
      else {
        uVar16 = param_1[0x126];
      }
      *(uint *)((int)param_1 + 0x1b2) = param_1[0x127];
      *(uint *)((int)param_1 + 0x1b6) = param_1[0x128];
      *(uint *)((int)param_1 + 0x1ba) = param_1[0x129];
      *(uint *)((int)param_1 + 0x1be) = param_1[0x12a];
      uVar22 = uVar16;
    }
  }
  param_1[0xb7] = uVar22;
  if (uVar22 == 0) {
    if (bVar31) {
      local_1ec = 5;
      FUN_2c4d4b50(puVar17);
    }
    else {
LAB_2c4d069c:
      local_1ec = 5;
    }
  }
  else {
    uVar16 = local_1ec - 0x4000U & 0xffff;
    if (bVar31) {
      bVar31 = local_1ec != 0 && 0xfff < uVar16;
      FUN_2c4d4b50(puVar17);
    }
    else {
      bVar31 = 0xfff < uVar16;
      if (local_1ec == 0) {
        bVar31 = false;
      }
    }
    if (!bVar31) {
      if (param_1[0xb4] == 0) {
        if (*(char *)((int)param_1 + 0x2a5) == '\0') {
          uVar16 = uVar22;
          if (6 < (int)uVar22) {
            uVar16 = 0;
          }
          *(char *)(param_1 + 0x74) = (char)uVar16;
        }
        iVar2 = FUN_2c4d4b50(puVar17);
        if (iVar2 != 0) {
          FUN_2c4d6158(puVar17,&local_44,8);
        }
      }
      if (0 < (int)uVar22) {
        iVar2 = uVar22 - 1;
        uVar16 = 0;
        puVar24 = &local_44;
        do {
          uVar15 = (char)iVar2;
          if (iVar2 != 0) {
            pbVar13 = (byte *)((int)param_1 + 0x1a1);
            iVar4 = 0;
            do {
              pbVar13 = pbVar13 + 1;
              if (*pbVar13 == uVar16) {
                uVar15 = (char)iVar4;
                break;
              }
              iVar4 = iVar4 + 1;
            } while (iVar4 != iVar2);
          }
          uVar16 = uVar16 + 1;
          *(undefined1 *)puVar24 = uVar15;
          puVar24 = (undefined4 *)((int)puVar24 + 1);
        } while (uVar22 != uVar16);
      }
      local_1d4 = (char *)((int)param_1 + 0x457);
      local_1d0 = param_1 + 0xd;
      pcVar23 = local_1d4 + iVar3 + 1;
      uVar16 = 0;
      local_1e8 = 0;
      local_1c8 = local_1ac;
      do {
        local_1d4 = local_1d4 + 1;
        switch(*local_1c8) {
        case '\0':
        case '\x03':
        case '\x10':
        case '\x12':
LAB_2c4d0484:
          local_1e8 = local_1e8 + 1;
          break;
        case '\x01':
          local_1e8 = local_1e8 + 2;
          break;
        default:
          goto switchD_2c4d03ee_caseD_2;
        case '\x11':
          if (*local_1d4 == '\x01') goto LAB_2c4d0484;
          local_1e8 = local_1e8 + 2;
        }
        if ((int)uVar16 < (int)local_1e8) {
          if ((int)uVar22 <= (int)uVar16) goto LAB_2c4d069c;
          iVar3 = 0;
          iVar2 = 1 - (param_2 & 1);
          puVar1 = param_1 + uVar16 + 200;
          while( true ) {
            uVar20 = *puVar1;
            uVar7 = param_1[*(byte *)((int)&local_44 + uVar16) + 0xd0];
            iVar4 = FUN_2c4d7080(param_1 + 0x71,(uint)*(byte *)((int)&local_44 + uVar16),
                                 (char)param_1[0x74]);
            iVar4 = param_5 * iVar4;
            if ((param_2 & 2) != 0) {
              FUN_2c674268(*(undefined4 *)(uVar20 + 0x94),0,param_1[0xb6] << 2);
            }
            if (param_5 * *param_1 - param_4 != 0 && param_4 <= (int)(param_5 * *param_1)) break;
            if ((((char)param_1[0x52e] == '\0') || (*(char *)((int)param_1 + 0x14b9) < '\x01')) ||
               ((param_2 & 1) != 0)) {
              if (*(char *)(uVar20 + 0xbd) == '\x01') {
                if (*DAT_2c4d07e4 == '\x02') {
                  if (iVar3 == 0) {
                    iVar25 = iVar2;
                    if ((char)param_1[0xb] == '\0') {
                      iVar25 = 0;
                    }
                    FUN_2c4cca80(uVar7,uVar20,param_3 + iVar4 * 2,(int)(short)param_1[0xb6],iVar25,
                                 **(undefined4 **)(uVar20 + 200),*local_1d0,0);
                  }
                }
                else {
                  iVar25 = iVar2;
                  if (*DAT_2c4d07e4 == '\x03') {
                    if (iVar3 != 1) goto LAB_2c4d059e;
                    iVar4 = param_3 + iVar4 * 2;
                    if ((char)param_1[0xb] == '\0') {
                      iVar25 = 0;
                    }
                    iVar6 = 1;
                  }
                  else {
                    iVar4 = param_3 + iVar4 * 2;
                    iVar6 = iVar3;
                    if ((char)param_1[0xb] == '\0') {
                      iVar25 = 0;
                    }
                  }
                  FUN_2c4cca80(uVar7,uVar20,iVar4,(int)(short)param_1[0xb6],iVar25,
                               **(undefined4 **)(uVar20 + 200),*local_1d0,iVar6);
                }
LAB_2c4d059e:
                param_1[0x12d] = param_1[0xb6];
              }
              else {
                local_1ec = 5;
              }
            }
            else {
              FUN_2c674268(param_3 + iVar4 * 2,0,param_1[0xb6] << 1);
            }
            uVar16 = uVar16 + 1;
            iVar3 = iVar3 + 1;
            if (local_1e8 == uVar16) goto switchD_2c4d03ee_caseD_2;
            puVar1 = puVar1 + 1;
            if (uVar22 == uVar16) goto LAB_2c4d069c;
          }
          local_1ec = 0x200c;
        }
switchD_2c4d03ee_caseD_2:
        local_1d0 = local_1d0 + 1;
        local_1c8 = local_1c8 + 1;
      } while (pcVar23 != local_1d4);
      if ((param_1[0xc] & 0x200) == 0) {
        local_118 = *(undefined4 *)((int)param_1 + 0x1b2);
        uStack_114 = *(undefined4 *)((int)param_1 + 0x1b6);
        local_44 = *(undefined4 *)((int)param_1 + 0x1ba);
        uStack_40 = *(undefined4 *)((int)param_1 + 0x1be);
        if (0 < (int)uVar22) {
          uVar16 = 0;
          puVar24 = &local_44;
          puVar27 = &local_118;
          do {
            uVar7 = uVar16 & 0xff;
            uVar16 = uVar16 + 1;
            iVar2 = FUN_2c4d7080(param_1 + 0x71,uVar7,(char)param_1[0x74]);
            *(undefined1 *)((int)param_1 + iVar2 + 0x1b2) = *(undefined1 *)puVar27;
            *(undefined1 *)((int)param_1 + iVar2 + 0x1ba) = *(undefined1 *)puVar24;
            puVar24 = (undefined4 *)((int)puVar24 + 1);
            puVar27 = (undefined4 *)((int)puVar27 + 1);
          } while (uVar22 != uVar16);
        }
      }
      param_1[2] = param_1[2] + 1;
    }
  }
LAB_2c4cfa50:
  if (*DAT_2c4cfbcc != local_34) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return local_1ec;
}

