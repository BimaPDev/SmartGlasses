/* FUN_2c624090 @ 0x2c624090 */

byte * FUN_2c624090(byte *param_1,byte *param_2,byte *param_3,char *param_4,int param_5,int param_6)

{
  int iVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar7;
  int iVar8;
  byte *pbVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  byte bVar13;
  uint uVar14;
  byte *pbVar15;
  undefined1 *puVar16;
  uint uVar17;
  byte *pbVar18;
  byte *pbVar19;
  uint uVar20;
  byte *pbVar21;
  byte *pbVar22;
  ushort *puVar23;
  ushort *extraout_s14;
  ushort *extraout_s14_00;
  ushort *extraout_s14_01;
  ushort *extraout_s14_02;
  ushort *puVar24;
  ushort *extraout_s15;
  ushort *extraout_s15_00;
  ushort *extraout_s15_01;
  ushort *extraout_s15_02;
  byte *local_90;
  ushort local_78;
  ushort local_76;
  ushort local_74;
  ushort local_72;
  undefined1 auStack_70 [64];
  undefined4 local_30;
  uint local_2c;
  byte bVar6;
  
  local_2c = *DAT_2c6243ac;
  cVar2 = *param_4;
  local_90 = (byte *)(param_6 * param_5);
  if (cVar2 == '\x03') {
    if (*(int *)(param_4 + 8) == 0) {
      local_90 = (byte *)0x6b;
      pbVar9 = param_1;
      goto LAB_2c6242fe;
    }
    iVar8 = FUN_2c621d68(param_3,param_4);
    if (iVar8 != 0) {
      iVar8 = *(int *)(param_4 + 4) * ((uint)local_90 >> 3) +
              (*(int *)(param_4 + 4) * ((uint)local_90 & 7) + 7 >> 3);
      goto LAB_2c624436;
    }
LAB_2c6240c8:
    pbVar9 = (byte *)0x0;
    if (*param_3 == 3) {
      uVar17 = *(uint *)(param_3 + 4);
      puVar16 = *(undefined1 **)(param_3 + 8);
      uVar12 = *(uint *)(param_3 + 0xc);
      uVar11 = 1 << (uVar17 & 0xff);
      if (uVar12 == 0) {
        puVar16 = *(undefined1 **)(param_4 + 8);
        uVar12 = *(uint *)(param_4 + 0xc);
        if ((cVar2 == '\x03') && (uVar17 == *(uint *)(param_4 + 4))) {
          pbVar9 = (byte *)FUN_2c62c0d8(param_1,param_2,
                                        uVar17 * ((uint)local_90 >> 3) +
                                        (uVar17 * ((uint)local_90 & 7) + 7 >> 3));
          local_90 = (byte *)0x0;
          goto LAB_2c6242fe;
        }
      }
      if (uVar12 <= uVar11) {
        uVar11 = uVar12;
      }
      pbVar9 = (byte *)FUN_2c62c314(auStack_70,0,0x40);
      local_30 = 0xffffffff;
      if (uVar11 != 0) {
        uVar12 = 0;
        do {
          pbVar9 = (byte *)FUN_2c6218e4(auStack_70,*puVar16,puVar16[1],puVar16[2],puVar16[3],uVar12)
          ;
          if (pbVar9 != (byte *)0x0) {
            bVar13 = *param_3;
            local_90 = pbVar9;
            goto joined_r0x2c6243d6;
          }
          uVar12 = uVar12 + 1;
          puVar16 = puVar16 + 4;
        } while (uVar11 != uVar12);
      }
    }
    uVar11 = *(uint *)(param_4 + 4);
    if (uVar11 == 0x10) {
      iVar8 = *(int *)(param_3 + 4);
      if (iVar8 != 0x10) goto LAB_2c6240d8;
      pbVar15 = local_90;
      if (local_90 == (byte *)0x0) goto LAB_2c624672;
      pbVar21 = (byte *)0x0;
      pbVar15 = param_1;
      pbVar18 = param_1;
      pbVar19 = param_1;
      do {
        local_78 = 0;
        local_76 = 0;
        local_74 = 0;
        local_72 = 0;
        FUN_2c621554(&local_78,&local_76,&local_74);
        bVar13 = *param_3;
        bVar3 = (byte)local_78;
        bVar4 = (byte)(local_78 >> 8);
        if (bVar13 == 0) {
          param_1[(int)pbVar21 * 2] = bVar4;
          param_1[(int)pbVar21 * 2 + 1] = bVar3;
          pbVar9 = param_1;
        }
        else {
          bVar5 = (byte)(local_76 >> 8);
          bVar6 = (byte)(local_74 >> 8);
          if (bVar13 == 2) {
            pbVar15[1] = bVar3;
            pbVar15[3] = (byte)local_76;
            pbVar15[5] = (byte)local_74;
            *pbVar15 = bVar4;
            pbVar15[2] = bVar5;
            pbVar15[4] = bVar6;
            pbVar9 = (byte *)(uint)(local_74 >> 8);
          }
          else {
            bVar7 = (byte)(local_72 >> 8);
            pbVar9 = (byte *)(uint)local_74;
            if (bVar13 == 4) {
              pbVar19[1] = bVar3;
              pbVar19[3] = (byte)local_72;
              *pbVar19 = bVar4;
              pbVar19[2] = bVar7;
            }
            else if (bVar13 == 6) {
              pbVar18[1] = bVar3;
              pbVar18[3] = (byte)local_76;
              pbVar18[5] = (byte)local_74;
              pbVar18[7] = (byte)local_72;
              *pbVar18 = bVar4;
              pbVar18[2] = bVar5;
              pbVar18[4] = bVar6;
              pbVar18[6] = bVar7;
              pbVar9 = (byte *)(uint)(local_74 >> 8);
            }
          }
        }
        pbVar21 = pbVar21 + 1;
        pbVar15 = pbVar15 + 6;
        pbVar19 = pbVar19 + 4;
        pbVar18 = pbVar18 + 8;
      } while (local_90 != pbVar21);
      goto LAB_2c6242f6;
    }
    iVar8 = *(int *)(param_3 + 4);
LAB_2c6240d8:
    if (iVar8 == 8) {
      if (*param_3 != 6) {
        if (*param_3 != 2) goto LAB_2c6240de;
        cVar2 = *param_4;
        if (cVar2 == '\0') {
          if (uVar11 == 8) {
            if (local_90 == (byte *)0x0) goto LAB_2c62461c;
            param_2 = param_2 + -1;
            pbVar9 = local_90 + (int)param_2;
            do {
              param_2 = param_2 + 1;
              bVar13 = *param_2;
              param_1[2] = bVar13;
              param_1[1] = bVar13;
              *param_1 = bVar13;
              param_1 = param_1 + 3;
            } while (pbVar9 != param_2);
          }
          else if (uVar11 == 0x10) {
            pbVar9 = local_90;
            if (local_90 == (byte *)0x0) goto LAB_2c62461c;
            pbVar15 = (byte *)0x0;
            do {
              bVar13 = param_2[(int)pbVar15 * 2];
              pbVar15 = pbVar15 + 1;
              param_1[2] = bVar13;
              param_1[1] = bVar13;
              *param_1 = bVar13;
              param_1 = param_1 + 3;
            } while (local_90 != pbVar15);
          }
          else {
            if (local_90 == (byte *)0x0) goto LAB_2c62461c;
            uVar12 = 0;
            pbVar15 = param_1 + 3;
            do {
              if (uVar11 == 0) {
                bVar13 = 0;
              }
              else {
                uVar20 = uVar11 + uVar12;
                uVar17 = 0;
                do {
                  uVar14 = uVar12 >> 3;
                  uVar10 = ~uVar12;
                  uVar12 = uVar12 + 1;
                  pbVar9 = (byte *)(uVar10 & 7);
                  uVar17 = (int)(uint)param_2[uVar14] >> (int)pbVar9 & 1U | uVar17 << 1;
                } while (uVar20 != uVar12);
                bVar13 = (byte)((uVar17 * 0xff) / ((1 << (uVar11 & 0xff)) - 1U));
              }
              pbVar15[-1] = bVar13;
              pbVar18 = pbVar15 + 3;
              pbVar15[-2] = bVar13;
              pbVar15[-3] = bVar13;
              pbVar15 = pbVar18;
            } while (param_1 + 3 + (int)local_90 * 3 != pbVar18);
          }
        }
        else if (cVar2 == '\x02') {
          if (uVar11 == 8) {
            iVar8 = (int)local_90 * 3;
LAB_2c624a10:
            local_90 = (byte *)0x0;
            pbVar9 = (byte *)FUN_2c62c0d8(param_1,param_2,iVar8);
            bVar13 = *param_3;
            goto joined_r0x2c6243d6;
          }
          if (local_90 == (byte *)0x0) goto LAB_2c6242fe;
          param_1 = param_1 + 3;
          pbVar15 = param_1;
          do {
            pbVar18 = pbVar15 + 3;
            pbVar15[-3] = *param_2;
            pbVar15[-2] = param_2[2];
            pbVar15[-1] = param_2[4];
            pbVar9 = param_1 + (int)local_90 * 3;
            param_2 = param_2 + 6;
            pbVar15 = pbVar18;
          } while (pbVar18 != param_1 + (int)local_90 * 3);
        }
        else if (cVar2 == '\x03') {
          if (uVar11 == 8) {
            if (local_90 == (byte *)0x0) goto LAB_2c62461c;
            param_2 = param_2 + -1;
            pbVar15 = param_1;
            do {
              param_2 = param_2 + 1;
              pbVar18 = pbVar15 + 3;
              pbVar9 = (byte *)FUN_2c62c0d8(pbVar15,*(int *)(param_4 + 8) + (uint)*param_2 * 4,3);
              pbVar15 = pbVar18;
            } while (pbVar18 != param_1 + (int)local_90 * 3);
          }
          else {
            if (local_90 == (byte *)0x0) goto LAB_2c62461c;
            uVar12 = 0;
            pbVar15 = param_1;
            while( true ) {
              iVar8 = 0;
              if (uVar11 != 0) {
                uVar11 = uVar12 + uVar11;
                uVar17 = 0;
                do {
                  uVar10 = uVar12 >> 3;
                  uVar20 = ~uVar12;
                  uVar12 = uVar12 + 1;
                  uVar17 = (int)(uint)param_2[uVar10] >> (uVar20 & 7) & 1U | uVar17 << 1;
                } while (uVar12 != uVar11);
                iVar8 = uVar17 << 2;
              }
              pbVar9 = (byte *)FUN_2c62c0d8(pbVar15,iVar8 + *(int *)(param_4 + 8),3);
              if (pbVar15 + 3 == param_1 + (int)local_90 * 3) break;
              uVar11 = *(uint *)(param_4 + 4);
              pbVar15 = pbVar15 + 3;
            }
          }
        }
        else if (cVar2 == '\x04') {
          if (uVar11 == 8) {
            if (local_90 == (byte *)0x0) goto LAB_2c62461c;
            pbVar15 = (byte *)0x0;
            do {
              bVar13 = param_2[(int)pbVar15 * 2];
              pbVar15 = pbVar15 + 1;
              param_1[2] = bVar13;
              param_1[1] = bVar13;
              *param_1 = bVar13;
              param_1 = param_1 + 3;
            } while (local_90 != pbVar15);
          }
          else {
            if (local_90 == (byte *)0x0) goto LAB_2c6242fe;
            pbVar15 = (byte *)0x0;
            do {
              bVar13 = param_2[(int)pbVar15 * 4];
              pbVar15 = pbVar15 + 1;
              param_1[2] = bVar13;
              param_1[1] = bVar13;
              *param_1 = bVar13;
              pbVar9 = local_90;
              param_1 = param_1 + 3;
            } while (local_90 != pbVar15);
          }
        }
        else {
          if (cVar2 != '\x06') goto LAB_2c62461c;
          if (uVar11 == 8) {
            if (local_90 == (byte *)0x0) goto LAB_2c62461c;
            pbVar15 = param_1;
            do {
              pbVar18 = pbVar15 + 3;
              pbVar9 = (byte *)FUN_2c62c0d8(pbVar15,param_2);
              param_2 = param_2 + 4;
              pbVar15 = pbVar18;
            } while (pbVar18 != param_1 + (int)local_90 * 3);
          }
          else {
            if (local_90 == (byte *)0x0) goto LAB_2c6242fe;
            pbVar15 = param_1 + 3;
            do {
              pbVar18 = pbVar15 + 3;
              pbVar15[-3] = *param_2;
              pbVar15[-2] = param_2[2];
              bVar13 = param_2[4];
              pbVar15[-1] = bVar13;
              pbVar9 = (byte *)(uint)bVar13;
              param_2 = param_2 + 8;
              pbVar15 = pbVar18;
            } while (param_1 + 3 + (int)local_90 * 3 != pbVar18);
          }
        }
        goto LAB_2c6242f6;
      }
      cVar2 = *param_4;
      if (cVar2 != '\0') {
        if (cVar2 == '\x02') {
          if (uVar11 != 8) {
            if (local_90 == (byte *)0x0) goto LAB_2c6242fe;
            pbVar15 = (byte *)0x0;
            iVar8 = *(int *)(param_4 + 0x10);
            do {
              bVar13 = *param_2;
              *param_1 = bVar13;
              bVar3 = param_2[2];
              param_1[1] = bVar3;
              bVar4 = param_2[4];
              param_1[2] = bVar4;
              if (((iVar8 == 0) ||
                  ((uint)param_2[1] + (uint)bVar13 * 0x100 != *(int *)(param_4 + 0x14))) ||
                 ((uint)param_2[3] + (uint)bVar3 * 0x100 != *(int *)(param_4 + 0x18))) {
                pbVar9 = (byte *)0xff;
              }
              else {
                uVar11 = 0;
                if ((uint)param_2[5] + (uint)bVar4 * 0x100 != *(int *)(param_4 + 0x1c)) {
                  uVar11 = 0xffffffff;
                }
                pbVar9 = (byte *)(uVar11 & 0xff);
              }
              pbVar15 = pbVar15 + 1;
              param_1[3] = (byte)pbVar9;
              param_2 = param_2 + 6;
              param_1 = param_1 + 4;
            } while (local_90 != pbVar15);
            bVar13 = *param_3;
            local_90 = (byte *)0x0;
            goto joined_r0x2c6243d6;
          }
          if (local_90 == (byte *)0x0) goto LAB_2c62461c;
          pbVar15 = param_2;
          pbVar18 = param_1;
          do {
            pbVar19 = pbVar15 + 3;
            pbVar9 = (byte *)FUN_2c62c0d8(pbVar18,pbVar15,3);
            pbVar18[3] = 0xff;
            pbVar18 = pbVar18 + 4;
            pbVar15 = pbVar19;
          } while (param_2 + (int)local_90 * 3 != pbVar19);
          pbVar15 = (byte *)0x0;
          if (*(int *)(param_4 + 0x10) == 0) goto LAB_2c624672;
          pbVar15 = (byte *)0x0;
          pbVar9 = *(byte **)(param_4 + 0x14);
          do {
            if ((((byte *)(uint)*param_1 == pbVar9) &&
                ((uint)param_1[1] == *(uint *)(param_4 + 0x18))) &&
               ((uint)param_1[2] == *(uint *)(param_4 + 0x1c))) {
              param_1[3] = 0;
            }
            pbVar15 = pbVar15 + 1;
            param_1 = param_1 + 4;
          } while (local_90 != pbVar15);
        }
        else if (cVar2 == '\x03') {
          if (uVar11 == 8) {
            if (local_90 == (byte *)0x0) goto LAB_2c62461c;
            param_2 = param_2 + -1;
            local_90 = local_90 + (int)param_2;
            do {
              param_2 = param_2 + 1;
              pbVar9 = (byte *)FUN_2c62c0d8(param_1,*(int *)(param_4 + 8) + (uint)*param_2 * 4,4);
              param_1 = param_1 + 4;
            } while (local_90 != param_2);
          }
          else {
            if (local_90 == (byte *)0x0) goto LAB_2c6242fe;
            uVar12 = 0;
            pbVar15 = (byte *)0x0;
            while( true ) {
              iVar8 = 0;
              if (uVar11 != 0) {
                uVar11 = uVar12 + uVar11;
                uVar17 = 0;
                do {
                  uVar10 = uVar12 >> 3;
                  uVar20 = ~uVar12;
                  uVar12 = uVar12 + 1;
                  uVar17 = (int)(uint)param_2[uVar10] >> (uVar20 & 7) & 1U | uVar17 << 1;
                } while (uVar12 != uVar11);
                iVar8 = uVar17 << 2;
              }
              pbVar15 = pbVar15 + 1;
              pbVar9 = (byte *)FUN_2c62c0d8(param_1,iVar8 + *(int *)(param_4 + 8),4);
              if (local_90 == pbVar15) break;
              uVar11 = *(uint *)(param_4 + 4);
              param_1 = param_1 + 4;
            }
          }
        }
        else if (cVar2 == '\x04') {
          if (uVar11 == 8) {
            if (local_90 == (byte *)0x0) goto LAB_2c62461c;
            pbVar15 = (byte *)0x0;
            pbVar9 = param_2 + 1;
            do {
              bVar13 = param_2[(int)pbVar15 * 2];
              param_1[2] = bVar13;
              param_1[1] = bVar13;
              *param_1 = bVar13;
              iVar8 = (int)pbVar15 * 2;
              pbVar15 = pbVar15 + 1;
              param_1[3] = pbVar9[iVar8];
              param_1 = param_1 + 4;
            } while (local_90 != pbVar15);
          }
          else {
            if (local_90 == (byte *)0x0) goto LAB_2c6242fe;
            pbVar15 = (byte *)0x0;
            pbVar9 = param_2 + 2;
            do {
              bVar13 = param_2[(int)pbVar15 * 4];
              param_1[2] = bVar13;
              param_1[1] = bVar13;
              *param_1 = bVar13;
              iVar8 = (int)pbVar15 * 4;
              pbVar15 = pbVar15 + 1;
              param_1[3] = pbVar9[iVar8];
              param_1 = param_1 + 4;
            } while (local_90 != pbVar15);
          }
        }
        else {
          if (cVar2 != '\x06') goto LAB_2c62461c;
          if (uVar11 == 8) {
            iVar8 = (int)local_90 * 4;
            goto LAB_2c624a10;
          }
          if (local_90 == (byte *)0x0) goto LAB_2c6242fe;
          pbVar15 = (byte *)0x0;
          do {
            pbVar15 = pbVar15 + 1;
            *param_1 = *param_2;
            param_1[1] = param_2[2];
            param_1[2] = param_2[4];
            pbVar9 = (byte *)(uint)param_2[6];
            param_1[3] = param_2[6];
            param_2 = param_2 + 8;
            param_1 = param_1 + 4;
          } while (local_90 != pbVar15);
        }
        goto LAB_2c6242f6;
      }
      if (uVar11 != 8) {
        if (uVar11 == 0x10) {
          if (local_90 != (byte *)0x0) {
            iVar8 = *(int *)(param_4 + 0x10);
            pbVar15 = (byte *)0x0;
            do {
              bVar13 = param_2[(int)pbVar15 * 2];
              pbVar9 = (byte *)(uint)bVar13;
              param_1[2] = bVar13;
              param_1[1] = bVar13;
              *param_1 = bVar13;
              if (iVar8 == 0) {
                bVar13 = 0xff;
              }
              else {
                iVar1 = (int)pbVar9 * 0x100;
                pbVar9 = *(byte **)(param_4 + 0x14);
                bVar13 = 0;
                if ((byte *)((uint)param_2[(int)pbVar15 * 2 + 1] + iVar1) != pbVar9) {
                  bVar13 = 0xff;
                }
              }
              pbVar15 = pbVar15 + 1;
              param_1[3] = bVar13;
              param_1 = param_1 + 4;
            } while (local_90 != pbVar15);
            goto LAB_2c6242f6;
          }
        }
        else {
          pbVar9 = local_90;
          if (local_90 != (byte *)0x0) {
            iVar8 = *(int *)(param_4 + 0x10);
            uVar12 = 0;
            pbVar15 = (byte *)0x0;
            do {
              if (uVar11 == 0) {
                pbVar9 = (byte *)0x0;
                bVar13 = 0;
              }
              else {
                uVar17 = uVar11 + uVar12;
                pbVar9 = (byte *)0x0;
                do {
                  uVar20 = uVar12 >> 3;
                  uVar10 = ~uVar12;
                  uVar12 = uVar12 + 1;
                  pbVar9 = (byte *)((int)(uint)param_2[uVar20] >> (uVar10 & 7) & 1U |
                                   (int)pbVar9 << 1);
                } while (uVar12 != uVar17);
                bVar13 = (byte)((uint)((int)pbVar9 * 0xff) / ((1 << (uVar11 & 0xff)) - 1U));
              }
              param_1[2] = bVar13;
              param_1[1] = bVar13;
              *param_1 = bVar13;
              if (iVar8 == 0) {
                bVar13 = 0xff;
              }
              else {
                bVar13 = 0;
                if (*(byte **)(param_4 + 0x14) != pbVar9) {
                  bVar13 = 0xff;
                }
              }
              pbVar15 = pbVar15 + 1;
              param_1[3] = bVar13;
              param_1 = param_1 + 4;
            } while (local_90 != pbVar15);
            bVar13 = *param_3;
            local_90 = (byte *)0x0;
            goto joined_r0x2c6243d6;
          }
        }
LAB_2c62461c:
        local_90 = (byte *)0x0;
        goto LAB_2c6242fe;
      }
      if (local_90 == (byte *)0x0) goto LAB_2c62461c;
      param_2 = param_2 + -1;
      pbVar9 = param_2 + (int)local_90;
      pbVar15 = param_1;
      do {
        param_2 = param_2 + 1;
        bVar13 = *param_2;
        pbVar15[3] = 0xff;
        pbVar15[2] = bVar13;
        pbVar15[1] = bVar13;
        *pbVar15 = bVar13;
        pbVar15 = pbVar15 + 4;
      } while (pbVar9 != param_2);
      pbVar15 = (byte *)0x0;
      if (*(int *)(param_4 + 0x10) != 0) {
        pbVar15 = (byte *)0x0;
        uVar11 = *(uint *)(param_4 + 0x14);
        pbVar9 = (byte *)0x0;
        do {
          if (param_1[(int)pbVar15 * 4] == uVar11) {
            param_1[(int)pbVar15 * 4 + 3] = 0;
          }
          pbVar15 = pbVar15 + 1;
        } while (local_90 != pbVar15);
        goto LAB_2c6242f6;
      }
LAB_2c624672:
      bVar13 = *param_3;
      local_90 = pbVar15;
    }
    else {
LAB_2c6240de:
      pbVar15 = (byte *)0x0;
      local_78 = local_78 & 0xff00;
      local_76 = local_76 & 0xff00;
      local_74 = local_74 & 0xff00;
      local_72 = local_72 & 0xff00;
      if (local_90 != (byte *)0x0) {
        puVar23 = &local_74;
        puVar24 = &local_76;
        pbVar18 = param_1;
        pbVar19 = param_1;
        pbVar21 = param_1;
        pbVar22 = param_1;
        do {
          FUN_2c622564(&local_78,puVar24,puVar23,&local_72,param_2,pbVar15,param_4);
          pbVar9 = (byte *)(uint)*param_3;
          puVar23 = extraout_s14;
          puVar24 = extraout_s15;
          if (pbVar9 == (byte *)0x0) {
            uVar11 = *(uint *)(param_3 + 4);
            if (uVar11 == 8) {
              param_1[(int)pbVar15] = (byte)local_78;
            }
            else if (uVar11 == 0x10) {
              param_1[(int)pbVar15 * 2 + 1] = (byte)local_78;
              param_1[(int)pbVar15 * 2] = (byte)local_78;
            }
            else {
              pbVar9 = (byte *)FUN_2c6214bc(param_1,pbVar15,uVar11,
                                            (uint)((byte)local_78 >> (8 - uVar11 & 0xff)) &
                                            ~(-1 << (uVar11 & 0xff)));
              puVar23 = extraout_s14_00;
              puVar24 = extraout_s15_00;
            }
          }
          else if (pbVar9 == (byte *)0x2) {
            pbVar9 = *(byte **)(param_3 + 4);
            if (pbVar9 == &NMI) {
              *pbVar21 = (byte)local_78;
              pbVar21[1] = (byte)local_76;
              pbVar21[2] = (byte)local_74;
            }
            else {
              pbVar18[1] = (byte)local_78;
              *pbVar18 = (byte)local_78;
              pbVar18[3] = (byte)local_76;
              pbVar18[2] = (byte)local_76;
              pbVar18[5] = (byte)local_74;
              pbVar18[4] = (byte)local_74;
            }
          }
          else {
            uVar11 = (uint)(byte)local_72;
            if (pbVar9 == (byte *)0x3) {
              pbVar9 = (byte *)FUN_2c621504(auStack_70);
              if ((int)pbVar9 < 0) {
                local_90 = (byte *)0x52;
                goto LAB_2c6243da;
              }
              if (*(int *)(param_3 + 4) == 8) {
                param_1[(int)pbVar15] = (byte)pbVar9;
                puVar23 = extraout_s14_01;
                puVar24 = extraout_s15_01;
              }
              else {
                pbVar9 = (byte *)FUN_2c6214bc(param_1,pbVar15,*(int *)(param_3 + 4),pbVar9,uVar11);
                puVar23 = extraout_s14_02;
                puVar24 = extraout_s15_02;
              }
            }
            else if (pbVar9 == &Reset) {
              if (*(int *)(param_3 + 4) == 8) {
                param_1[(int)pbVar15 * 2] = (byte)local_78;
                param_1[(int)pbVar15 * 2 + 1] = (byte)local_72;
              }
              else if (*(int *)(param_3 + 4) == 0x10) {
                pbVar22[1] = (byte)local_78;
                *pbVar22 = (byte)local_78;
                pbVar22[3] = (byte)local_72;
                pbVar22[2] = (byte)local_72;
              }
            }
            else if (pbVar9 == &DAT_00000006) {
              pbVar9 = *(byte **)(param_3 + 4);
              if (pbVar9 == &NMI) {
                *pbVar22 = (byte)local_78;
                pbVar22[1] = (byte)local_76;
                pbVar22[2] = (byte)local_74;
                pbVar22[3] = (byte)local_72;
              }
              else {
                pbVar19[1] = (byte)local_78;
                *pbVar19 = (byte)local_78;
                pbVar19[3] = (byte)local_76;
                pbVar19[2] = (byte)local_76;
                pbVar19[5] = (byte)local_74;
                pbVar19[4] = (byte)local_74;
                pbVar19[7] = (byte)local_72;
                pbVar19[6] = (byte)local_72;
              }
            }
          }
          pbVar15 = pbVar15 + 1;
          pbVar19 = pbVar19 + 8;
          pbVar22 = pbVar22 + 4;
          pbVar18 = pbVar18 + 6;
          pbVar21 = pbVar21 + 3;
        } while (local_90 != pbVar15);
      }
LAB_2c6242f6:
      bVar13 = *param_3;
      local_90 = (byte *)0x0;
    }
joined_r0x2c6243d6:
    if (bVar13 == 3) {
LAB_2c6243da:
      pbVar9 = (byte *)FUN_2c6221cc(auStack_70);
    }
    goto LAB_2c6242fe;
  }
  iVar8 = FUN_2c621d68(param_3,param_4);
  if (iVar8 == 0) goto LAB_2c6240c8;
  iVar8 = *(int *)(param_4 + 4);
  switch(cVar2) {
  case '\0':
    break;
  default:
    iVar8 = 0;
    goto LAB_2c624436;
  case '\x02':
    iVar8 = iVar8 * 3;
    break;
  case '\x04':
    iVar8 = iVar8 << 1;
    break;
  case '\x06':
    iVar8 = iVar8 << 2;
  }
  iVar8 = iVar8 * ((uint)local_90 >> 3) + (iVar8 * ((uint)local_90 & 7) + 7 >> 3);
LAB_2c624436:
  pbVar9 = (byte *)FUN_2c62c0d8(param_1,param_2,iVar8);
  local_90 = (byte *)0x0;
LAB_2c6242fe:
  if ((*DAT_2c6243ac ^ local_2c) != 0) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail(pbVar9,*DAT_2c6243ac ^ local_2c,0);
  }
  return local_90;
}

