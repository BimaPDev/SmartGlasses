/* FUN_100743d8 @ 0x100743d8 */

int * FUN_100743d8(int param_1,undefined1 *param_2)

{
  ushort uVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  undefined1 uVar8;
  int iVar9;
  uint uVar10;
  int *piVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  byte bVar15;
  
  uVar12 = (DAT_10074668 - DAT_10074664) * 0x20 & 0xff00;
  if (param_2 == (undefined1 *)0x0) {
    FUN_100a5b78(DAT_1007466c | uVar12,PTR_s_acts_audio_out_open_10074674,
                 PTR_s_NULL_parameter_10074670);
    return (int *)0x0;
  }
  FUN_1011f8c2(*(undefined4 *)(*(int *)(param_1 + 0x10) + 0x2c),0);
  FUN_1011f8de(*(undefined4 *)(param_1 + 0x10));
  iVar13 = DAT_10074690;
  uVar1 = *(ushort *)(param_2 + 2);
  bVar2 = param_2[2];
  uVar14 = (uint)bVar2;
  uVar4 = uVar1 & 1;
  if ((uVar1 & 1) == 0) {
    if ((int)((uint)uVar1 << 0x1e) < 0) {
      if ((*DAT_1007468c == DAT_10074690) &&
         (uVar4 = *(ushort *)(DAT_1007468c + 3) & 1, (*(ushort *)(DAT_1007468c + 3) & 1) != 0)) {
        if ((uVar14 & *(ushort *)((int)DAT_1007468c + 10)) == 0) {
          uVar4 = 0;
        }
        else {
          uVar4 = 1;
        }
      }
      if ((((DAT_1007468c[9] != DAT_10074690) ||
           (-1 < (int)((uint)*(ushort *)(DAT_1007468c + 0xc) << 0x1f))) ||
          ((uVar14 & *(ushort *)((int)DAT_1007468c + 0x2e)) == 0)) || (uVar4 == 0)) {
        bVar15 = (byte)*(ushort *)(DAT_1007468c + 3) & 1;
        piVar11 = DAT_1007468c;
        if ((*(ushort *)(DAT_1007468c + 3) & 1) != 0) {
          if ((int)((uint)*(ushort *)(DAT_1007468c + 0xc) << 0x1f) < 0) goto LAB_10074442;
          bVar15 = 1;
          piVar11 = DAT_10074698;
        }
        FUN_1011ea48(piVar11 + 2,0,0x1c);
        *(undefined2 *)(piVar11 + 3) = 1;
        piVar11[1] = -1;
        *(byte *)((int)piVar11 + 0x21) = bVar15;
        *(undefined1 *)((int)piVar11 + 0x23) = 0;
        iVar9 = *(int *)(param_2 + 0x14);
        *piVar11 = iVar13;
        *(ushort *)((int)piVar11 + 10) = (ushort)bVar2;
        if (iVar9 == 0) {
          FUN_100a5b78(DAT_1007469c | uVar12,PTR_s_acts_audio_out_open_10074674,
                       PTR_s_Channel_callback_is_NULL_100746a0);
        }
        else {
          *(undefined1 *)(piVar11 + 2) = param_2[5];
          uVar8 = *param_2;
          piVar11[4] = iVar9;
          *(undefined1 *)(piVar11 + 8) = uVar8;
          piVar11[5] = *(int *)(param_2 + 0x18);
          if (param_2[4] == '\0') {
            uVar8 = 2;
          }
          else {
            uVar8 = 4;
          }
          *(undefined1 *)((int)piVar11 + 0x22) = uVar8;
          puVar5 = *(uint **)(param_2 + 0x1c);
          if (puVar5 == (uint *)0x0) {
            *(byte *)((int)piVar11 + 0x23) = *(byte *)((int)piVar11 + 0x23) & 0xfe;
LAB_1007457c:
            if ((bVar2 & 1) == 0) {
              if ((bVar2 & 2) == 0) {
                if ((bVar2 & 0x44) == 0) {
                  FUN_100a5b78(uVar12 | 0x4380011,DAT_10074770,DAT_1007476c,uVar14);
                  goto LAB_1007450e;
                }
                goto LAB_100745a4;
              }
              iVar9 = *(int *)(param_1 + 0x10);
              iVar13 = *(int *)(iVar9 + 0x20);
              uVar4 = DAT_100746b4;
              puVar6 = PTR_s_no_i2s_tx_device_100746ac;
              if (iVar13 == 0) {
LAB_1007459e:
                uVar4 = uVar4 | uVar12;
LAB_100745a0:
                FUN_100a5b78(uVar4,PTR_s_audio_out_enable_i2stx_100746b0,puVar6);
                goto LAB_100745a4;
              }
              if (*(int *)(param_2 + 0xc) == 0) {
                FUN_100a5b78(uVar12 | 0x27c0011,PTR_s_audio_out_enable_i2stx_100746b0,DAT_100746b8);
LAB_100745ca:
                uVar4 = 0xffffffea;
              }
              else {
                if (2 < (byte)param_2[5]) {
                  uVar4 = uVar12 | 0x2840011;
                  uVar7 = DAT_100746c4;
LAB_100745ee:
                  FUN_100a5b78(uVar4,PTR_s_audio_out_enable_i2stx_100746b0,uVar7);
                  goto LAB_100745ca;
                }
                if (((byte)param_2[4] != 0) && (1 < (byte)param_2[4] - 2)) {
                  uVar4 = DAT_100746c8 | uVar12;
                  uVar7 = DAT_100746cc;
                  goto LAB_100745ee;
                }
                if ((int)((uint)(byte)param_2[2] << 0x1d) < 0) {
                  uVar4 = DAT_100746d4;
                  puVar6 = DAT_100746d0;
                  if (*(int *)(iVar9 + 0x24) == 0) goto LAB_1007459e;
                  iVar3 = FUN_1011f8c2(*(int *)(iVar9 + 0x24),param_2);
                  if (iVar3 == 0) {
                    FUN_1011f8d0(*(undefined4 *)(iVar9 + 0x1c),0x147,0);
                  }
                }
                if ((byte)param_2[5] < 2) {
                  if (*(int *)(iVar9 + 0x1c) != 0) {
                    iVar3 = FUN_1011f8d0(*(int *)(iVar9 + 0x1c),0x101,param_2);
                    if (iVar3 == 0) {
                      *(byte *)(iVar9 + 0x30) =
                           *(byte *)(iVar9 + 0x30) & 0xf9 |
                           (byte)((((*(byte *)(iVar9 + 0x30) & 7) >> 1) + 1 & 3) << 1);
                      goto LAB_100746fa;
                    }
                    FUN_100a5b78(DAT_100746d8 | uVar12,PTR_s_audio_out_fifo_request_100746e0,
                                 PTR_s_Request_FIFO_failed_100746dc);
                  }
                  uVar4 = uVar12 | 0x29c0011;
                  puVar6 = PTR_s_Failed_to_take_DAC_FIFO_100746e4;
                  goto LAB_100745a0;
                }
LAB_100746fa:
                uVar4 = FUN_1011f8c2(iVar13,param_2);
                if (uVar4 == 0) {
                  FUN_100a5b78(DAT_10074774 | uVar12,DAT_10074770,DAT_10074778,
                               *(undefined1 *)((int)piVar11 + 0x21),piVar11,uVar14,param_2[5],
                               *param_2);
                  FUN_10113fd0(*(undefined4 *)(param_1 + 0x10));
                  return piVar11;
                }
                if ((byte)param_2[5] < 2) {
                  FUN_10073bc8(*(undefined4 *)(iVar9 + 0x1c));
                  *(byte *)(iVar9 + 0x30) =
                       *(byte *)(iVar9 + 0x30) & 0xf9 |
                       (byte)((((*(byte *)(iVar9 + 0x30) & 7) >> 1) + 3 & 3) << 1);
                }
              }
            }
            else {
LAB_100745a4:
              uVar4 = 0xfffffffa;
            }
            uVar12 = DAT_100746bc | uVar12;
            puVar6 = DAT_100746c0;
          }
          else {
            uVar10 = *puVar5;
            uVar4 = puVar5[1];
            if ((uVar10 != 0) && (uVar4 != 0)) {
              piVar11[6] = uVar10;
              piVar11[7] = uVar4;
              *(byte *)((int)piVar11 + 0x23) = *(byte *)((int)piVar11 + 0x23) | 1;
              FUN_100a5b78(uVar12 | 0x4180032,PTR_s_acts_audio_out_open_10074674,
                           PTR_s_In_reload_mode__0x_08x__d__100746a8,uVar10,uVar4);
              goto LAB_1007457c;
            }
            uVar12 = uVar12 | 0x4100012;
            puVar6 = PTR_s_Invalid_reload_parameter_addr_0x_100746a4;
            uVar14 = uVar10;
          }
          FUN_100a5b78(uVar12,PTR_s_acts_audio_out_open_10074674,puVar6,uVar14,uVar4);
        }
LAB_1007450e:
        FUN_10073cc0(piVar11);
        goto LAB_10074450;
      }
      FUN_100a5b78(uVar12 | 0xd10013,PTR_s_audio_out_session_check_1007467c,DAT_10074694,uVar14,2,2)
      ;
    }
    else {
      if ((uVar1 & 0x44) != 0) goto LAB_1007445a;
      FUN_100a5b78(uVar12 | 0xbb0011,PTR_s_audio_out_session_check_1007467c,
                   PTR_s_Invalid_session_type__d_10074678,uVar14);
    }
  }
  else {
LAB_1007445a:
    FUN_100a5b78(uVar12 | 0xc10012,PTR_s_audio_out_session_check_1007467c,DAT_10074688,uVar14,0);
  }
LAB_10074442:
  FUN_100a5b78(DAT_10074680 | uVar12,PTR_s_acts_audio_out_open_10074674,DAT_10074684,uVar14);
LAB_10074450:
  FUN_10113fd0(*(undefined4 *)(param_1 + 0x10));
  return (int *)0x0;
}

