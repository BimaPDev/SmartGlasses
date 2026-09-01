/* FUN_100449d8 @ 0x100449d8 */

code * FUN_100449d8(byte *param_1,byte *param_2,uint param_3)

{
  code cVar1;
  code cVar2;
  byte bVar3;
  short sVar4;
  byte bVar5;
  ushort uVar6;
  undefined *puVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  short sVar11;
  code cVar12;
  byte bVar13;
  int iVar14;
  int iVar15;
  code *pcVar16;
  undefined4 uVar17;
  undefined2 *puVar18;
  uint uVar19;
  undefined *puVar20;
  undefined1 uVar21;
  byte *pbVar22;
  undefined *puVar23;
  char cVar24;
  ushort uVar25;
  byte *pbVar26;
  char *pcVar27;
  byte *pbVar28;
  undefined4 *puVar29;
  uint unaff_r4;
  undefined1 *puVar30;
  code *unaff_r5;
  code *pcVar31;
  uint uVar32;
  code cVar33;
  undefined2 uVar34;
  code *unaff_r6;
  int iVar35;
  code *pcVar36;
  uint *puVar37;
  byte *unaff_r7;
  byte *pbVar38;
  byte *unaff_r8;
  uint uVar39;
  code *pcVar40;
  byte *unaff_r9;
  code *pcVar41;
  uint unaff_r10;
  byte *unaff_r11;
  bool bVar42;
  undefined4 local_140;
  byte *local_13c;
  undefined4 local_138;
  byte local_134 [60];
  code *local_f8;
  undefined1 *local_f4;
  uint local_f0;
  uint local_ec;
  uint local_e8;
  uint uStack_e4;
  uint local_e0;
  undefined1 *local_dc;
  uint local_d8;
  uint local_d4;
  uint local_cc [3];
  undefined4 local_c0;
  undefined1 local_bc;
  undefined1 uStack_bb;
  short sStack_ba;
  undefined1 local_b8;
  undefined1 uStack_b7;
  undefined1 uStack_b6;
  undefined1 uStack_b5;
  char local_b4;
  undefined1 auStack_b3 [3];
  undefined4 uStack_b0;
  uint local_ac [7];
  undefined1 local_90 [3];
  undefined4 uStack_8d;
  undefined1 local_89 [41];
  code *local_60;
  code *local_5c;
  code *local_58;
  code *pcStack_54;
  byte *local_50;
  byte *local_4c;
  code *local_48;
  undefined4 local_44;
  undefined4 *local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  byte *local_2c;
  undefined4 local_28;
  byte *local_24;
  undefined4 local_20;
  undefined1 *local_1c;
  
  local_1c = *(undefined1 **)PTR_DAT_10044bbc;
  pcVar40 = unaff_r5;
  local_28 = param_1;
  local_24 = param_2;
  local_20 = param_3;
  if ((param_1 == (byte *)0x0) || (param_2 == (byte *)0x0)) {
LAB_10044a5c:
    pcVar16 = (code *)0xffffff7a;
LAB_10044a60:
    if ((undefined1 *)*(int *)PTR_DAT_10044bbc == local_1c) {
      return pcVar16;
    }
    goto LAB_10044aa6;
  }
  bVar13 = *param_1;
  pcVar40 = (code *)(param_1 + 4);
  *pcVar40 = (code)param_1[2];
  unaff_r4 = ((uint)*(ushort *)(param_1 + 3) << 8 | (uint)(*(ushort *)(param_1 + 3) >> 8)) + 1 &
             0xffff;
  iVar15 = FUN_1004f6cc();
  if (iVar15 == 0) {
    pcVar16 = (code *)0xffffffea;
    goto LAB_10044a60;
  }
  if (*(char *)(iVar15 + 0x212) == '\0') {
    *(undefined1 *)(iVar15 + 0x212) = 1;
  }
  FUN_1004098c();
  local_28 = (byte *)(uint)param_1[4];
  uVar39 = ((int)PTR_DAT_10044bc0 - (int)PTR_DAT_10044bc4) * 0x20 & 0xff00;
  pcVar16 = (code *)FUN_100a5b78(uVar39 | DAT_10044bc8,DAT_10044bd0,DAT_10044bcc,bVar13);
  iVar14 = DAT_10047d38;
  iVar35 = DAT_10047738;
  puVar20 = PTR_DAT_10044524;
  pbVar38 = DAT_10043f7c;
  pcVar31 = DAT_10043f78;
  iVar15 = DAT_10043e1c;
  if (8 < bVar13) {
    if (3 < (byte)(bVar13 + 5)) {
switchD_10044a94_default:
      FUN_100a5b78(uVar39 | DAT_10044bd4,DAT_10044bd0,DAT_10044bd8,bVar13);
      goto LAB_10044a5c;
    }
    switch(bVar13) {
    case 0xfb:
      if ((undefined1 *)*(int *)PTR_DAT_10044bbc == local_1c) {
        local_1c = *(undefined1 **)PTR_DAT_10044920;
        if (pcVar40 == (code *)0x0) goto LAB_10044914;
        if (unaff_r4 == 0) goto LAB_10044914;
        uVar39 = (*(ushort *)(param_1 + 5) & 0xff) << 8 | (uint)(*(ushort *)(param_1 + 5) >> 8);
        cVar12 = *pcVar40;
        local_44 = 0;
        FUN_1011ea48(&local_40,0,0x10,0);
        if (uVar39 != 0) {
          uVar32 = uVar39;
          if (0x13 < uVar39) {
            uVar32 = 0x14;
          }
          FUN_1013d03e(&local_44,param_1 + 7,uVar32);
        }
        local_30 = (byte *)0x0;
        FUN_1011ea48(&local_2c,0,0x10);
        local_4c = (byte *)&local_30;
        uVar25 = *(ushort *)(param_1 + uVar39 + 7) << 8 | *(ushort *)(param_1 + uVar39 + 7) >> 8;
        if (uVar25 != 0) {
          if (0x13 < uVar25) {
            uVar25 = 0x14;
          }
          FUN_1013d03e(local_4c,param_1 + uVar39 + 9,uVar25);
        }
        local_50 = (byte *)&local_44;
        FUN_100a5b78(DAT_1004492c | ((int)PTR_DAT_10044928 - (int)PTR_DAT_10044924) * 0x20 & 0xff00U
                     ,DAT_10044934,DAT_10044930,cVar12);
        if ((((((cVar12 == (code)0x1) &&
               (iVar15 = FUN_1011ea18(&local_44,DAT_10044938), iVar15 != 0)) &&
              (iVar15 = FUN_1011ea18(&local_44,DAT_1004493c), iVar15 != 0)) &&
             ((iVar15 = FUN_1011ea18(&local_44,DAT_10044940), iVar15 != 0 &&
              (iVar15 = FUN_1011ea18(&local_44,DAT_10044944), iVar15 != 0)))) &&
            (iVar15 = FUN_1011ea18(&local_44,PTR_s_volume_up_10044948), iVar15 != 0)) &&
           (iVar15 = FUN_1011ea18(&local_44,PTR_s_volume_down_1004494c), iVar15 != 0)) {
          FUN_1011ea18(&local_44,PTR_s_volume_level_10044950);
        }
        pcVar40 = (code *)0xffffffa8;
        while ((undefined1 *)*(int *)PTR_DAT_10044920 != local_1c) {
          FUN_1013cdc0(pcVar40);
LAB_10044914:
          pcVar40 = (code *)0xffffff7a;
        }
        return pcVar40;
      }
      break;
    case 0xfc:
      if ((undefined1 *)*(int *)PTR_DAT_10044bbc == local_1c) {
        iVar15 = *(int *)PTR_DAT_10044800;
        if (unaff_r4 == 0) {
          pcVar40 = (code *)0xffffff7a;
        }
        else {
          local_28 = param_1 + 5;
          local_24 = param_1 + 6;
          cVar12 = *pcVar40;
          FUN_100a5b78(DAT_1004480c |
                       ((int)PTR_DAT_10044808 - (int)PTR_DAT_10044804) * 0x20 & 0xff00U,
                       PTR_s__ble_rx_ring_command_10044814,
                       PTR_s__ble_rx_ring_command__d__s___s_10044810,cVar12);
          switch(cVar12) {
          case (code)0x1:
            FUN_10048980();
            goto LAB_100447a6;
          case (code)0x2:
            goto switchD_10044798_caseD_2;
          case (code)0x3:
            FUN_10048ba4();
            goto LAB_100447a6;
          case (code)0x4:
            FUN_10048bf0();
            goto LAB_100447a6;
          case (code)0x5:
            (**(code **)(PTR_DAT_10044818 + 0x18))();
            goto LAB_100447a6;
          default:
            local_20._0_2_ = CONCAT11(cVar12,0xfc);
            local_20 = (uint)(ushort)local_20;
            local_1c = (undefined1 *)0x0;
            FUN_100506fc(&local_20);
            pcVar40 = (code *)0xffffffa8;
          }
        }
        while (*(int *)PTR_DAT_10044800 != iVar15) {
          FUN_1013cdc0(pcVar40);
switchD_10044798_caseD_2:
          FUN_10048a54();
LAB_100447a6:
          pcVar40 = (code *)0x0;
        }
        return pcVar40;
      }
      break;
    case 0xfd:
      if ((undefined1 *)*(int *)PTR_DAT_10044bbc == local_1c) {
        local_2c = *(byte **)PTR_DAT_10044ff0;
        if ((pcVar40 == (code *)0x0) || (unaff_r4 == 0)) {
          pcVar16 = (code *)0xffffff7a;
          goto LAB_10044dfe;
        }
        unaff_r5 = (code *)(param_1 + 5);
        local_4c = (byte *)(uint)(byte)*pcVar40;
        local_58 = (code *)(uint)param_1[8];
        local_5c = (code *)(uint)param_1[7];
        pcVar16 = (code *)(((int)PTR_DAT_10044ff4 - (int)PTR_DAT_10044ff8) * 0x20 & 0xff00);
        local_60 = (code *)(uint)param_1[6];
        unaff_r6 = (code *)(unaff_r4 - 1 & 0xffff);
        FUN_100a5b78((uint)pcVar16 | 0x1ca0034,PTR_s__ble_rx_function_command_10045000,
                     PTR_s_Function_command___d__data___d___10044ffc,local_4c);
        puVar29 = DAT_10045008;
        switch(local_4c) {
        case (byte *)0x1:
          if (unaff_r5 == (code *)0x0) goto switchD_10044fdc_default;
          if (unaff_r6 < (code *)0x2) {
            if (param_1[5] == 0) goto LAB_100452b6;
          }
          else {
            if (param_1[5] == 0) {
              if (param_1[6] == 1) {
                (**(code **)(PTR_DAT_10045004 + 0x24))();
                pcVar16 = (code *)0x0;
                goto LAB_10044dd4;
              }
LAB_100452b6:
              iVar15 = (*(code *)DAT_100452d0[2])();
              bVar42 = iVar15 == 0x60;
              goto LAB_100452be;
            }
            if (param_1[6] == 1) {
              (**(code **)(PTR_DAT_10045004 + 0x20))();
              goto LAB_10044db2;
            }
          }
          iVar15 = (*(code *)DAT_10045008[2])();
          if (iVar15 == 0x60) goto LAB_10044db2;
          uVar17 = 0x60;
          pcVar16 = (code *)*puVar29;
          break;
        case (byte *)0x2:
          goto switchD_10044d7e_caseD_2;
        case (byte *)0x3:
          if (unaff_r5 == (code *)0x0) goto switchD_10044fdc_default;
          if (unaff_r6 < (code *)0x2) goto switchD_10044fdc_default;
          bVar13 = param_1[5];
          bVar3 = param_1[6];
          uVar34 = *(undefined2 *)(param_1 + 5);
          pcVar31 = (code *)(uint)bVar3;
          if (unaff_r6 < &DAT_00000005) {
            pcVar41 = (code *)0x0;
            unaff_r5 = (code *)0x104;
            unaff_r6 = (code *)&BusFault;
          }
          else {
            unaff_r6 = (code *)(uint)param_1[7];
            pcVar41 = (code *)(uint)param_1[8];
            unaff_r5 = (code *)((*(ushort *)(param_1 + 9) & 0xff) << 8 |
                               (uint)(*(ushort *)(param_1 + 9) >> 8));
          }
          local_60 = pcVar31;
          local_5c = unaff_r6;
          local_58 = unaff_r5;
          FUN_100a5b78((uint)pcVar16 | 0x9d0034,PTR_s__ble_ctrl_prompter_1004503c,
                       PTR_s_prompter_ctrl__d___index__d__fon_10045038,bVar13);
          iVar15 = DAT_100452d4;
          puVar29 = DAT_100452d0;
          switch(bVar13) {
          case 0:
            iVar15 = (*(code *)DAT_100452d0[2])();
            if (iVar15 == 0x62) {
              FUN_1002eb04();
            }
            break;
          case 1:
            *(undefined1 *)(DAT_100452d4 + 0x69a) = 1;
            *(byte *)(iVar15 + 0x699) = bVar3;
            iVar15 = (*(code *)puVar29[2])();
            if (iVar15 == 0x62) {
              FUN_1004375c(0x62,0);
            }
            else {
              (*(code *)*puVar29)(0x62);
            }
            break;
          case 2:
            pcVar40 = (code *)FUN_10034a08(pcVar31);
            if (pcVar40 == (code *)0x0) {
              uVar39 = (uint)pcVar16 | 0xf90011;
LAB_1004516e:
              FUN_100a5b78(uVar39,PTR_s__ble_ctrl_prompter_100452dc,
                           PTR_s_prompter_get_file_name_by_index_f_100452f0,pcVar31);
              pcVar16 = (code *)0xffffffff;
              goto LAB_10044dd4;
            }
            FUN_1011ea48(&local_44,0,0x10);
            FUN_10035220(pcVar40,&local_44);
            uVar21 = (undefined1)local_38;
            pcVar31 = (code *)((uint)local_38 & 0xff);
            local_38._0_2_ = CONCAT11((char)pcVar41,(char)unaff_r6);
            local_38 = (undefined4 *)CONCAT22((short)unaff_r5,(ushort)local_38);
            local_60 = unaff_r6;
            local_5c = unaff_r5;
            local_58 = pcVar41;
            FUN_100a5b78((uint)pcVar16 | 0xcc0034,PTR_s__ble_ctrl_prompter_100452dc,
                         PTR_s_Settings_updated___font___d_>_d__100452d8,pcVar31);
            if (unaff_r6 == pcVar31) {
LAB_10045156:
              FUN_1003512c(pcVar40,&local_44);
            }
            else {
              iVar15 = FUN_10035380(pcVar40,pcVar31,unaff_r6);
              if (iVar15 != 0) {
                FUN_100a5b78((uint)pcVar16 | 0xd80011,PTR_s__ble_ctrl_prompter_100452dc,
                             PTR_s_Smart_reload_failed__using_fallb_100452ec);
                goto LAB_10045156;
              }
              FUN_100a5b78((uint)pcVar16 | 0xd50031,PTR_s__ble_ctrl_prompter_100452dc,
                           PTR_s_Smart_reload_successful_for_font_100452e0);
            }
            iVar15 = (*(code *)DAT_100452d0[2])();
            puVar30 = DAT_100452e4;
            if (iVar15 == 0x62) {
              *DAT_100452e4 = uVar21;
              puVar30[1] = (char)unaff_r6;
              *(short *)(puVar30 + 2) = (short)unaff_r5;
              puVar30[4] = (char)pcVar41;
              puVar30[5] = 1;
              FUN_1004375c();
              FUN_100a5b78((uint)pcVar16 | 0xf40031,PTR_s__ble_ctrl_prompter_100452dc,
                           PTR_s_Triggered_settings_update_via_UI_100452e8);
            }
            break;
          case 3:
            iVar15 = FUN_10034a08(pcVar31);
            if (iVar15 == 0) {
              uVar39 = DAT_100452f4 | (uint)pcVar16;
              unaff_r5 = (code *)0x0;
              goto LAB_1004516e;
            }
            FUN_1011ea48(&local_44,0,0x10);
            FUN_10035220(iVar15,&local_44);
            unaff_r6 = (code *)((uint)local_38 & 0xff);
            unaff_r5 = (code *)((uint)local_38 >> 0x10);
            pcVar41 = (code *)((uint)local_38 >> 8 & 0xff);
            break;
          default:
            goto switchD_10044fdc_default;
          }
          local_44 = 0x3fd;
          local_40 = &local_34;
          unaff_r5 = (code *)(((uint)unaff_r5 & 0xff) << 8 | (uint)unaff_r5 >> 8);
          local_34._0_3_ = CONCAT12((char)unaff_r6,uVar34);
          local_34 = CONCAT13((char)pcVar41,(uint3)local_34);
          local_30 = (byte *)CONCAT22(local_30._2_2_,(short)unaff_r5);
          local_3c = (code *)0x6;
          FUN_100506fc(&local_44);
          goto LAB_10044e9c;
        case (byte *)0x4:
          if (unaff_r5 == (code *)0x0) goto switchD_10044fdc_default;
          if (param_1[5] == 1) {
            (*(code *)*DAT_100452d0)(0x65);
          }
          else if (param_1[5] == 2) {
            if (unaff_r6 < &DAT_00000005) goto switchD_10044fdc_default;
            unaff_r5 = (code *)((*(ushort *)(param_1 + 6) & 0xff) << 8 |
                               (uint)(*(ushort *)(param_1 + 6) >> 8));
            unaff_r6 = (code *)((*(ushort *)(param_1 + 8) & 0xff) << 8 |
                               (uint)(*(ushort *)(param_1 + 8) >> 8));
            local_60 = unaff_r6;
            FUN_100a5b78(DAT_100452f8 | (uint)pcVar16,DAT_10045300,DAT_100452fc,unaff_r5);
            uVar39 = DAT_10045304;
            iVar15 = DAT_100452d4;
            pcVar31 = (code *)0x117;
            if (unaff_r5 < (code *)0x118) {
              pcVar31 = unaff_r5;
            }
            if ((code *)0x76 < unaff_r6) {
              unaff_r6 = (code *)0x77;
            }
            *(short *)(DAT_100452d4 + 0x3b0) = (short)pcVar31;
            *(short *)(iVar15 + 0x3b2) = (short)unaff_r6;
            local_60 = unaff_r6;
            FUN_100a5b78(uVar39 | (uint)pcVar16,DAT_10045300,PTR_s_APP_adjust_pd_x__d__y__d_10045308
                        );
            iVar15 = (*(code *)DAT_100452d0[2])();
            if (iVar15 == 0x65) {
              FUN_1004375c(0x65,0);
            }
          }
          else {
            iVar15 = (*(code *)DAT_100452d0[2])();
            if (iVar15 == 0x65) {
              FUN_1002eb04();
            }
          }
          FUN_10044bdc();
          goto LAB_10044e9c;
        default:
          pcVar16 = (code *)0xffffff7a;
          goto LAB_10044dd4;
        case (byte *)0x6:
          if (unaff_r5 == (code *)0x0) goto switchD_10044fdc_default;
          if (param_1[5] == 0) {
            iVar15 = (*(code *)DAT_100452d0[2])();
            bVar42 = iVar15 == 0x66;
LAB_100452be:
            if (bVar42) {
              FUN_1002eb04();
            }
            goto LAB_10044db2;
          }
          uVar17 = 0x66;
          pcVar16 = (code *)*DAT_100452d0;
          break;
        case (byte *)0x7:
          if (unaff_r5 == (code *)0x0) goto switchD_10044fdc_default;
          if (param_1[5] == 0) {
            pcVar16 = *(code **)(PTR_DAT_1004530c + 8);
          }
          else {
            pcVar16 = *(code **)(PTR_DAT_1004530c + 4);
          }
          (*pcVar16)();
          FUN_10044c70();
          goto LAB_10044e9c;
        case (byte *)0x8:
          if (unaff_r5 == (code *)0x0) goto switchD_10044fdc_default;
          if (param_1[5] == 0) {
            pcVar16 = *(code **)(PTR_DAT_10045310 + 8);
          }
          else {
            pcVar16 = *(code **)(PTR_DAT_10045310 + 4);
          }
          (*pcVar16)();
          FUN_10044cc8();
          goto LAB_10044e9c;
        }
        (*pcVar16)(uVar17);
LAB_10044db2:
        pcVar16 = (code *)0x0;
LAB_10044dd4:
        local_44 = (uint)CONCAT11((char)local_4c,0xfd);
        local_40 = (undefined4 *)0x0;
        local_3c = (code *)0x0;
        if ((int)pcVar16 < 0) {
          bVar13 = 4;
LAB_10044df4:
          local_3c = (code *)((uint)bVar13 << 0x10);
          FUN_100506fc(&local_44);
        }
        else {
          if (pcVar16 == (code *)0x0) {
            bVar13 = 8;
            goto LAB_10044df4;
          }
          pcVar16 = (code *)0x1;
        }
LAB_10044dfe:
        if (*(byte **)PTR_DAT_10044ff0 == local_2c) {
          return pcVar16;
        }
        FUN_1013cdc0();
switchD_10044d7e_caseD_2:
        if ((unaff_r5 == (code *)0x0) || (unaff_r6 < (code *)0x3)) {
switchD_10044fdc_default:
          pcVar16 = (code *)0xffffffea;
          goto LAB_10044dd4;
        }
        if (unaff_r6 == (code *)0x3) {
          unaff_r6 = (code *)0x0;
        }
        else {
          unaff_r6 = (code *)(uint)(byte)pcVar40[5];
        }
        cVar12 = pcVar40[1];
        unaff_r5 = (code *)(uint)(byte)cVar12;
        cVar33 = pcVar40[2];
        pcVar31 = (code *)(uint)(byte)pcVar40[3];
        local_60 = unaff_r5;
        FUN_100a5b78((uint)pcVar16 | 0x200032,PTR_s__ble_ctrl_translate_10045010,
                     PTR_s___>advanced_mode__d__ctrl__d_1004500c,unaff_r6);
        puVar20 = PTR_DAT_10045014;
        if (unaff_r5 == (code *)0x1) {
          local_60 = pcVar31;
          FUN_100a5b78((uint)pcVar16 | 0x220032,PTR_s__ble_ctrl_translate_10045010,
                       PTR_s_Translation_start_original__d_ta_10045018,cVar33);
          pcVar40 = *(code **)(puVar20 + 0x14);
          (*pcVar40)(0,cVar33);
          (*pcVar40)(1,pcVar31);
          pcVar40 = *(code **)(puVar20 + 0xc);
          (*pcVar40)(0,cVar33);
          (*pcVar40)(1,pcVar31);
          (**(code **)(puVar20 + 0x24))(unaff_r6 != (code *)0x0);
          FUN_10048084(1,cVar33,pcVar31);
          puVar29 = DAT_10045008;
          if (*(int *)(DAT_1004501c + 0xe4) != 0) {
            *(code *)(*(int *)(DAT_1004501c + 0xe4) + 0x1a25) = cVar12;
            iVar15 = (*(code *)puVar29[2])();
            if (iVar15 != 0x54) {
              (*(code *)*puVar29)(0x54);
            }
          }
LAB_10044e9c:
          pcVar16 = (code *)0x1;
          goto LAB_10044dd4;
        }
        if (unaff_r5 == (code *)0x2) {
          FUN_100a5b78((uint)pcVar16 | 0x320031,PTR_s__ble_ctrl_translate_10045010,
                       PTR_s_Translation_setting_10045020);
          puVar20 = PTR_DAT_10045014;
          local_60 = pcVar31;
          FUN_100a5b78((uint)pcVar16 | 0x330032,PTR_s__ble_ctrl_translate_10045010,
                       PTR_s_Translation_setting_original__d__10045024,cVar33);
          (**(code **)(puVar20 + 0x24))(0);
          unaff_r5 = *(code **)(puVar20 + 0x14);
          (*unaff_r5)(0,cVar33);
          (*unaff_r5)(1,pcVar31);
          uVar17 = 0;
          pcVar16 = *(code **)(puVar20 + 0x1c);
        }
        else {
          if (unaff_r5 != (code *)0x3) {
            if (unaff_r5 != (code *)0x0) {
              FUN_100a5b78((uint)pcVar16 | 0x4d0011,PTR_s__ble_ctrl_translate_10045010,
                           PTR_s_Translation_command_error_10045034);
              goto switchD_10044fdc_default;
            }
            FUN_100a5b78((uint)pcVar16 | 0x450031,PTR_s__ble_ctrl_translate_10045010,
                         PTR_s_Translation_end_10045030);
            iVar15 = (*(code *)DAT_10045008[2])();
            if (iVar15 == 0x54) {
              FUN_1002eb04();
            }
            FUN_10048084(0,cVar33,pcVar31);
            goto LAB_10044db2;
          }
          FUN_100a5b78((uint)pcVar16 | 0x3c0031,PTR_s__ble_ctrl_translate_10045010,
                       PTR_s_Translation_advanced_mode_10045028);
          puVar20 = PTR_DAT_10045014;
          local_60 = pcVar31;
          FUN_100a5b78((uint)pcVar16 | 0x3d0032,PTR_s__ble_ctrl_translate_10045010,
                       PTR_s_Translation_advanced_mode_origin_1004502c,cVar33);
          (**(code **)(puVar20 + 0x24))(1);
          unaff_r5 = *(code **)(puVar20 + 0x14);
          (*unaff_r5)(0,cVar33);
          (*unaff_r5)(1,pcVar31);
          uVar17 = 1;
          pcVar16 = *(code **)(puVar20 + 0x1c);
        }
        (*pcVar16)(uVar17);
        pcVar16 = *(code **)(puVar20 + 0xc);
        (*pcVar16)(0,cVar33);
        (*pcVar16)(1,pcVar31);
        goto LAB_10044db2;
      }
      break;
    case 0xfe:
      if ((undefined1 *)*(int *)PTR_DAT_10044bbc == local_1c) {
        local_1c = *(undefined1 **)PTR_DAT_10044724;
        if (unaff_r4 == 0) {
          pcVar40 = (code *)0xffffff7a;
          goto LAB_1004469e;
        }
        pbVar38 = param_1 + 5;
        unaff_r7 = (byte *)(uint)(byte)*pcVar40;
        uVar32 = ((int)PTR_DAT_1004472c - (int)PTR_DAT_10044728) * 0x20 & 0xff00;
        local_2c = param_1 + 6;
        uVar39 = unaff_r4 - 1 & 0xffff;
        local_30 = pbVar38;
        FUN_100a5b78(uVar32 | 0x2880033,PTR_s__ble_rx_fctory_command_10044734,
                     PTR_s__ble_rx_fctory_command__d__s___s_10044730,unaff_r7);
        local_2c = (byte *)(uint)param_1[7];
        local_30 = (byte *)(uint)param_1[6];
        FUN_100a5b78(DAT_10044738 | uVar32,PTR_s__ble_rx_fctory_command_10044734,
                     PTR_s__ble_rx_fctory_0x_x_0x_x_0x_x_0x_1004473c,param_1[5]);
        switch(unaff_r7) {
        case (byte *)0x1:
          FUN_101188d0(PTR_s_BLE_SET_BT_NAME__d___s_10044740,
                       *(ushort *)(param_1 + 5) << 8 | *(ushort *)(param_1 + 5) >> 8,param_1 + 7);
          FUN_1003f160(param_1 + 7);
          break;
        case (byte *)0x2:
          goto switchD_10044656_caseD_2;
        case (byte *)0x3:
          FUN_101188d0(PTR_s_BLE_ENTER_PPT_1004474c);
          puVar29 = DAT_10044748;
          if (param_1[5] == 1) {
            iVar15 = (*(code *)DAT_10044748[2])();
            if (iVar15 != 0x6c) {
              uVar17 = 0x6c;
              pcVar40 = (code *)*puVar29;
              goto LAB_100446b8;
            }
          }
          else {
            FUN_1002eb04();
          }
          break;
        case (byte *)0x4:
          FUN_101188d0(PTR_s_BLE_EANBLE_TP_10044750);
          bVar13 = param_1[5];
          iVar15 = FUN_10112e84(PTR_s_tpkey_10044754);
          if (iVar15 != 0) {
            if (bVar13 == 0) {
              pcVar40 = (code *)(*(undefined4 **)(iVar15 + 8))[1];
            }
            else {
              pcVar40 = (code *)**(undefined4 **)(iVar15 + 8);
            }
            if (pcVar40 != (code *)0x0) {
              (*pcVar40)();
            }
          }
          break;
        case (byte *)0x5:
          FUN_1004453c(pbVar38,uVar39);
          break;
        case (byte *)0x6:
          FUN_10044598(pbVar38,uVar39);
        }
        while( true ) {
          local_28._0_2_ = CONCAT11((char)unaff_r7,0xfe);
          local_28 = (byte *)(uint)(ushort)local_28;
          local_24 = (byte *)0x0;
          local_20 = 0;
          FUN_100506fc(&local_28);
          pcVar40 = (code *)0x0;
LAB_1004469e:
          if ((undefined1 *)*(int *)PTR_DAT_10044724 == local_1c) break;
          FUN_1013cdc0(pcVar40);
switchD_10044656_caseD_2:
          FUN_101188d0(PTR_s_BLE_TEST_VIEW_10044744);
          uVar17 = 0x69;
          pcVar40 = (code *)*DAT_10044748;
LAB_100446b8:
          (*pcVar40)(uVar17);
        }
        return pcVar40;
      }
      break;
    default:
      goto switchD_10044a94_default;
    }
    goto LAB_10044aa6;
  }
  if (bVar13 == 0) goto switchD_10044a94_default;
  switch(bVar13) {
  case 2:
    if ((undefined1 *)*(int *)PTR_DAT_10044bbc != local_1c) break;
    goto LAB_10044aaa;
  case 3:
    if ((undefined1 *)*(int *)PTR_DAT_10044bbc == local_1c) {
      local_24 = *(byte **)PTR_DAT_10043e08;
      pcVar16 = pcVar40;
      if (unaff_r4 != 0) {
        unaff_r6 = (code *)(uint)(byte)*pcVar40;
        if (unaff_r6 == (code *)0x2) {
          if (*(int *)(DAT_10043e1c + 0xec) == 0) {
            uVar17 = thunk_FUN_1009f30c(0xb8,PTR_s__ble_rx_navi_info_10043e3c);
            *(undefined4 *)(iVar15 + 0xec) = uVar17;
          }
          puVar37 = *(uint **)(iVar15 + 0xec);
          if (puVar37 != (uint *)0x0) {
            *(undefined1 *)(puVar37 + 7) = 2;
            *(ushort *)(puVar37 + 6) = *(ushort *)(param_1 + 5) << 8 | *(ushort *)(param_1 + 5) >> 8
            ;
            *(ushort *)(puVar37 + 5) = *(ushort *)(param_1 + 7) << 8 | *(ushort *)(param_1 + 7) >> 8
            ;
            uVar39 = *(uint *)(param_1 + 9);
            *puVar37 = uVar39 << 0x18 | (uVar39 >> 8 & 0xff) << 0x10 | (uVar39 >> 0x10 & 0xff) << 8
                       | uVar39 >> 0x18;
            uVar39 = *(uint *)(param_1 + 0xd);
            puVar37[1] = uVar39 << 0x18 | (uVar39 >> 8 & 0xff) << 0x10 |
                         (uVar39 >> 0x10 & 0xff) << 8 | uVar39 >> 0x18;
            *(byte *)((int)puVar37 + 0x1d) = param_1[0x11];
            uVar39 = *(uint *)(param_1 + 0x12);
            puVar37[2] = uVar39 << 0x18 | (uVar39 >> 8 & 0xff) << 0x10 |
                         (uVar39 >> 0x10 & 0xff) << 8 | uVar39 >> 0x18;
            pbVar38 = (byte *)((int)puVar37 + 0x1e);
            pbVar28 = param_1 + 0x16;
            do {
              pbVar26 = pbVar28 + 4;
              pbVar22 = pbVar38 + 4;
              *(undefined4 *)pbVar38 = *(undefined4 *)pbVar28;
              pbVar38 = pbVar22;
              pbVar28 = pbVar26;
            } while (pbVar26 != param_1 + 0x42);
            *pbVar22 = *pbVar26;
            goto LAB_10043c8e;
          }
          FUN_100a5b78(((int)PTR_DAT_10043e0c - (int)PTR_DAT_10043e10) * 0x20 & 0xff00U | 0x8d0011,
                       PTR_s__ble_rx_navi_info_10043e40,PTR_s_Failed_to_allocate_memory_10043e24);
          iVar15 = 0;
          goto LAB_10043b5e;
        }
        if (unaff_r6 == (code *)0x3) goto LAB_10043ca0;
        if (unaff_r6 == (code *)0x1) {
          pcVar31 = (code *)(unaff_r4 - 1 & 0xffff);
          if (pcVar31 != (code *)0x0) goto LAB_10043b96;
          uVar39 = ((int)PTR_DAT_10043e0c - (int)PTR_DAT_10043e10) * 0x20 & 0xff00U | 0x250000;
          puVar20 = PTR_s_Data_length_error_10043e14;
          goto LAB_10043b52;
        }
        FUN_100a5b78(((int)PTR_DAT_10043e84 - (int)PTR_DAT_10043e80) * 0x20 & 0xff00U | 0xc00011,
                     PTR_s__ble_rx_navi_command_10043e8c,PTR_s_Invalid_command___d_10043e88,unaff_r6
                    );
      }
      pcVar31 = (code *)0xffffff7a;
      do {
        if ((byte *)*(int *)PTR_DAT_10043e08 == local_24) {
          return pcVar31;
        }
        pcVar40 = (code *)FUN_1013cdc0();
LAB_10043b96:
        iVar35 = DAT_10043e1c;
        if (pcVar40[1] == (code)0x0) {
          if (*(int *)(DAT_10043e1c + 0xec) == 0) {
            uVar17 = thunk_FUN_1009f30c(0xb8,PTR_s__ble_rx_navi_state_10043e20);
            *(undefined4 *)(iVar35 + 0xec) = uVar17;
          }
          puVar37 = *(uint **)(iVar35 + 0xec);
          if (puVar37 == (uint *)0x0) {
            uVar39 = ((int)PTR_DAT_10043e0c - (int)PTR_DAT_10043e10) * 0x20 & 0xff00U | 0x2f0000;
            puVar20 = PTR_s_Failed_to_allocate_memory_10043e24;
          }
          else {
            FUN_1011ea48(puVar37,0,0xb8);
            *(undefined1 *)(puVar37 + 7) = 1;
            if (pcVar31 < (code *)0x3) {
              uVar39 = ((int)PTR_DAT_10043e0c - (int)PTR_DAT_10043e10) * 0x20 & 0xff00U | 0x380000;
              puVar20 = PTR_s_Data_length_error_10043e14;
            }
            else {
              *(ushort *)((int)puVar37 + 0x1a) =
                   *(ushort *)(pcVar16 + 2) << 8 | *(ushort *)(pcVar16 + 2) >> 8;
              if (pcVar31 < &DAT_00000007) {
                uVar39 = ((int)PTR_DAT_10043e0c - (int)PTR_DAT_10043e10) * 0x20 & 0xff00U | 0x3f0000
                ;
                puVar20 = PTR_s_Data_length_error_10043e14;
              }
              else {
                uVar39 = *(uint *)(pcVar16 + 4);
                *puVar37 = uVar39 << 0x18 | (uVar39 >> 8 & 0xff) << 0x10 |
                           (uVar39 >> 0x10 & 0xff) << 8 | uVar39 >> 0x18;
                puVar29 = DAT_10043e2c;
                if (pcVar31 < &DAT_00000009) {
                  uVar39 = ((int)PTR_DAT_10043e0c - (int)PTR_DAT_10043e10) * 0x20 & 0xff00U |
                           0x460000;
                  puVar20 = PTR_s_Data_length_error_10043e14;
                }
                else {
                  uVar39 = (*(ushort *)(pcVar16 + 8) & 0xff) << 8 |
                           (uint)(*(ushort *)(pcVar16 + 8) >> 8);
                  if (((int)(uVar39 + 9) <= (int)pcVar31) && (uVar39 < 100)) {
                    FUN_1011ea40((int)puVar37 + 0x52,pcVar16 + 10);
                    FUN_100434c0(puVar37 + 3);
                    iVar15 = (*(code *)puVar29[2])();
                    if (iVar15 == 0x56) {
LAB_10043c8e:
                      FUN_1004375c(0x56,puVar37);
                    }
                    else {
                      iVar15 = FUN_100efda8();
                      if (iVar15 == 5) {
                        *(undefined1 *)(iVar35 + 0x3b4) = 1;
                      }
                      else {
                        (*(code *)*puVar29)(0x56);
                      }
                    }
                    goto LAB_10043ca0;
                  }
                  uVar39 = ((int)PTR_DAT_10043e0c - (int)PTR_DAT_10043e10) * 0x20 & 0xff00U |
                           0x4d0000;
                  puVar20 = PTR_s_Data_length_error_or_destination_10043e28;
                }
              }
            }
          }
LAB_10043b52:
          FUN_100a5b78(uVar39 | 0x11,PTR_s__ble_rx_navi_state_10043e18,puVar20);
          iVar15 = -1;
        }
        else if (pcVar40[1] == (code)0x1) {
          puVar29 = *(undefined4 **)(DAT_10043e1c + 0xec);
          if (puVar29 == (undefined4 *)0x0) {
            uVar39 = ((int)PTR_DAT_10043e0c - (int)PTR_DAT_10043e10) * 0x20 & 0xff00U | 0x640000;
            puVar20 = PTR_s_Navigation_data_not_initialized_10043e30;
            goto LAB_10043b52;
          }
          FUN_100434c0(puVar29 + 4);
          *(uint *)(iVar35 + 0xf4) = (uint)(puVar29[4] - puVar29[3]) / 0x3c + 1;
          *(undefined4 *)(iVar35 + 0xf8) = *puVar29;
          FUN_1011ea48(iVar35 + 0xfc,0,0xc6);
          uVar17 = FUN_1011ea10((int)puVar29 + 0x52);
          iVar15 = 0;
          FUN_1013d03e(iVar35 + 0xfc,(int)puVar29 + 0x52,uVar17,0x5b0);
          thunk_FUN_1009efe8(PTR_s_NAVI_HISTORY_10043e34,iVar35 + 0xf4,0xd0);
          FUN_1012d1ae(PTR_s_NAVI_HISTORY_10043e34);
          FUN_1012d1f4(*(undefined4 *)(iVar35 + 0xec));
          puVar29 = DAT_10043e2c;
          *(undefined4 *)(iVar35 + 0xec) = 0;
          iVar14 = (*(code *)puVar29[2])();
          if (iVar14 == 0x56) {
            FUN_1004375c(0x56,*(undefined4 *)(iVar35 + 0xec));
          }
          else {
            iVar15 = 0;
            if (*(char *)(iVar35 + 0x3b4) == '\x01') {
              *(undefined1 *)(iVar35 + 0x3b4) = 0;
            }
          }
        }
        else {
          FUN_100a5b78(((int)PTR_DAT_10043e0c - (int)PTR_DAT_10043e10) * 0x20 & 0xff00U | 0x7d0011,
                       PTR_s__ble_rx_navi_state_10043e18,PTR_s_Invalid_navigation_state_10043e38);
LAB_10043ca0:
          iVar15 = 0;
        }
LAB_10043b5e:
        pcVar16 = (code *)0x0;
        local_30._0_2_ = CONCAT11((char)unaff_r6,3);
        local_30 = (byte *)(uint)(ushort)local_30;
        local_2c = (byte *)0x0;
        if (iVar15 == -1) {
          local_28 = (byte *)0x40000;
          FUN_100506fc(&local_30);
          pcVar31 = (code *)0xffffffff;
        }
        else {
          local_28 = (byte *)0x80000;
          FUN_100506fc(&local_30);
          pcVar31 = pcVar16;
        }
      } while( true );
    }
    break;
  case 4:
    if ((undefined1 *)*(int *)PTR_DAT_10044bbc == local_1c) {
      local_2c = *(byte **)PTR_DAT_100472fc;
      local_44 = unaff_r4;
      if (unaff_r4 == 0) {
        pcVar40 = (code *)0xffffff7a;
        goto LAB_1004710c;
      }
      unaff_r8 = param_1 + 5;
      local_48 = (code *)(uint)(byte)*pcVar40;
      switch(local_48) {
      case (code *)0x2:
        uVar25 = *(ushort *)(param_1 + 5) << 8 | *(ushort *)(param_1 + 5) >> 8;
        unaff_r11 = (byte *)(int)(short)uVar25;
        unaff_r9 = (byte *)(uint)uVar25;
        unaff_r7 = (byte *)thunk_FUN_1009f30c(unaff_r9 + 1,PTR_s__ble_rx_txt_message_10047300);
        unaff_r6 = (code *)(((int)PTR_DAT_10047304 - (int)PTR_DAT_10047308) * 0x20 & 0xff00);
        if (unaff_r7 == (byte *)0x0) {
          uVar39 = (uint)unaff_r6 | 0x100000;
          puVar20 = PTR_s_malloc_appid_data_failed_1004730c;
          goto LAB_10047096;
        }
        FUN_1011ea40(unaff_r7,param_1 + 7,unaff_r9);
        pcVar40 = (code *)(**(code **)(PTR_DAT_10047314 + 0x1c))(unaff_r7);
        local_50 = unaff_r7;
        FUN_100a5b78((uint)unaff_r6 | 0x160032,PTR_s__ble_rx_txt_message_10047310,
                     PTR_s_appid_data__d____s_10047318,pcVar40);
        if (pcVar40 != (code *)0x0) goto LAB_1004711c;
        FUN_100a5b78((uint)unaff_r6 | 0x190031,PTR_s__ble_rx_txt_message_10047310,
                     PTR_s_Notify_user_appid__d_is_not_enab_1004731c,0);
        FUN_1012d1f4(unaff_r7);
        break;
      case (code *)0x3:
      case (code *)0x4:
      case (code *)0x5:
        goto switchD_1004703e_caseD_3;
      default:
        FUN_100a5b78(((int)PTR_DAT_1004741c - (int)PTR_DAT_10047418) * 0x20 & 0xff00U | 0x1c00011,
                     PTR_s__ble_rx_text_command_10047430,PTR_s_ERR_cmd_1004742c,local_48);
        pcVar40 = (code *)0xffffff7a;
        break;
      case (code *)0x8:
        local_50 = (byte *)0xa8;
        FUN_100a5b78(((int)PTR_DAT_10047304 - (int)PTR_DAT_10047308) * 0x20 & 0xff00U | 0xa80032,
                     PTR_s__ble_rx_txt_promp_10047338,PTR_s___FUN_s__d_10047334);
        goto LAB_1004709e;
      case (code *)0xb:
        local_50 = &DAT_000000cb;
        FUN_100a5b78(((int)PTR_DAT_10047304 - (int)PTR_DAT_10047308) * 0x20 & 0xff00U | 0xcb0032,
                     PTR_s__ble_rx_local_promp_10047340,PTR_s___FUN__s__d_1004733c);
        bVar13 = param_1[5];
        if (bVar13 == 0xff) {
          if (param_1[6] == 0xff) {
            thunk_FUN_1009efa0(PTR_s_LOCAL_PROMP_10047344,&local_30,2);
            FUN_1012d1ae(PTR_s_LOCAL_PROMP_10047344);
            FUN_100487f4((uint)local_30 & 0xff,local_30._1_1_);
            pcVar40 = (code *)0x1;
            break;
          }
        }
        else if (((bVar13 & 0xfb) == 0x10) || (bVar13 == 0x16)) goto LAB_10047358;
        param_1[5] = 0x14;
LAB_10047358:
        thunk_FUN_1009efe8(DAT_10047410,unaff_r8,2);
        FUN_1012d1ae(DAT_10047410);
        iVar15 = (**(code **)(DAT_10047414 + 8))();
        if (iVar15 != 0x62) goto switchD_1004703e_caseD_3;
        FUN_1004375c(0x62,0);
        goto switchD_1004703e_caseD_3;
      case (code *)0x10:
        local_50 = (byte *)0x18c;
        FUN_100a5b78(((int)PTR_DAT_1004741c - (int)PTR_DAT_10047418) * 0x20 & 0xff00U | 0x18c0032,
                     PTR_s__ble_rx_sync_cheatsheet_10047424,PTR_s___FUN__s__d_10047420);
        pcVar40 = (code *)0x1;
        (**(code **)(PTR_DAT_10047428 + 0xc))();
        local_3c = (code *)0x1004;
        local_38 = &local_30;
        local_30 = (byte *)CONCAT31(local_30._1_3_,1);
        local_34 = 1;
        FUN_100506fc(&local_3c);
      }
LAB_100470e4:
      do {
        local_3c = (code *)(uint)CONCAT11((char)local_48,4);
        local_38 = (undefined4 *)0x0;
        local_34 = 0;
        if ((int)pcVar40 < 0) {
          local_34._0_3_ = 0x40000;
LAB_10047106:
          local_34 = (uint)(uint3)local_34;
          FUN_100506fc(&local_3c);
        }
        else {
          if (pcVar40 == (code *)0x0) {
            local_34._0_3_ = 0x80000;
            goto LAB_10047106;
          }
          pcVar40 = (code *)0x1;
        }
LAB_1004710c:
        if (*(byte **)PTR_DAT_100472fc == local_2c) {
          return pcVar40;
        }
        FUN_1013cdc0();
LAB_1004711c:
        local_3c = (code *)0x0;
        local_38 = (undefined4 *)0x0;
        local_34 = local_34 & 0xffff0000;
        FUN_100433f8(&local_3c);
        puVar18 = (undefined2 *)thunk_FUN_1009f30c(0x19e,PTR_s__ble_rx_txt_message_10047300);
        if (puVar18 != (undefined2 *)0x0) {
          FUN_1011ea48(puVar18,0,0x19e);
          *puVar18 = local_38._2_2_;
          *(undefined1 *)(puVar18 + 1) = (undefined1)local_38;
          *(undefined1 *)((int)puVar18 + 3) = local_3c._3_1_;
          *(undefined1 *)(puVar18 + 2) = local_3c._2_1_;
          *(undefined1 *)((int)puVar18 + 5) = local_3c._1_1_;
          *(undefined1 *)(puVar18 + 3) = (undefined1)local_3c;
          *(char *)(puVar18 + 0xbd) = (char)pcVar40;
          *(undefined1 *)(puVar18 + 4) = local_38._1_1_;
          *(undefined1 *)((int)puVar18 + 7) = 0;
          *(undefined1 *)((int)puVar18 + 0x17b) = 0;
          uVar32 = (*(ushort *)(unaff_r8 + ((uint)(unaff_r9 + 2) & 0xffff)) & 0xff) << 8 |
                   (uint)(*(ushort *)(unaff_r8 + ((uint)(unaff_r9 + 2) & 0xffff)) >> 8);
          uVar39 = uVar32;
          if (0x22 < uVar32) {
            uVar39 = 0x23;
          }
          FUN_1011ea40(puVar18 + 10,unaff_r8 + ((uint)(unaff_r11 + 4) & 0xffff),uVar39);
          uVar39 = uVar32 + ((uint)(unaff_r11 + 4) & 0xffff) & 0xffff;
          FUN_1011e9f8(puVar18 + 0xbf,unaff_r7,0x20);
          unaff_r9 = (byte *)((*(ushort *)(unaff_r8 + uVar39) & 0xff) << 8 |
                             (uint)(*(ushort *)(unaff_r8 + uVar39) >> 8));
          uVar39 = uVar39 + 2 & 0xffff;
          unaff_r11 = (byte *)(puVar18 + 0x1c);
          if (unaff_r9 < (byte *)0x13d) {
            FUN_1011ea40(unaff_r11,unaff_r8 + uVar39,unaff_r9);
            pbVar38 = unaff_r9;
          }
          else {
            FUN_1011ea40(unaff_r11,unaff_r8 + uVar39,0x13c);
            uVar21 = PTR_s_____1016a8c6_0x18_10047324[2];
            puVar18[0xba] = *(undefined2 *)PTR_s_____1016a8c6_0x18_10047324;
            *(undefined1 *)(puVar18 + 0xbb) = uVar21;
            pbVar38 = (byte *)0x13f;
          }
          uVar39 = (uint)(unaff_r9 + uVar39) & 0xffff;
          if (uVar39 < (local_44 - 1 & 0xffff)) {
            uVar32 = *(uint *)(unaff_r8 + uVar39);
            FUN_100a5b78((uint)unaff_r6 | 0x4b0031,PTR_s__ble_rx_txt_message_10047310,
                         PTR_s_Android_message_timestamp__d_10047328,
                         uVar32 << 0x18 | (uVar32 >> 8 & 0xff) << 0x10 |
                         (uVar32 >> 0x10 & 0xff) << 8 | uVar32 >> 0x18);
            if (unaff_r8[uVar39 + 4 & 0xffff] == 0) goto LAB_10047264;
            FUN_100a5b78((uint)unaff_r6 | 0x500031,PTR_s__ble_rx_txt_message_10047310,
                         PTR_s_Android_message_is_remove_1004732c);
          }
          else {
LAB_10047264:
            local_50 = pbVar38;
            local_4c = unaff_r11;
            FUN_100a5b78((uint)unaff_r6 | 0x570033,PTR_s__ble_rx_txt_message_10047310,
                         PTR_s_Android_message_len__d_temp_len___10047330,unaff_r9);
            pcVar40 = *(code **)(PTR_DAT_10047314 + 8);
            puVar18[0xbc] = (short)pbVar38;
            (*pcVar40)(puVar18);
          }
          FUN_1012d1f4(puVar18);
          FUN_1012d1f4(unaff_r7);
switchD_1004703e_caseD_3:
          pcVar40 = (code *)0x0;
          goto LAB_100470e4;
        }
        FUN_1012d1f4(unaff_r7);
        uVar39 = (uint)unaff_r6 | 0x230000;
        puVar20 = PTR_s_malloc_message_failed_10047320;
LAB_10047096:
        FUN_100a5b78(uVar39 | 0x31,PTR_s__ble_rx_txt_message_10047310,puVar20);
LAB_1004709e:
        pcVar40 = (code *)0xffffffff;
      } while( true );
    }
    break;
  case 5:
    if ((undefined1 *)*(int *)PTR_DAT_10044bbc != local_1c) break;
    local_2c = *(byte **)PTR_DAT_10047714;
    if (unaff_r4 == 0) {
      pcVar40 = (code *)0xffffff7a;
      goto LAB_10047e7e;
    }
    cVar12 = *pcVar40;
    uVar39 = unaff_r4 - 1;
    pcVar40 = (code *)(uVar39 & 0xffff);
    if (10 < (byte)cVar12) {
      if (cVar12 == (code)0xfe) {
        FUN_1011ea48(DAT_10047d3c,0,0x70,0);
        if (*(byte **)(iVar14 + 0xf0) != (byte *)0x0) {
          pcVar40 = (code *)((*(ushort *)(param_1 + 6) & 0xff) << 8 |
                            (uint)(*(ushort *)(param_1 + 6) >> 8));
          if ((code *)0x3fe < pcVar40) {
            pcVar40 = (code *)0x3ff;
          }
          iVar15 = (int)PTR_DAT_10047d40 - (int)PTR_DAT_10047d44;
          **(byte **)(iVar14 + 0xf0) = param_1[5];
          local_5c = (code *)0x400;
          local_60 = pcVar40;
          local_58 = (code *)(param_1 + 8);
          FUN_100a5b78(iVar15 * 0x20 & 0xff00U | 0x1540034,PTR_s__ble_rx_stt_content_10047d4c,
                       PTR_s_ble_rx_stt_content_state___d__st_10047d48);
          FUN_1011ea48(*(int *)(iVar14 + 0xf0) + 5,0,0x400);
          iVar15 = *(int *)(iVar14 + 0xf0);
          *(short *)(iVar15 + 2) = (short)pcVar40;
          FUN_1011ea40(iVar15 + 5,param_1 + 8,pcVar40);
        }
        goto LAB_100474c6;
      }
switchD_10047460_caseD_6:
      FUN_100a5b78(DAT_10047720 | ((int)PTR_DAT_1004771c - (int)PTR_DAT_10047718) * 0x20 & 0xff00U,
                   PTR_s__ble_rx_voice_command_10047728,PTR_s_Error__Unknown_command__d_10047724,
                   cVar12);
      pcVar40 = (code *)0xffffff7a;
      goto LAB_1004753c;
    }
    if (cVar12 == (code)0x0) goto switchD_10047460_caseD_6;
    switch(cVar12) {
    case (code)0x1:
      bVar13 = param_1[5];
      pcVar16 = (code *)(uint)param_1[6];
      local_60 = pcVar16;
      FUN_100a5b78(((int)PTR_DAT_1004771c - (int)PTR_DAT_10047718) * 0x20 & 0xff00U | 0x210032,
                   PTR_s__ble_rx_voice_record_10047730,
                   PTR_s_ble_rx_voice_record_type____d_st_1004772c,bVar13);
      puVar29 = DAT_10047734;
      if (bVar13 == 4) {
        if (pcVar16 == (code *)0x1) {
          iVar15 = (*(code *)DAT_10047734[2])();
          if (iVar15 != 0x6d) {
            uVar17 = 0x6d;
            pcVar40 = (code *)*puVar29;
LAB_100474de:
            (*pcVar40)(uVar17);
            break;
          }
        }
        else {
          iVar15 = 0x6d;
        }
LAB_100474e6:
        FUN_1004375c(iVar15,pcVar16);
      }
      break;
    case (code)0x2:
      pcVar40 = *(code **)(DAT_10047738 + 0xe4);
      uVar32 = ((int)PTR_DAT_1004771c - (int)PTR_DAT_10047718) * 0x20 & 0xff00;
      if (pcVar40 == (code *)0x0) {
        uVar32 = uVar32 | 0x430000;
        puVar20 = PTR_s__ble_rx_voice_transl_10047740;
        puVar23 = PTR_s_Translate_data_is_NULL_1004773c;
      }
      else {
        pcVar40[1] = *pcVar40;
        cVar33 = (code)param_1[5];
        *pcVar40 = cVar33;
        if (1 < (byte)cVar33 - 1) {
          FUN_100a5b78(uVar32 | 0x4a0011,PTR_s__ble_rx_voice_transl_10047740,
                       PTR_s_Invalid_state___d_10047744);
          pcVar40 = (code *)0xfffffffe;
          goto LAB_1004753c;
        }
        cVar33 = (code)param_1[6];
        pcVar40[2] = cVar33;
        if ((((byte)cVar33 & 0xfb) != 0x10) && (cVar33 != (code)0x16)) {
          pcVar40[2] = (code)0x14;
        }
        iVar15 = *(int *)(pcVar40 + 8);
        if (iVar15 != 0) {
          iVar35 = FUN_10113cfc(DAT_1004774c,uVar39,10000,0);
          if (iVar35 != 0) {
            FUN_10119dc2(PTR_s_translate_mutex_Deadlock__10047750);
          }
          local_48 = (code *)(uint)*(byte *)(iVar15 + 0x1a0d);
          local_48[iVar15 + 0x1a0f] = *pcVar40;
          if (pcVar40[1] == (code)0x2) {
            bVar13 = *(char *)(iVar15 + 0x1a0e) + 1;
            if (7 < bVar13) {
              bVar13 = 8;
            }
            *(byte *)(iVar15 + 0x1a0e) = bVar13;
          }
          local_4c = param_1 + 5;
          local_44 = uVar32 | 0x690032;
          uVar39 = 2;
          iVar35 = 0;
          local_40 = (undefined4 *)(uVar32 | 0x700034);
          pcVar16 = (code *)(iVar15 + 4);
          local_3c = pcVar40 + 3;
          iVar14 = (int)local_48 * 600 + iVar15 + 0x4b4;
          while( true ) {
            pcVar31 = local_3c + 1;
            *local_3c = (code)local_4c[uVar39];
            pcVar41 = (code *)((*(ushort *)(local_4c + (uVar39 + 1 & 0xffff)) & 0xff) << 8 |
                              (uint)(*(ushort *)(local_4c + (uVar39 + 1 & 0xffff)) >> 8));
            *(short *)(iVar15 + iVar35 * 2) = (short)pcVar41;
            local_3c = pcVar31;
            if ((code *)0x257 < pcVar41) {
              local_60 = (code *)0x257;
              FUN_100a5b78(local_44,PTR_s__ble_rx_voice_transl_10047740,
                           PTR_s_Display_length__d_exceeds_max__d_10047754,pcVar41);
              pcVar41 = (code *)0x257;
            }
            FUN_1011ea48(pcVar16,0,pcVar41 + 1);
            uVar39 = uVar39 + 3 & 0xffff;
            FUN_1011ea40(pcVar16,local_4c + uVar39,pcVar41);
            local_60 = (code *)(uint)(byte)*pcVar40;
            uVar39 = uVar39 + *(ushort *)(iVar15 + iVar35 * 2) & 0xffff;
            local_5c = pcVar41;
            local_58 = pcVar16;
            FUN_100a5b78(local_40,PTR_s__ble_rx_voice_transl_10047740,
                         PTR_s_ble_translate__d__state____d__le_10047758,iVar35);
            pcVar16 = pcVar16 + 600;
            if (iVar35 != 0) break;
            iVar35 = 1;
          }
          FUN_1011ea48(iVar14,0,600);
          FUN_1011e9f0(iVar14,iVar15 + 0x25c);
          *(code **)(iVar15 + (int)(local_48 + 0x67a) * 4 + 4) = pcVar41;
          if (*pcVar40 == (code)0x2) {
            uVar39 = *(byte *)(iVar15 + 0x1a0d) + 1 & 7;
            *(char *)(iVar15 + 0x1a0d) = (char)uVar39;
            *(undefined4 *)(iVar15 + (uVar39 + 0x672) * 4 + 4) = 0;
          }
          pcVar40[0x1a24] = (code)0x1;
          if (*(short *)(iVar15 + 2) != 0) {
            (*(code *)DAT_10047734[2])();
          }
          FUN_10113e2c(DAT_1004774c);
          break;
        }
        uVar32 = uVar32 | 0x560000;
        puVar20 = PTR_s__ble_rx_voice_transl_10047740;
        puVar23 = PTR_s_Translation_data_is_NULL_10047748;
      }
      goto LAB_1004750c;
    case (code)0x3:
      pcVar16 = *(code **)(DAT_10047738 + 0xe8);
      uVar32 = ((int)PTR_DAT_1004771c - (int)PTR_DAT_10047718) * 0x20 & 0xff00;
      if (pcVar16 == (code *)0x0) {
        uVar32 = uVar32 | 0x930000;
        puVar20 = PTR_s__ble_rx_voice_ai_10047760;
        puVar23 = PTR_s_AI_data_is_NULL_1004775c;
      }
      else {
        *pcVar16 = pcVar16[1];
        pcVar16[1] = (code)param_1[5];
        pcVar31 = (code *)((*(ushort *)(param_1 + 6) & 0xff) << 8 |
                          (uint)(*(ushort *)(param_1 + 6) >> 8));
        if (pcVar31 + 3 <= pcVar40) {
          pcVar40 = (code *)(param_1 + 8);
          local_60 = pcVar31;
          local_5c = pcVar40;
          FUN_100a5b78(uVar32 | 0xa20033,PTR_s__ble_rx_voice_ai_10047a4c,
                       PTR_s_BLE_AI_role___d__len___d__data____10047a50);
          uVar25 = (byte)pcVar16[1] & 0xfd;
          if (((byte)pcVar16[1] & 0xfd) == 0) {
            cVar33 = pcVar16[0x14ca];
            iVar15 = (uint)(byte)cVar33 * 0x204;
            *(ushort *)(pcVar16 + iVar15 + 0x2a2) = uVar25;
            uVar17 = FUN_1011ea48(pcVar16 + iVar15 + 0xa2,uVar25,0x200);
            if ((code *)0x1ff < pcVar31 + *(ushort *)(pcVar16 + iVar15 + 0x2a2)) {
              pcVar31 = (code *)(0x1ff - *(ushort *)(pcVar16 + iVar15 + 0x2a2) & 0xffff);
            }
            uVar17 = FUN_1011ea40(uVar17,pcVar40,pcVar31);
            pcVar41 = pcVar16 + (uint)(byte)cVar33 * 0x204;
            *(short *)(pcVar41 + 0x2a2) = (short)pcVar31;
            (pcVar31 + (int)pcVar41)[0xa2] = (code)0x0;
            pcVar41[0x2a4] = pcVar16[1];
            pcVar41[0x2a5] = (code)0x1;
            local_60 = pcVar40;
            FUN_100a5b78(uVar32 | 0xb20032,PTR_s__ble_rx_voice_ai_10047a4c,
                         PTR_s_BLE_question___s__received___s_10047a54,uVar17);
          }
          else if (uVar25 == 1) {
            uVar39 = (uint)(byte)pcVar16[0x14ca];
            uVar25 = (byte)*pcVar16 & 0xfd;
            pbVar28 = (byte *)(uVar39 * 0x204 + 0xa2);
            pbVar38 = pbVar28;
            if (((byte)*pcVar16 & 0xfd) == 0) {
              *(ushort *)(pcVar16 + uVar39 * 0x204 + 0x2a2) = uVar25;
              local_4c = pbVar28;
              FUN_1011ea48(pcVar16 + (int)pbVar28,uVar25,0x200);
              pbVar38 = local_4c;
            }
            uVar19 = (uint)*(ushort *)(pcVar16 + uVar39 * 0x204 + 0x2a2);
            if ((code *)0x1ff < pcVar31 + uVar19) {
              pcVar31 = (code *)(0x1ff - uVar19 & 0xffff);
            }
            FUN_1011ea40(pbVar38 + uVar19 + (int)pcVar16,pcVar40,pcVar31);
            local_48 = (code *)((uint)(pcVar31 + *(ushort *)(pcVar16 + uVar39 * 0x204 + 0x2a2)) &
                               0xffff);
            *(short *)(pcVar16 + uVar39 * 0x204 + 0x2a2) =
                 (short)(pcVar31 + *(ushort *)(pcVar16 + uVar39 * 0x204 + 0x2a2));
            local_4c = (byte *)(uint)(byte)pcVar16[0x14ca];
            local_58 = (code *)FUN_1011ea10(pcVar40);
            local_60 = local_48;
            local_5c = pcVar31;
            pcStack_54 = pcVar16 + (int)pbVar28;
            FUN_100a5b78(uVar32 | 0xc00035,PTR_s__ble_rx_voice_ai_10047a4c,
                         PTR_s_BLE_answer__d____d___d___d____s_10047a60,local_4c);
            pcVar16[uVar39 * 0x204 + 0x2a4] = pcVar16[1];
            pcVar16[uVar39 * 0x204 + 0x2a5] = (code)0x1;
          }
          if ((byte)pcVar16[1] - 2 < 2) {
            uVar39 = (uint)(byte)((char)pcVar16[0x14ca] + 1) % 10;
            pcVar16[0x14ca] = SUB41(uVar39,0);
            FUN_1011ea48(pcVar16 + uVar39 * 0x204 + 0xa2,0);
          }
          puVar29 = DAT_10047a5c;
          iVar15 = (**(code **)(PTR_DAT_10047a58 + 0x28))();
          if ((iVar15 == 0) || (pcVar16[0x14ca] == (code)0x0)) {
            iVar15 = (*(code *)puVar29[2])();
            if (iVar15 != 0x60) break;
          }
          else {
            iVar15 = (*(code *)puVar29[2])();
            if (iVar15 != 0x70) {
              uVar17 = 0x70;
              *(undefined1 *)(iVar35 + 0x6a6) = 1;
              pcVar40 = (code *)*puVar29;
              goto LAB_100474de;
            }
            FUN_100a5b78(uVar32 | 0xd30031,PTR_s__ble_rx_voice_ai_10047a4c,
                         PTR_s_ai_agent_ble_user_data__s_10047a64,
                         pcVar16 + ((byte)pcVar16[0x14ca] - 1) * 0x204 + 0xa2);
            (**(code **)(PTR_DAT_10047a68 + 8))();
            pcVar16 = pcVar16 + ((byte)pcVar16[0x14ca] - 1) * 0x204 + 0xa2;
            iVar15 = 0x70;
          }
          goto LAB_100474e6;
        }
        uVar32 = uVar32 | 0x9e0000;
        puVar20 = PTR_s__ble_rx_voice_ai_10047a4c;
        puVar23 = PTR_s_Data_length_exceeds_buffer_size_10047a48;
      }
LAB_1004750c:
      uVar32 = uVar32 | 0x11;
LAB_10047510:
      FUN_100a5b78(uVar32,puVar20,puVar23);
LAB_10047514:
      pcVar40 = (code *)0xffffffff;
      goto LAB_1004753c;
    case (code)0x4:
      iVar15 = FUN_10113cfc(DAT_10047a6c,uVar39,10000,0);
      if (iVar15 != 0) {
        FUN_100a5b78(((int)PTR_DAT_10047a70 - (int)PTR_DAT_10047a74) * 0x20 & 0xff00U | 0xe90011,
                     PTR_s__ble_rx_voice_assistant_10047a7c,
                     PTR_s_speech_mutex_Deadlock_________10047a78);
      }
      FUN_1011ea48(DAT_10047a80,0,0x70);
      iVar15 = DAT_10047a84;
      *(undefined1 *)(DAT_10047a84 + 0x1c4) = 0;
      *(ushort *)(iVar15 + 0x1c6) = *(ushort *)(param_1 + 5) << 8 | *(ushort *)(param_1 + 5) >> 8;
      *(byte *)(iVar15 + 0x1c5) = param_1[7];
      *(ushort *)(iVar15 + 0x1cc) = *(ushort *)(param_1 + 8) << 8 | *(ushort *)(param_1 + 8) >> 8;
      uVar25 = *(ushort *)(param_1 + 10) << 8 | *(ushort *)(param_1 + 10) >> 8;
      *(ushort *)(iVar15 + 0x1ce) = uVar25;
      FUN_1011ea48(iVar15 + 0x1d0,0,100);
      FUN_1013d03e(iVar15 + 0x1d0,param_1 + 0xc,uVar25,0x4dc);
      FUN_10113e2c(DAT_10047a6c);
LAB_100479f8:
      iVar15 = (*(code *)DAT_10047a5c[2])();
      if (iVar15 == 99) {
        iVar15 = 99;
        pcVar16 = DAT_10047a80;
        goto LAB_100474e6;
      }
      break;
    case (code)0x5:
      FUN_1011ea48(DAT_10047a80,0,0x70);
      iVar15 = DAT_10047d38;
      puVar29 = DAT_10047a5c;
      if (param_1[5] == 0) {
        iVar15 = (*(code *)DAT_10047a5c[2])();
        if (((iVar15 != 0x60) || (iVar15 = (*(code *)puVar29[2])(), iVar15 != 0x54)) &&
           (iVar15 = (*(code *)puVar29[2])(), iVar15 != 99)) {
          (*(code *)*puVar29)(99);
        }
        pcVar40 = (code *)0x0;
        *(undefined1 *)(DAT_10047a84 + 0x1c4) = 0;
        goto LAB_1004753c;
      }
      if (param_1[5] == 1) {
        *(undefined1 *)(DAT_10047d38 + 0x1c4) = 1;
        *(ushort *)(iVar15 + 0x1c6) = *(ushort *)(param_1 + 6) << 8 | *(ushort *)(param_1 + 6) >> 8;
        *(ushort *)(iVar15 + 0x1c8) = *(ushort *)(param_1 + 8) << 8 | *(ushort *)(param_1 + 8) >> 8;
        *(ushort *)(iVar15 + 0x1ca) =
             *(ushort *)(param_1 + 10) << 8 | *(ushort *)(param_1 + 10) >> 8;
        *(ushort *)(iVar15 + 0x1cc) =
             *(ushort *)(param_1 + 0xc) << 8 | *(ushort *)(param_1 + 0xc) >> 8;
        uVar25 = *(ushort *)(param_1 + 0xe) << 8 | *(ushort *)(param_1 + 0xe) >> 8;
        *(ushort *)(iVar15 + 0x1ce) = uVar25;
        FUN_1011ea48(iVar15 + 0x1d0,0,100);
        FUN_1013d03e(iVar15 + 0x1d0,param_1 + 0x10,uVar25,0x4dc);
        goto LAB_100479f8;
      }
      goto LAB_10047514;
    default:
      goto switchD_10047460_caseD_6;
    case (code)0xa:
      bVar13 = param_1[5];
      bVar3 = param_1[6];
      bVar5 = param_1[6];
      local_60 = (code *)(int)(char)bVar5;
      uVar32 = ((int)PTR_DAT_10047d40 - (int)PTR_DAT_10047d44) * 0x20 & 0xff00;
      FUN_100a5b78(DAT_10047d50 | uVar32,PTR_s__ble_rx_ai_loading_progress_10047d58,
                   PTR_s_ble_rx_ai_loading_progress_type___10047d54,bVar13);
      iVar15 = DAT_10047d38;
      if (bVar13 == 1) {
        iVar35 = *(int *)(DAT_10047d38 + 0xe8);
        if (iVar35 != 0) {
          *(undefined1 *)(iVar35 + 0x1b83) = 1;
          *(byte *)(iVar35 + 0x1b82) = bVar5;
          if (pcVar40 < (code *)0x2) {
            FUN_100a5b78(DAT_10047d60 | uVar32,PTR_s__ble_rx_ai_loading_progress_10047d58,
                         PTR_s_There_is_no_abnormal_loading_inf_10047d64);
          }
          else {
            *(ushort *)(iVar35 + 0x1b80) =
                 *(ushort *)(param_1 + 7) << 8 | *(ushort *)(param_1 + 7) >> 8;
            FUN_100a5b78(uVar32 | 0x17e0031,PTR_s__ble_rx_ai_loading_progress_10047d58,
                         PTR_s_ble_rx_ai_loading_progress_len___10047d68);
            iVar35 = *(int *)(iVar15 + 0xe8);
            uVar25 = *(ushort *)(iVar35 + 0x1b80);
            if (0x1ff < uVar25) {
              uVar32 = uVar32 | 0x1820000;
              puVar20 = PTR_s__ble_rx_ai_loading_progress_10047d58;
              puVar23 = PTR_s_Data_length_exceeds_buffer_size_10047d6c;
              goto LAB_1004750c;
            }
            uVar17 = FUN_1011ea48(iVar35 + 0x1980,0,0x200);
            uVar17 = FUN_1011ea40(uVar17,param_1 + 9,uVar25);
            uVar39 = DAT_10047d70;
            *(undefined1 *)(iVar35 + 0x1b84) = 1;
            FUN_100a5b78(uVar39 | uVar32,PTR_s__ble_rx_ai_loading_progress_10047d58,DAT_10047d74,
                         uVar17);
          }
        }
LAB_10047ba0:
        puVar20 = PTR_DAT_10047d5c;
        if (*(char *)(*(int *)(iVar15 + 0xe8) + 0x1b84) != '\0') {
          iVar35 = (**(code **)(PTR_DAT_10047d5c + 0x28))();
          puVar29 = DAT_10047d80;
          if ((iVar35 == 0) || (*(short *)(*(int *)(iVar15 + 0xe8) + 0x1b80) == 0)) {
            iVar35 = (**(code **)(puVar20 + 8))();
            puVar29 = DAT_10047eac;
            if ((iVar35 != 0) && (*(short *)(*(int *)(iVar15 + 0xe8) + 0x1b80) != 0)) {
              iVar35 = (*(code *)DAT_10047eac[2])();
              if (iVar35 != 0x60) {
                uVar17 = 0x60;
                *(undefined1 *)(iVar15 + 0x6a6) = 1;
                pcVar40 = (code *)*puVar29;
                goto LAB_10047bea;
              }
              (**(code **)(DAT_10047e9c + 8))();
              FUN_1004375c(0x60,*(int *)(iVar15 + 0xe8) + 0x1980);
            }
          }
          else {
            iVar35 = (*(code *)DAT_10047d80[2])();
            if (iVar35 == 0x70) {
              (**(code **)(DAT_10047e9c + 8))();
              FUN_1004375c(0x70,*(int *)(iVar15 + 0xe8) + 0x1980);
              FUN_100a5b78(DAT_10047ea0 | uVar32,DAT_10047ea8,DAT_10047ea4,
                           *(int *)(iVar15 + 0xe8) + 0x1980);
            }
            else {
              uVar17 = 0x70;
              *(undefined1 *)(iVar15 + 0x6a6) = 1;
              pcVar40 = (code *)*puVar29;
LAB_10047bea:
              (*pcVar40)(uVar17);
            }
          }
        }
        if (((*(char *)(*(int *)(iVar15 + 0xe4) + 0x1c2c) != '\0') &&
            (*(short *)(*(int *)(iVar15 + 0xe4) + 0x1c28) != 0)) &&
           (iVar35 = (*(code *)DAT_10047eac[2])(), iVar35 == 0x54)) {
          (**(code **)(DAT_10047e9c + 8))();
          FUN_1004375c(0x54,*(int *)(iVar15 + 0xe4) + 0x1a28);
          FUN_100a5b78(uVar32 | 0x1dc0031,DAT_10047ea8,
                       PTR_s_translate_loading_send_data___s_10047eb0,
                       *(int *)(iVar15 + 0xe4) + 0x1a28);
        }
        if ((*(char *)(*(int *)(iVar15 + 0xf0) + 4) != '\0') &&
           (iVar35 = (*(code *)DAT_10047eac[2])(), iVar35 == 0x5f)) {
          FUN_1004375c(0x5f,0);
          FUN_100a5b78(uVar32 | 0x1e40031,DAT_10047ea8,PTR_s_stt_loading_progress___d_10047eb4,
                       *(undefined1 *)(*(int *)(iVar15 + 0xf0) + 1));
        }
        break;
      }
      if (bVar13 != 2) goto LAB_10047ba0;
      iVar35 = *(int *)(DAT_10047d38 + 0xe4);
      if (iVar35 == 0) {
LAB_10047cb4:
        iVar35 = *(int *)(iVar15 + 0xf0);
        if (iVar35 != 0) {
          *(byte *)(iVar35 + 1) = bVar3;
          *(undefined1 *)(iVar35 + 4) = 1;
        }
        goto LAB_10047ba0;
      }
      *(undefined1 *)(iVar35 + 0x1c2b) = 2;
      *(byte *)(iVar35 + 0x1c2a) = bVar5;
      uVar39 = DAT_10047d78;
      if (pcVar40 < (code *)0x2) {
        FUN_100a5b78(uVar32 | 0x1940011,PTR_s__ble_rx_ai_loading_progress_10047d58,
                     PTR_s_There_is_no_abnormal_loading_inf_10047d64);
        goto LAB_10047cb4;
      }
      *(ushort *)(iVar35 + 0x1c28) = *(ushort *)(param_1 + 7) << 8 | *(ushort *)(param_1 + 7) >> 8;
      FUN_100a5b78(uVar39 | uVar32,PTR_s__ble_rx_ai_loading_progress_10047d58,
                   PTR_s_ble_rx_ai_loading_progress_len___10047d68);
      iVar35 = *(int *)(iVar15 + 0xe4);
      uVar25 = *(ushort *)(iVar35 + 0x1c28);
      if (uVar25 < 0x200) {
        uVar17 = FUN_1011ea48(iVar35 + 0x1a28,0,0x200);
        uVar17 = FUN_1011ea40(uVar17,param_1 + 9,uVar25);
        *(undefined1 *)(iVar35 + 0x1c2c) = 1;
        FUN_100a5b78(uVar32 | 0x1a40031,PTR_s__ble_rx_ai_loading_progress_10047d58,DAT_10047d74,
                     uVar17);
        goto LAB_10047cb4;
      }
      uVar32 = DAT_10047d7c | uVar32;
      puVar20 = PTR_s__ble_rx_ai_loading_progress_10047d58;
      puVar23 = PTR_s_Data_length_exceeds_buffer_size_10047d6c;
      goto LAB_10047510;
    }
LAB_100474c6:
    pcVar40 = (code *)0x0;
LAB_1004753c:
    local_38._0_2_ = CONCAT11(cVar12,5);
    local_38 = (undefined4 *)(uint)(ushort)local_38;
    local_34 = 0;
    local_30 = (byte *)0x0;
    if (pcVar40 == (code *)0x0) goto LAB_10047e8c;
    uVar21 = 4;
    while( true ) {
      local_30._0_3_ = CONCAT12(uVar21,(ushort)local_30);
      FUN_100506fc(&local_38);
LAB_10047e7e:
      if (*(byte **)PTR_DAT_10047eb8 == local_2c) break;
      FUN_1013cdc0();
LAB_10047e8c:
      uVar21 = 8;
    }
    return pcVar40;
  case 6:
    if ((undefined1 *)*(int *)PTR_DAT_10044bbc == local_1c) {
      local_1c = (undefined1 *)*DAT_10043f74;
      if (unaff_r4 == 0) {
LAB_10043f52:
        pcVar40 = (code *)0xffffff7a;
        pcVar31 = unaff_r5;
        pbVar38 = unaff_r7;
        goto LAB_10043ef0;
      }
      unaff_r6 = (code *)(uint)(byte)*pcVar40;
      if (unaff_r6 != (code *)0x1) {
        if (unaff_r6 != (code *)0x2) {
          FUN_100a5b78(((int)PTR_DAT_10043f88 - (int)PTR_DAT_10043f84) * 0x20 & 0xff00U | 0x1100011,
                       PTR_s__ble_rx_exercise_command_10043f90,PTR_s_Invalid_command___d_10043f8c,
                       unaff_r6);
          goto LAB_10043f52;
        }
        if (param_1[5] == 0) {
          DAT_10043f78[0x3b5] = (code)param_1[6];
          iVar15 = (**(code **)(pbVar38 + 8))();
          pcVar40 = (code *)0x0;
          if (iVar15 != 0x13) goto LAB_10043efe;
          FUN_1004375c(0x13,PTR_s_sport_start_10043f80);
          unaff_r7 = pbVar38;
          goto LAB_10043eca;
        }
        if (param_1[5] != 1) {
          pcVar40 = (code *)0xffffffff;
          goto LAB_10043eca;
        }
        iVar15 = (**(code **)(DAT_10043f7c + 8))();
        if (iVar15 == 0x13) {
          FUN_1004375c(0x13,0);
        }
      }
      pcVar40 = (code *)0x0;
LAB_10043eca:
      while( true ) {
        pcVar31 = (code *)0x0;
        local_28._0_2_ = CONCAT11((char)unaff_r6,6);
        local_28 = (byte *)(uint)(ushort)local_28;
        local_24 = (byte *)0x0;
        pbVar38 = unaff_r7;
        if (pcVar40 == (code *)0xffffffff) {
          local_20 = 0x40000;
          FUN_100506fc(&local_28);
        }
        else {
          local_20 = 0x80000;
          FUN_100506fc(&local_28);
          pcVar40 = pcVar31;
        }
LAB_10043ef0:
        if ((undefined1 *)*DAT_10043f74 == local_1c) break;
        FUN_1013cdc0();
LAB_10043efe:
        iVar15 = FUN_100efda8();
        unaff_r7 = pbVar38;
        if (iVar15 == 5) {
          pcVar31[0x3b4] = (code)0x5;
        }
        else {
          *pcVar31 = (code)((byte)*pcVar31 | 2);
          (**(code **)pbVar38)(0x13);
        }
      }
      return pcVar40;
    }
    break;
  case 7:
    if ((undefined1 *)*(int *)PTR_DAT_10044bbc == local_1c) {
      iVar15 = *(int *)PTR_DAT_1004422c;
      if (unaff_r4 == 0) {
LAB_100441dc:
        pcVar40 = (code *)0xffffff7a;
        goto LAB_1004420a;
      }
      cVar12 = *pcVar40;
      if (cVar12 == (code)0x2) {
        local_20 = 0;
        local_1c = (undefined1 *)0x0;
        puVar30 = (undefined1 *)thunk_FUN_1009f30c(0xd,PTR_s__ble_rx_sensor_param_10044230);
        local_24 = puVar30 + 1;
        iVar35 = thunk_FUN_1009efa0(PTR_s_SENSOR_PARAMETERS_10044234,local_24,0xc);
        if (iVar35 < 0) {
          *(undefined2 *)(puVar30 + 3) = 0x1f;
          *(undefined2 *)(puVar30 + 7) = 0x1f;
          *(undefined2 *)(puVar30 + 9) = 8;
          *(undefined2 *)(puVar30 + 5) = 0x10;
          *(undefined2 *)(puVar30 + 0xb) = 1;
          puVar20 = PTR_s_SENSOR_PARAMETERS_10044234;
          *(undefined2 *)(puVar30 + 1) = 2;
          thunk_FUN_1009efe8(puVar20,local_24,0xc);
          FUN_1012d1ae(PTR_s_SENSOR_PARAMETERS_10044234);
        }
        if (param_1[5] == 0) {
          *puVar30 = 1;
          *(ushort *)(puVar30 + 1) = *(ushort *)(puVar30 + 1) << 8 | *(ushort *)(puVar30 + 1) >> 8;
          *(ushort *)(puVar30 + 3) = *(ushort *)(puVar30 + 3) << 8 | *(ushort *)(puVar30 + 3) >> 8;
          *(ushort *)(puVar30 + 5) = *(ushort *)(puVar30 + 5) << 8 | *(ushort *)(puVar30 + 5) >> 8;
          *(ushort *)(puVar30 + 7) = *(ushort *)(puVar30 + 7) << 8 | *(ushort *)(puVar30 + 7) >> 8;
          *(ushort *)(puVar30 + 9) = *(ushort *)(puVar30 + 9) << 8 | *(ushort *)(puVar30 + 9) >> 8;
          *(ushort *)(puVar30 + 0xb) =
               *(ushort *)(puVar30 + 0xb) << 8 | *(ushort *)(puVar30 + 0xb) >> 8;
          local_20 = CONCAT22(local_20._2_2_,0x207);
          local_1c = puVar30;
          FUN_100506fc(&local_20);
        }
        else if (param_1[5] == 1) {
          uVar39 = (uint)(*(ushort *)(param_1 + 6) >> 8);
          uVar32 = (*(ushort *)(param_1 + 6) & 0xff) << 8 | uVar39;
          if ((uVar32 < 0x11) && ((int)((DAT_10044238 >> uVar39) << 0x1f) < 0)) {
            *(short *)(puVar30 + 1) = (short)uVar32;
          }
          uVar39 = (uint)(*(ushort *)(param_1 + 8) >> 8);
          uVar32 = (*(ushort *)(param_1 + 8) & 0xff) << 8 | uVar39;
          if (uVar32 < 0x20) {
            if ((int)((DAT_1004423c >> uVar39) << 0x1f) < 0) goto LAB_100440c2;
          }
          else if (((((uVar32 == 0x80) || (uVar32 == 0x3e)) || (uVar32 == 0x7d)) ||
                   (((uVar32 == 0xfa || (uVar32 == 500)) ||
                    ((uVar32 == 1000 || ((uVar32 == 2000 || (uVar32 == 4000)))))))) ||
                  (uVar32 == 8000)) {
LAB_100440c2:
            *(short *)(puVar30 + 3) = (short)uVar32;
          }
          uVar25 = *(ushort *)(param_1 + 10) << 8 | *(ushort *)(param_1 + 10) >> 8;
          if ((((uVar25 == 0x10) || (uVar25 == 0x20)) || (uVar25 == 0x40)) ||
             (((uVar25 == 0x80 || (uVar25 == 0x100)) ||
              ((uVar25 == 0x200 || ((uVar25 == 0x400 || (uVar25 == 0x800)))))))) {
            *(ushort *)(puVar30 + 5) = uVar25;
          }
          uVar25 = *(ushort *)(param_1 + 0xc) << 8 | *(ushort *)(param_1 + 0xc) >> 8;
          if ((((((uVar25 == 0x1f) || (uVar25 == 0x3e)) || (uVar25 == 0x7d)) ||
               ((uVar25 == 0xfa || (uVar25 == 500)))) ||
              ((uVar25 == 1000 || ((uVar25 == 2000 || (uVar25 == 4000)))))) || (uVar25 == 8000)) {
            *(ushort *)(puVar30 + 7) = uVar25;
          }
          uVar32 = (*(ushort *)(param_1 + 0xe) & 0xff) << 8 |
                   (uint)(*(ushort *)(param_1 + 0xe) >> 8);
          uVar39 = uVar32 - 8;
          if (((uVar39 & 0xffff) < 0x19) && ((int)((DAT_10044240 >> (uVar39 & 0xff)) << 0x1f) < 0))
          {
            *(short *)(puVar30 + 9) = (short)uVar32;
          }
          uVar25 = *(ushort *)(param_1 + 0x10) << 8 | *(ushort *)(param_1 + 0x10) >> 8;
          if ((((uVar25 == 1) || (uVar25 == 10)) || (uVar25 == 0x32)) ||
             ((uVar25 == 100 || (uVar25 == 200)))) {
            *(ushort *)(puVar30 + 0xb) = uVar25;
          }
          thunk_FUN_1009efe8(PTR_s_SENSOR_PARAMETERS_10044234,local_24,0xc);
          FUN_1012d1ae(PTR_s_SENSOR_PARAMETERS_10044234);
        }
        FUN_1012d1f4(puVar30);
      }
      else {
        if (cVar12 == (code)0x3) {
          pcVar40 = (code *)0xffffff7a;
          goto LAB_100441e6;
        }
        if (cVar12 != (code)0x1) {
          FUN_100a5b78(DAT_1004424c | (DAT_10044248 - DAT_10044244) * 0x20 & 0xff00U,DAT_10044254,
                       DAT_10044250,cVar12);
          goto LAB_100441dc;
        }
      }
      pcVar40 = (code *)0x0;
LAB_100441e6:
      local_20._0_2_ = CONCAT11(cVar12,7);
      local_20 = (uint)(ushort)local_20;
      local_1c = (undefined1 *)0x0;
      while( true ) {
        FUN_100506fc(&local_20);
LAB_1004420a:
        if (*(int *)PTR_DAT_1004422c == iVar15) break;
        FUN_1013cdc0();
      }
      return pcVar40;
    }
    break;
  case 8:
    if ((undefined1 *)*(int *)PTR_DAT_10044bbc != local_1c) break;
    local_2c = *(byte **)PTR_DAT_10044500;
    if ((pcVar40 == (code *)0x0) || (unaff_r4 == 0)) {
LAB_1004445a:
      pcVar40 = (code *)0xffffff7a;
      goto LAB_10044360;
    }
    unaff_r8 = (byte *)(uint)(byte)*pcVar40;
    unaff_r7 = local_134;
    local_134[0] = 0;
    local_134[1] = 0;
    local_134[2] = 0;
    local_134[3] = 0;
    local_134[4] = 0;
    local_134[5] = 0;
    local_134[6] = 0;
    local_134[7] = 0;
    switch(unaff_r8) {
    case (byte *)0x1:
      pcVar40 = (code *)FUN_100ed61c(2,0x9000,PTR_s__ble_rx_appNotifyCfg_command_10044504);
      unaff_r6 = pcVar40;
      if (pcVar40 != (code *)0x0) goto LAB_10044370;
      FUN_100a5b78(DAT_10044510 | ((int)PTR_DAT_1004450c - (int)PTR_DAT_10044508) * 0x20 & 0xff00U,
                   PTR_s__ble_rx_appNotifyCfg_command_10044518,
                   PTR_s_Failed_to_allocate_memory_for_ap_10044514);
      pcVar40 = (code *)0xffffffa8;
      goto LAB_10044360;
    case (byte *)0x2:
      pcVar40 = (code *)FUN_10022a20();
      break;
    case (byte *)0x3:
      pcVar40 = (code *)FUN_10022aac();
      break;
    case (byte *)0x4:
      pcVar40 = (code *)FUN_10022b4c();
      break;
    case (byte *)0x5:
      pcVar40 = (code *)FUN_10022c14();
      break;
    case (byte *)0x6:
      pcVar40 = (code *)FUN_10022de4(param_1 + 5,unaff_r4 - 1 & 0xffff);
      break;
    case (byte *)0x7:
      bVar13 = param_1[5];
      FUN_100a5b78(DAT_10044520 | ((int)PTR_DAT_1004450c - (int)PTR_DAT_10044508) * 0x20 & 0xff00U,
                   PTR_s__ble_rx_appNotifyCfg_mute_1004452c,PTR_s_mute____d_1017f41f_5_10044528,
                   bVar13);
      if (bVar13 == 0) {
        uVar17 = 0x10;
      }
      else {
        uVar17 = 0;
      }
      (**(code **)(puVar20 + 0x10))(0,uVar17);
      (**(code **)(puVar20 + 0x18))();
      pcVar40 = (code *)0x0;
      FUN_10044258();
LAB_10044360:
      while (*(byte **)PTR_DAT_10044500 != local_2c) {
        pcVar40 = (code *)FUN_1013cdc0();
LAB_10044370:
        FUN_1011ea48(pcVar40,0,0x9000);
        pcVar40 = (code *)FUN_10022388(unaff_r6 + 5,0x9000);
        pbVar38 = unaff_r7;
LAB_10044386:
        local_13c = (byte *)0x0;
        local_138 = 0;
        local_140 = (uint)CONCAT11((char)unaff_r8,8);
        if (unaff_r6 == (code *)0x0) {
          *pbVar38 = (byte)pcVar40;
          local_138 = 1;
          unaff_r7 = (byte *)(((int)PTR_DAT_1004450c - (int)PTR_DAT_10044508) * 0x20 & 0xff00);
          local_13c = pbVar38;
          if ((int)pcVar40 < 0) {
            FUN_100a5b78((uint)unaff_r7 | 0x23c0033,PTR_s__ble_rx_appNotifyCfg_command_10044518,
                         PTR_s___func_____s__LINE_____d_ret_____1004451c,
                         PTR_s__ble_rx_appNotifyCfg_command_10044504,0x23c,pcVar40);
            local_138 = CONCAT13((char)((uint)local_138 >> 0x18),0x40000);
          }
          else {
            FUN_100a5b78(DAT_10044538 | (uint)unaff_r7,PTR_s__ble_rx_appNotifyCfg_command_10044518,
                         PTR_s___func_____s__LINE_____d_ret_____1004451c,
                         PTR_s__ble_rx_appNotifyCfg_command_10044504,0x241,pcVar40);
          }
          FUN_100506fc(&local_140);
        }
        else {
          iVar15 = FUN_100bed38();
          pcVar16 = (code *)(iVar15 - 8U & 0xffff);
          local_134[8] = 0;
          local_134[9] = 0;
          local_134[10] = 0;
          local_134[0xb] = 0;
          unaff_r7 = (byte *)0x0;
          FUN_1011ea48(local_134 + 0xc,0,0xfc);
          unaff_r8 = local_134 + 8;
          pcVar31 = unaff_r6 + 5;
          uVar39 = (uint)pcVar40 & 0xffff;
          while (0 < (int)pcVar40) {
            pcVar41 = pcVar16;
            if ((int)pcVar40 <= (int)pcVar16) {
              pcVar41 = pcVar40;
            }
            local_138 = CONCAT22(local_138._2_2_,(short)pcVar41);
            pcVar40 = pcVar40 + -(int)pcVar41;
            FUN_1013d03e(unaff_r8,pcVar31,pcVar41,0x100);
            pcVar31 = pcVar31 + (int)pcVar41;
            local_13c = unaff_r8;
            if ((int)pcVar40 < 0) {
              local_138 = CONCAT13((char)((uint)local_138 >> 0x18),0x40000);
              FUN_100506fc(&local_140);
            }
            else {
              FUN_100231e4(&local_140,(uint)unaff_r7 & 0xffff,uVar39,unaff_r6);
            }
            unaff_r7 = unaff_r7 + 1;
          }
          FUN_100ed77c(2,unaff_r6);
        }
      }
      return pcVar40;
    default:
      FUN_100a5b78(DAT_10044530 | ((int)PTR_DAT_1004450c - (int)PTR_DAT_10044508) * 0x20 & 0xff00U,
                   PTR_s__ble_rx_appNotifyCfg_command_10044518,DAT_10044534,unaff_r8);
      goto LAB_1004445a;
    }
    unaff_r6 = (code *)0x0;
    pbVar38 = unaff_r7;
    goto LAB_10044386;
  default:
    if (param_1[4] == 2) {
      FUN_10044954();
    }
    pcVar16 = (code *)0x1;
    goto LAB_10044a60;
  }
LAB_10044aa6:
  FUN_1013cdc0(pcVar16);
LAB_10044aaa:
  local_2c = *(byte **)PTR_DAT_100461f4;
  if (unaff_r4 == 0) {
    pcVar16 = (code *)0xffffff7a;
    goto LAB_10046056;
  }
  pcVar16 = pcVar40 + 1;
  local_e0 = (uint)(byte)*pcVar40;
  unaff_r10 = ((int)PTR_DAT_100461fc - (int)PTR_DAT_100461f8) * 0x20 & 0xff00;
  pcVar31 = (code *)(unaff_r4 - 1 & 0xffff);
  FUN_100a5b78(unaff_r10 | DAT_10046200,PTR_s__ble_rx_set_command_10046208,
               PTR_s__ble_rx_set_command_cmd_0x_x_10046204,local_e0);
  puVar7 = PTR_s_password__d___d_10046d6c;
  puVar23 = PTR_s__ble_rx_set_password_10046d68;
  puVar20 = PTR_DAT_10046918;
  puVar29 = DAT_10046210;
  switch(local_e0) {
  case 1:
    pcVar16 = (code *)FUN_10045340(pcVar16,pcVar31);
    break;
  case 2:
    FUN_10047ebc();
    goto LAB_1004602a;
  case 3:
    goto switchD_10045f8e_caseD_3;
  case 4:
    if (pcVar16 == (code *)0x0) goto switchD_10046d9c_default;
    if (99 < (byte)pcVar40[1] - 1) goto switchD_10045f8e_caseD_f;
    (**(code **)(*(int *)PTR_DAT_1004621c + 8))();
    iVar15 = (*(code *)puVar29[2])();
    if (iVar15 == 0x50) {
      FUN_10045314();
    }
    goto LAB_100460d6;
  case 5:
    if (pcVar16 == (code *)0x0) goto switchD_10046d9c_default;
    if (pcVar31 < &NMI) goto switchD_10046d9c_default;
    cVar12 = pcVar40[1];
    uVar39 = (uint)(byte)cVar12;
    if (uVar39 < 3) {
      cVar33 = pcVar40[3];
      uVar32 = *(uint *)(pcVar40 + 4);
      cVar1 = pcVar40[2];
      uVar32 = uVar32 << 0x18 | (uVar32 >> 8 & 0xff) << 0x10 | (uVar32 >> 0x10 & 0xff) << 8 |
               uVar32 >> 0x18;
      if (cVar33 == (code)0x0) {
        cVar33 = (code)0x80;
      }
      cVar2 = pcVar40[8];
      thunk_FUN_1009efa0(PTR_s_ALARM_DATA_10046220,&local_b4,0x24);
      FUN_10083220(uVar32,&local_c0);
      if (cVar1 == (code)0x0) {
        puVar29 = &local_28 + uVar39 * 3;
        uVar21 = 1;
      }
      else {
        if (cVar1 != (code)0x1) goto switchD_100466fe_default;
        puVar29 = &local_28 + uVar39 * 3;
        uVar21 = 2;
      }
      *(undefined1 *)(puVar29 + -0x23) = uVar21;
      iVar15 = uVar39 * 0xc;
      auStack_b3[iVar15] = cVar12;
      auStack_b3[iVar15 + 2] = local_c0._2_1_;
      auStack_b3[iVar15 + 1] = cVar33;
      *(undefined1 *)(local_ac + uVar39 * 3 + -1) = local_c0._1_1_;
      local_ac[uVar39 * 3] = uVar32;
      *(code *)((int)local_ac + iVar15 + -3) = cVar2;
      thunk_FUN_1009efe8(PTR_s_ALARM_DATA_10046220,&local_b4,0x24);
      FUN_1012d1ae(PTR_s_ALARM_DATA_10046220);
      FUN_100453b8(uVar39);
      iVar15 = (*(code *)DAT_10046210[2])();
      bVar42 = iVar15 == 0xd;
LAB_10046184:
      if (!bVar42) goto switchD_10045f8e_caseD_f;
      FUN_10045314();
      goto switchD_10045f8e_caseD_f;
    }
    goto switchD_100466fe_default;
  case 6:
    if (pcVar16 == (code *)0x0) goto switchD_10046d9c_default;
    uVar39 = (uint)(byte)pcVar40[1];
    if (2 < uVar39) goto switchD_10045f8e_caseD_f;
    thunk_FUN_1009efa0(PTR_s_ALARM_DATA_10046220,&local_b4,0x24);
    pcVar16 = (code *)0x0;
    pcVar27 = &local_b4 + uVar39 * 0xc;
    pcVar27[0] = '\0';
    pcVar27[1] = '\0';
    pcVar27[2] = '\0';
    pcVar27[3] = '\0';
    local_ac[uVar39 * 3 + -1] = 0;
    local_ac[uVar39 * 3] = 0;
    thunk_FUN_1009efe8(PTR_s_ALARM_DATA_10046220,&local_b4,0x24);
    FUN_1012d1ae(PTR_s_ALARM_DATA_10046220);
    FUN_100453b8(uVar39);
    iVar15 = (*(code *)DAT_10046210[2])();
    if (iVar15 != 0xd) goto switchD_10045f8e_caseD_f;
LAB_100461ec:
    FUN_10045314();
    break;
  case 7:
    pcVar16 = (code *)0x0;
    local_c0 = 0;
    local_bc = (code)0x0;
    uStack_bb = 0;
    sStack_ba = 0;
    local_b8 = 0;
    uStack_b7 = 0;
    uStack_b6 = 0;
    uStack_b5 = 0;
    thunk_FUN_1009efa0(PTR_s_ALARM_DATA_10046528,&local_b4,0x24);
    FUN_1011ea48(local_90,0,0x18);
    iVar15 = 0;
    pcVar27 = &local_b4;
    puVar37 = (uint *)(local_90 + 3);
    do {
      cVar24 = *pcVar27;
      *(char *)((int)puVar37 + -3) = (char)iVar15;
      if (cVar24 != '\0') {
        pcVar16 = (code *)0x1;
        *(bool *)((int)puVar37 + -2) = cVar24 == '\x02';
        *(char *)((int)puVar37 + -1) = pcVar27[2];
        uVar39 = *(uint *)(pcVar27 + 8);
        uVar39 = uVar39 << 0x18 | (uVar39 >> 8 & 0xff) << 0x10 | (uVar39 >> 0x10 & 0xff) << 8 |
                 uVar39 >> 0x18;
        *(uint *)(pcVar27 + 8) = uVar39;
        *puVar37 = uVar39;
        *(char *)(puVar37 + 1) = pcVar27[5];
      }
      iVar15 = iVar15 + 1;
      pcVar27 = pcVar27 + 0xc;
      puVar37 = puVar37 + 2;
    } while (iVar15 != 3);
    local_c0 = CONCAT22(local_c0._2_2_,0x702);
    local_b8 = 0x18;
    local_bc = SUB41(local_90,0);
    uStack_bb = (undefined1)((uint)local_90 >> 8);
    sStack_ba = (short)((uint)local_90 >> 0x10);
    goto LAB_1004629a;
  case 8:
    if (pcVar16 == (code *)0x0) goto switchD_10046d9c_default;
    if (pcVar31 < &DAT_0000000a) goto switchD_10046d9c_default;
    cVar12 = pcVar40[1];
    puVar30 = (undefined1 *)thunk_FUN_1009f30c(0x114,PTR_s__ble_rx_set_remind_1004652c);
    if (puVar30 == (undefined1 *)0x0) {
      pcVar31 = (code *)0x114;
      uVar39 = unaff_r10 | 0x1500011;
      puVar20 = PTR_s_Memory_allocation_error___d_10046530;
    }
    else {
      FUN_1011ea48(puVar30,0,0x114);
      puVar30[1] = cVar12;
      puVar30[2] = pcVar40[2];
      *(ushort *)(puVar30 + 0xe) =
           (ushort)(byte)((uint)*(int *)(pcVar40 + 3) >> 8) | (ushort)(*(int *)(pcVar40 + 3) << 8);
      puVar30[0xc] = pcVar40[5];
      puVar30[0xb] = pcVar40[6];
      cVar12 = pcVar40[7];
      puVar30[10] = cVar12;
      cVar33 = pcVar40[8];
      puVar30[3] = cVar12;
      puVar30[9] = cVar33;
      puVar30[4] = cVar33;
      uVar25 = *(ushort *)(pcVar40 + 9) << 8 | *(ushort *)(pcVar40 + 9) >> 8;
      pcVar31 = (code *)(uint)uVar25;
      *(ushort *)(puVar30 + 6) = uVar25;
      uVar39 = DAT_1004653c;
      puVar20 = PTR_s_Remarks_length_error___d_10046538;
      if (pcVar31 < (code *)0x80) {
        pcVar41 = pcVar31 + 10;
        FUN_1011ea40(puVar30 + 0x93,pcVar40 + 0xb,pcVar31);
        uVar6 = *(ushort *)(pcVar16 + ((uint)pcVar41 & 0xffff)) >> 8;
        pcVar31 = (code *)(uint)uVar6;
        puVar30[5] = (char)(*(ushort *)(pcVar16 + ((uint)pcVar41 & 0xffff)) >> 8);
        uVar39 = DAT_10046544;
        puVar20 = DAT_10046540;
        pcVar40 = pcVar31;
        if ((uVar6 & 0x80) == 0) {
          FUN_1011ea40(puVar30 + 0x14,pcVar16 + (short)(uVar25 + 0xc),pcVar31);
          if (pcVar16[(uint)(pcVar31 + (ushort)(uVar25 + 0xc)) & 0xffff] == (code)0x0) {
            uVar21 = 1;
LAB_10046388:
            *puVar30 = uVar21;
          }
          else if (pcVar16[(uint)(pcVar31 + (ushort)(uVar25 + 0xc)) & 0xffff] == (code)0x1) {
            uVar21 = 2;
            goto LAB_10046388;
          }
          local_f8 = (code *)(puVar30 + 0x14);
          local_f4 = puVar30 + 0x93;
          FUN_100a5b78(unaff_r10 | 0x17c0033,PTR_s__ble_rx_set_remind_10046534,DAT_10046548,*puVar30
                      );
          if (puVar30[1] == -1) {
            pcVar16 = (code *)(**(code **)(DAT_1004654c + 0x1c))(puVar30);
          }
          else {
            (**(code **)(DAT_1004654c + 0x18))(puVar30);
            pcVar16 = (code *)0x0;
          }
          FUN_1012d1f4(puVar30);
          iVar15 = (**(code **)(DAT_10046550 + 8))();
          if (iVar15 != 0x5f) break;
          goto LAB_100461ec;
        }
      }
      uVar39 = unaff_r10 | uVar39;
    }
    FUN_100a5b78(uVar39,PTR_s__ble_rx_set_remind_10046534,puVar20,pcVar31);
    FUN_1012d1f4(puVar30);
    goto switchD_100466fe_default;
  case 9:
    if ((pcVar16 != (code *)0x0) && (pcVar31 != (code *)0x0)) {
      cVar12 = pcVar40[1];
      pcVar16 = *(code **)(DAT_1004654c + 0x14);
LAB_100463f2:
      (*pcVar16)(cVar12);
      goto switchD_10045f8e_caseD_f;
    }
    uVar39 = unaff_r10 | DAT_10046554;
    puVar20 = PTR_s__ble_rx_del_remind_1004655c;
    puVar23 = PTR_s_Data_length_error_10046558;
    goto LAB_100463e4;
  case 10:
    uVar34 = 0;
    FUN_100a5b78(unaff_r10 | 0x1a40031,PTR_s__ble_rx_get_remind_10046564,
                 PTR_s__ble_rx_get_remind_10046560);
    local_c0 = 0;
    local_bc = (code)0x0;
    uStack_bb = 0;
    sStack_ba = 0;
    local_b8 = 0;
    uStack_b7 = 0;
    uStack_b6 = 0;
    uStack_b5 = 0;
    puVar30 = (undefined1 *)thunk_FUN_1009f30c(0x21b,PTR_s__ble_rx_get_remind_10046568);
    sVar4 = sStack_ba;
    uVar9 = uStack_bb;
    uVar21 = local_bc;
    local_bc = SUB41(puVar30,0);
    uVar8 = local_bc;
    uStack_bb = (undefined1)((uint)puVar30 >> 8);
    uVar10 = uStack_bb;
    sStack_ba = (short)((uint)puVar30 >> 0x10);
    sVar11 = sStack_ba;
    local_bc = (code)uVar21;
    uStack_bb = uVar9;
    sStack_ba = sVar4;
    if (puVar30 == (undefined1 *)0x0) {
      FUN_100a5b78(unaff_r10 | 0x1b00011,PTR_s__ble_rx_get_remind_10046564,
                   PTR_s_Memory_allocation_error___d_10046530,0x21b);
      pcVar16 = (code *)0x0;
      uVar34 = 0;
LAB_10046434:
      local_c0 = CONCAT22(local_c0._2_2_,0xa02);
      local_b8 = (undefined1)uVar34;
      uStack_b7 = (undefined1)((ushort)uVar34 >> 8);
      uStack_b6 = 0;
      local_bc = (code)uVar8;
      uStack_bb = uVar10;
      sStack_ba = sVar11;
      FUN_100506fc(&local_c0);
    }
    else {
      FUN_1011ea48(puVar30,0,0x21b);
      local_cc[0] = 0;
      local_cc[1] = 0;
      local_cc[2] = 0;
      pcVar16 = (code *)FUN_1006ba84(local_cc,PTR_s__NAND__SYSTEM_REMIND_remind_lib_1004656c,3);
      if ((int)pcVar16 < 0) {
        FUN_100a5b78(unaff_r10 | 0x1ba0011,PTR_s__ble_rx_get_remind_10046564,
                     PTR_s_File_open_error_10046570);
        goto LAB_10046434;
      }
      local_dc = (undefined1 *)FUN_1004f6cc();
      iVar15 = 0;
      bVar42 = true;
      local_d8 = (uint)*(ushort *)(local_dc + 0xfc);
      local_d4 = unaff_r10 | DAT_10046574;
      pcVar40 = (code *)(unaff_r10 | 0x1c20031);
      do {
        FUN_100a5b78(pcVar40,PTR_s__ble_rx_get_remind_10046564,DAT_10046578,iVar15);
        pcVar16 = (code *)FUN_1006bd24(local_cc,iVar15 * 0x114,0);
        if ((int)pcVar16 < 0) {
          uVar39 = unaff_r10 | DAT_1004657c;
          uVar17 = DAT_10046580;
LAB_100464d2:
          FUN_100a5b78(uVar39,PTR_s__ble_rx_get_remind_10046564,uVar17,iVar15);
          uVar34 = 0;
        }
        else {
          FUN_1011ea48(puVar30 + 0x107,0,0x114);
          pcVar16 = (code *)FUN_1006bc84(local_cc,puVar30 + 0x107,0x114);
          if ((int)pcVar16 < 0) {
            uVar39 = unaff_r10 | 0x1ce0011;
            uVar17 = DAT_1004658c;
            goto LAB_100464d2;
          }
          if ((byte)puVar30[0x107] == 0) {
            local_f8 = (code *)(uint)(byte)puVar30[0x113];
            local_f4 = (undefined1 *)(uint)(byte)puVar30[0x112];
            local_f0 = (uint)(byte)puVar30[0x111];
            local_ec = (uint)(byte)puVar30[0x110];
            local_e8 = (uint)(byte)puVar30[0x107];
            FUN_100a5b78(local_d4,PTR_s__ble_rx_get_remind_1004690c,
                         PTR_s_Invalid_reminder___d___d___d__d__10046914);
            uVar34 = 0;
          }
          else {
            puVar30[4] = puVar30[0x113];
            *puVar30 = puVar30[0x108];
            puVar30[1] = puVar30[0x109];
            puVar30[2] = (char)((ushort)*(undefined2 *)(puVar30 + 0x115) >> 8);
            puVar30[3] = (char)*(undefined2 *)(puVar30 + 0x115);
            puVar30[5] = puVar30[0x112];
            puVar30[6] = puVar30[0x111];
            puVar30[7] = puVar30[0x110];
            *(ushort *)(puVar30 + 8) =
                 *(ushort *)(puVar30 + 0x10d) << 8 | *(ushort *)(puVar30 + 0x10d) >> 8;
            FUN_1011ea40(puVar30 + 10,puVar30 + 0x19a);
            sVar4 = *(short *)(puVar30 + 0x10d);
            puVar30[(ushort)(sVar4 + 10)] = 0;
            puVar30[(ushort)(sVar4 + 0xb)] = puVar30[0x10c];
            FUN_1011ea40(puVar30 + (ushort)(sVar4 + 0xc),puVar30 + 0x11b);
            cVar24 = puVar30[0x107];
            uVar39 = (uint)(ushort)(sVar4 + 0xc) + (uint)(byte)puVar30[0x10c] & 0xffff;
            if (cVar24 == '\x01') {
              puVar30[uVar39] = 0;
            }
            else {
              bVar42 = cVar24 == '\x02';
              if (bVar42) {
                cVar24 = '\x01';
              }
              if (bVar42) {
                puVar30[uVar39] = cVar24;
              }
            }
            *(short *)(local_dc + 0xfc) = (short)local_d8;
            local_e8 = (uint)(byte)puVar30[0x108];
            local_ec = (uint)(byte)puVar30[0x110];
            local_f0 = (uint)(byte)puVar30[0x111];
            local_f4 = (undefined1 *)(uint)(byte)puVar30[0x112];
            local_f8 = (code *)(uint)(byte)puVar30[0x113];
            bVar42 = false;
            FUN_100a5b78(unaff_r10 | DAT_10046908,PTR_s__ble_rx_get_remind_1004690c,
                         PTR_s_get_reminder__d___d___d__d__d_id_10046910,
                         *(undefined2 *)(puVar30 + 0x115));
            iVar35 = uVar39 + 1;
            uVar34 = (undefined2)iVar35;
            local_c0 = CONCAT22(local_c0._2_2_,0xa02);
            local_b8 = (undefined1)iVar35;
            uStack_b7 = (undefined1)((uint)iVar35 >> 8);
            uStack_b6 = 0;
            pcVar16 = (code *)0x1;
            local_bc = (code)uVar8;
            uStack_bb = uVar10;
            sStack_ba = sVar11;
            FUN_100506fc(&local_c0);
          }
          FUN_1011dbc8(0xd);
        }
        iVar15 = iVar15 + 1;
      } while (iVar15 != 0x14);
      if (bVar42) goto LAB_10046434;
    }
    FUN_1006bc30(local_cc);
    FUN_1012d1f4(puVar30);
    FUN_100a5b78(unaff_r10 | DAT_10046584,PTR_s__ble_rx_get_remind_10046564,DAT_10046588);
    break;
  case 0xb:
    if (pcVar16 == (code *)0x0) goto switchD_10046d9c_default;
    if (pcVar31 == (code *)0x0) goto switchD_10046d9c_default;
    if (100 < (byte)pcVar40[1]) goto switchD_10045f8e_caseD_f;
    (**(code **)(*(int *)(PTR_DAT_10046918 + 0x34) + 4))();
    if ((pcVar31 != (code *)0x1) && ((byte)pcVar40[2] < 0x65)) {
      (**(code **)(*(int *)(puVar20 + 0x38) + 4))();
    }
    puVar29 = DAT_1004691c;
    iVar15 = (*(code *)DAT_1004691c[2])();
    if (iVar15 == 0x5b) {
      FUN_10092450(0x5b,DAT_10046920);
    }
LAB_100460d6:
    iVar15 = (*(code *)puVar29[2])();
    if (iVar15 != 0x4c) goto LAB_1004602a;
    FUN_1001d1e4();
    goto LAB_1004602a;
  case 0xc:
    if (pcVar16 == (code *)0x0) goto switchD_10046d9c_default;
    if (pcVar31 < (code *)0x2) goto switchD_10046d9c_default;
    iVar15 = FUN_1004f6cc();
    FUN_1011ea48(local_90,0,100);
    switch(pcVar40[1]) {
    case (code)0x0:
      local_dc = (undefined1 *)(uint)(byte)pcVar40[2];
      pcVar41 = pcVar40 + 8;
      uVar39 = *(uint *)(pcVar40 + 3);
      *(uint *)(iVar15 + 0x38) =
           uVar39 << 0x18 | (uVar39 >> 8 & 0xff) << 0x10 | (uVar39 >> 0x10 & 0xff) << 8 |
           uVar39 >> 0x18;
      pcVar40 = (code *)(uint)(byte)pcVar40[7];
      if (&DAT_00000064 < pcVar40) {
        pcVar40 = (code *)0x63;
      }
      FUN_1013d03e(local_90,pcVar41,pcVar40,100);
      pcVar41 = pcVar40 + 7;
      if (local_dc == (undefined1 *)0x1) {
        *(undefined4 *)(iVar15 + 0x108) = 0;
        *(undefined4 *)(iVar15 + 0x10c) = 0;
        pcVar36 = (code *)(iVar15 + 0x112);
        *(undefined2 *)(iVar15 + 0x110) = 0;
        FUN_1011ea48(pcVar36,0,0x100);
        if (pcVar41 <= pcVar31) {
          if ((byte)pcVar16[(int)pcVar41] != 0) {
            if (pcVar31 < pcVar40 + 8 + (byte)pcVar16[(int)pcVar41]) goto switchD_10046d9c_default;
            FUN_1011ea40(iVar15 + 0x108,pcVar40 + 8 + (int)pcVar16);
            FUN_1011ea40(pcVar36,local_90,pcVar40);
            local_f8 = pcVar36;
            FUN_100a5b78(unaff_r10 | DAT_10046930,DAT_1004692c,DAT_10046934,iVar15 + 0x108);
          }
          goto LAB_1004676e;
        }
      }
      else if (pcVar41 <= pcVar31) goto LAB_1004676e;
      FUN_100a5b78(unaff_r10 | DAT_10046924,DAT_1004692c,DAT_10046928);
LAB_1004676e:
      FUN_10050ca0(local_dc,local_90);
      goto LAB_1004602a;
    case (code)0x1:
      FUN_10050a24(0);
      goto switchD_10045f8e_caseD_f;
    case (code)0x2:
      FUN_100a5b78(unaff_r10 | DAT_10046938,DAT_1004692c,DAT_1004693c);
      uVar39 = *(uint *)(pcVar40 + 3);
      cVar12 = pcVar40[2];
      *(uint *)(iVar15 + 0x38) =
           uVar39 << 0x18 | (uVar39 >> 8 & 0xff) << 0x10 | (uVar39 >> 0x10 & 0xff) << 8 |
           uVar39 >> 0x18;
      FUN_1013d03e(local_90,pcVar40 + 8,pcVar40[7],100);
      FUN_10051068(cVar12,local_90);
      goto switchD_10045f8e_caseD_f;
    case (code)0x3:
      FUN_100a5b78(unaff_r10 | DAT_10046940,DAT_1004692c,DAT_10046944);
      FUN_100516f4(pcVar40[2]);
      goto switchD_10045f8e_caseD_f;
    }
    goto switchD_100466fe_default;
  case 0xd:
    if (pcVar16 == (code *)0x0) goto switchD_10046d9c_default;
    cVar12 = pcVar40[1];
    if (cVar12 == (code)0x0) {
      FUN_10051398(1);
      FUN_10051398(2);
      FUN_10051398(3);
      FUN_10051398(4);
      cVar12 = (code)0x5;
    }
    FUN_10051398(cVar12);
    goto LAB_1004602a;
  case 0xe:
    pcVar16 = (code *)FUN_10045c9c();
    break;
  case 0xf:
    goto switchD_10045f8e_caseD_f;
  case 0x10:
    pcVar16 = (code *)0x1;
    local_c0 = 0x1002;
    uStack_b5 = 0;
    local_cc[0] = local_cc[0] & 0xffffff00;
    local_bc = SUB41(local_cc,0);
    uStack_bb = (undefined1)((uint)local_cc >> 8);
    sStack_ba = (short)((uint)local_cc >> 0x10);
    local_b8 = 1;
LAB_1004629a:
    uStack_b7 = 0;
    uStack_b6 = 0;
    FUN_100506fc(&local_c0);
    break;
  case 0x11:
    FUN_1003f6f0();
    FUN_10047f50();
    goto LAB_1004602a;
  case 0x12:
    if (pcVar16 == (code *)0x0) goto switchD_10046d9c_default;
    pcVar40 = pcVar40 + 0x11;
    puVar29 = DAT_10046948;
    do {
      pcVar31 = pcVar16 + 4;
      *puVar29 = *(undefined4 *)pcVar16;
      puVar29 = puVar29 + 1;
      pcVar16 = pcVar31;
    } while (pcVar31 != pcVar40);
    thunk_FUN_1009efe8(DAT_1004694c,DAT_10046948,0x10);
    FUN_1012d1ae(DAT_1004694c);
    iVar15 = (*(code *)DAT_1004691c[2])();
    bVar42 = iVar15 == 0x4d;
    goto LAB_10046184;
  case 0x13:
    local_c0 = 0x1302;
    uStack_b5 = 0;
    local_bc = SUB41(DAT_10046948,0);
    uStack_bb = (undefined1)((uint)DAT_10046948 >> 8);
    sStack_ba = (short)((uint)DAT_10046948 >> 0x10);
    local_b8 = 0x10;
    goto LAB_100468b8;
  case 0x14:
    *(undefined1 *)(DAT_10046d58 + 0x6a5) = 1;
    (*(code *)*DAT_10046d5c)(0x4f);
    goto switchD_10045f8e_caseD_f;
  default:
    FUN_100a5b78(unaff_r10 | DAT_10047008,DAT_10047010,DAT_1004700c,local_e0);
    pcVar16 = (code *)0xffffff7a;
    break;
  case 0x30:
    if (pcVar16 == (code *)0x0) goto switchD_10046d9c_default;
    cVar12 = pcVar40[1];
    iVar15 = (*(code *)DAT_1004691c[2])();
    if ((iVar15 == 0x6d) || (iVar15 == 0x17)) {
      if (cVar12 == (code)0x5) goto switchD_100468ea_caseD_8;
      if (cVar12 != (code)0x6) goto switchD_100468ea_switchD;
switchD_100468ea_caseD_7:
      uVar17 = 0x8a;
    }
    else {
switchD_100468ea_switchD:
      switch(cVar12) {
      case (code)0x1:
        uVar17 = 0x81;
        break;
      case (code)0x2:
        uVar17 = 0x84;
        break;
      case (code)0x3:
        uVar17 = 0x88;
        break;
      case (code)0x4:
        uVar17 = 0x85;
        break;
      case (code)0x5:
        FUN_1009df28(0xffffffff);
        uVar17 = 0x82;
        break;
      case (code)0x6:
        FUN_1009df28(1);
        uVar17 = 0x83;
        break;
      case (code)0x7:
        goto switchD_100468ea_caseD_7;
      case (code)0x8:
switchD_100468ea_caseD_8:
        uVar17 = 0x89;
        break;
      case (code)0x9:
        FUN_10035a7c();
        goto switchD_10045f8e_caseD_f;
      case (code)0xa:
        FUN_10035c14();
        goto switchD_10045f8e_caseD_f;
      case (code)0xb:
        FUN_10035c70();
        goto switchD_10045f8e_caseD_f;
      case (code)0xc:
        FUN_10035b94();
        goto switchD_10045f8e_caseD_f;
      case (code)0xd:
        FUN_10035b24();
        goto switchD_10045f8e_caseD_f;
      default:
        goto switchD_10046d9c_default;
      }
    }
    FUN_100a1b0c(uVar17);
    goto switchD_10045f8e_caseD_f;
  case 0x31:
    if (pcVar16 == (code *)0x0) goto switchD_10046d9c_default;
    if (pcVar31 < &DAT_00000007) goto switchD_10046d9c_default;
    local_f4 = (undefined1 *)(uint)(byte)pcVar40[4];
    sStack_ba = CONCAT11(pcVar40[1],pcVar40[2]);
    local_bc = pcVar40[3];
    local_f8 = (code *)(uint)(byte)local_bc;
    local_ec = (uint)(byte)pcVar40[5];
    local_e8 = (uint)(byte)pcVar40[6];
    uStack_e4 = (uint)(byte)pcVar40[7];
    uStack_bb = 0;
    local_b8 = 0;
    local_f0 = 0;
    uStack_b7 = 0;
    local_c0 = CONCAT31(CONCAT21(CONCAT11(pcVar40[4],pcVar40[5]),pcVar40[6]),pcVar40[7]);
    FUN_100a5b78(unaff_r10 | 0x4e0037,PTR_s__ble_rx_set_system_time_10046d00,
                 PTR_s_>>_ble_rx_set_system_time_time____10046cfc);
    sStack_ba = sStack_ba + -0x76c;
    local_bc = (code)((char)local_bc - 1);
    iVar15 = FUN_10112e84(PTR_s_RTC_0_10046d04);
    if (iVar15 != 0) {
      iVar15 = (**(code **)(*(int *)(iVar15 + 8) + 0xc))(iVar15,&local_c0);
      if (-1 < iVar15) {
        FUN_100a474c();
      }
      if (pcVar31 < &DAT_00000009) goto switchD_10045f8e_caseD_f;
      if (pcVar40[9] == (code)0x1) {
        pcVar16 = *(code **)(PTR_DAT_10046d0c + 8);
        cVar12 = (code)0x1;
        goto LAB_100463f2;
      }
      if (pcVar40[9] != (code)0x0) goto switchD_10045f8e_caseD_f;
      (**(code **)(PTR_DAT_10046d0c + 8))(0);
      pcVar16 = (code *)0x0;
      break;
    }
    uVar39 = unaff_r10 | 0x560011;
    puVar20 = PTR_s__ble_rx_set_system_time_10046d00;
    puVar23 = PTR_s_rtc_device_RTC_0_not_found_10046d08;
LAB_100463e4:
    FUN_100a5b78(uVar39,puVar20,puVar23);
switchD_100466fe_default:
    pcVar16 = (code *)0xffffffff;
    break;
  case 0x32:
    if (pcVar16 == (code *)0x0) goto switchD_10046d9c_default;
    if ((code *)0x19 < pcVar31) {
      pcVar31 = (code *)0x1a;
    }
    FUN_100a5b78(unaff_r10 | DAT_10046d10,DAT_10046d18,DAT_10046d14,pcVar31);
    puVar20 = PTR_DAT_10046d20;
    pcVar40 = (code *)0x0;
    uVar39 = unaff_r10 | DAT_10046d1c;
    while( true ) {
      pcVar41 = (code *)((uint)pcVar40 & 0xff);
      pcVar40 = pcVar40 + 1;
      if (pcVar31 <= pcVar41) break;
      local_f8 = (code *)(uint)(byte)pcVar16[(int)pcVar41];
      FUN_100a5b78(uVar39,DAT_10046d18,PTR_s_notify_enable__d___d_10046d24,pcVar41);
      (**(code **)(puVar20 + 0x10))(pcVar41,pcVar16[(int)pcVar41]);
    }
    pcVar16 = *(code **)(puVar20 + 0x18);
    goto LAB_10046aa4;
  case 0x33:
    local_bc = (code)0x0;
    uStack_bb = 0;
    sStack_ba = 0;
    local_c0 = 0x3302;
    local_b8 = 0;
    uStack_b7 = 0;
    uStack_b6 = 0;
    uStack_b5 = 0;
    uVar17 = (**(code **)(PTR_DAT_10046d20 + 0x14))();
    local_bc = SUB41(uVar17,0);
    uStack_bb = (undefined1)((uint)uVar17 >> 8);
    sStack_ba = (short)((uint)uVar17 >> 0x10);
    local_b8 = 0x1a;
LAB_100468b8:
    uStack_b7 = 0;
    uStack_b6 = 0;
    FUN_100506fc(&local_c0);
    goto LAB_1004602a;
  case 0x34:
    if (pcVar16 == (code *)0x0) goto switchD_10046d9c_default;
    if (pcVar31 < (code *)0x2) goto switchD_10046d9c_default;
    puVar30 = (undefined1 *)
              ((*(ushort *)(pcVar40 + 1) & 0xff) << 8 | (uint)(*(ushort *)(pcVar40 + 1) >> 8));
    local_dc = puVar30 + 1;
    pcVar16 = (code *)thunk_FUN_1009f30c(local_dc,PTR_s__ble_rx_get_device_piar_uid_10046d28);
    pcVar40 = pcVar40 + 3;
    if (pcVar16 != (code *)0x0) {
      FUN_1011ea48(pcVar16,0,local_dc);
      uVar39 = thunk_FUN_1009efa0(PTR_DAT_10046d2c,pcVar16,puVar30);
      local_f8 = pcVar16;
      local_f4 = puVar30;
      local_f0 = uVar39;
      FUN_100a5b78(unaff_r10 | 0x4000034,PTR_s__ble_rx_get_device_piar_uid_10046d34,
                   PTR_s_uid__s__device_piar_uid__s__uid__10046d30,pcVar40);
      if (((int)uVar39 < 1) || (iVar15 = FUN_1011ea10(pcVar16), iVar15 == 0)) {
        uVar21 = 0;
        uVar39 = 0;
      }
      else {
        iVar15 = FUN_1011ea20(pcVar16,pcVar40,puVar30);
        if (iVar15 == 0) {
          uVar21 = 1;
        }
        else {
          uVar21 = 2;
        }
      }
      local_c0 = 0;
      local_bc = (code)0x0;
      uStack_bb = 0;
      sStack_ba = 0;
      local_b8 = 0;
      uStack_b7 = 0;
      uStack_b6 = 0;
      uStack_b5 = 0;
      puVar30 = (undefined1 *)thunk_FUN_1009f30c(0x100,PTR_s__ble_rx_get_device_piar_uid_10046d28);
      if (puVar30 != (undefined1 *)0x0) {
        *puVar30 = uVar21;
        _local_90 = 0;
        FUN_1011ea48((int)&uStack_8d + 1,0,0x24);
        bVar13 = thunk_FUN_1009efa0(PTR_s_SN_NUM_10046d38,local_90,0x28);
        pcVar40 = (code *)(uint)bVar13;
        local_f8 = pcVar40;
        FUN_100a5b78(unaff_r10 | DAT_10046d3c,PTR_s__ble_rx_get_device_piar_uid_10046d34,
                     DAT_10046d40,local_90);
        puVar30[1] = 0;
        puVar30[2] = bVar13;
        FUN_1011ea40(puVar30 + 3,local_90,pcVar40);
        puVar30[(int)(pcVar40 + 3)] = (char)(uVar39 >> 8);
        pcVar31 = pcVar40 + 5;
        puVar30[(int)(pcVar40 + 4)] = (char)uVar39;
        if (uVar39 != 0) {
          FUN_1011ea40(puVar30 + (int)pcVar31,pcVar16,uVar39);
          pcVar31 = (code *)((uint)(pcVar31 + uVar39) & 0xffff);
        }
        local_c0 = CONCAT22(local_c0._2_2_,0x3402);
        uStack_b6 = 0;
        local_bc = SUB41(puVar30,0);
        uStack_bb = (undefined1)((uint)puVar30 >> 8);
        sStack_ba = (short)((uint)puVar30 >> 0x10);
        local_b8 = SUB41(pcVar31,0);
        uStack_b7 = (undefined1)((uint)pcVar31 >> 8);
        FUN_100506fc(&local_c0);
        FUN_1012d1f4(pcVar16);
        FUN_1012d1f4(puVar30);
        goto LAB_1004602a;
      }
      FUN_1012d1f4(pcVar16);
    }
    pcVar16 = (code *)0xfffffff4;
    break;
  case 0x35:
    if (pcVar31 == (code *)0x0) goto switchD_10046d9c_default;
    cVar12 = pcVar40[1];
    FUN_100a5b78(unaff_r10 | DAT_10046d44,DAT_10046d4c,DAT_10046d48,cVar12);
    if (cVar12 != (code)0x0) {
      thunk_FUN_1009efe8(PTR_DAT_10046d2c,pcVar40 + 4,
                         *(ushort *)(pcVar40 + 2) << 8 | *(ushort *)(pcVar40 + 2) >> 8);
      FUN_1012d1ae(PTR_DAT_10046d2c);
      goto switchD_10045f8e_caseD_f;
    }
    _local_90 = _local_90 & 0xffffff00;
    thunk_FUN_1009efe8(PTR_DAT_10046d2c,local_90,1);
    FUN_1012d1ae(PTR_DAT_10046d2c);
    FUN_100a5b78(unaff_r10 | DAT_10046d50,DAT_10046d4c,DAT_10046d54);
    FUN_100bee34();
    pcVar16 = (code *)0x0;
    break;
  case 0x39:
    if (pcVar16 == (code *)0x0) goto switchD_10046d9c_default;
    _local_90 = 0;
    uStack_8d._1_1_ = (code)0x0;
    if (pcVar31 == (code *)0x0) goto switchD_10046d9c_default;
    cVar12 = pcVar40[1];
    if ((code *)0x3 < pcVar31) {
      pcVar40 = pcVar40 + 4;
      uVar39 = unaff_r10 | DAT_10046d60;
      pcVar31 = (code *)local_90;
      do {
        pcVar16 = pcVar16 + 1;
        local_f8 = (code *)(uint)(byte)*pcVar16;
        *pcVar31 = *pcVar16;
        FUN_100a5b78(uVar39,puVar23,puVar7);
        if (4 < (byte)*pcVar31) {
          FUN_100a5b78(unaff_r10 | 0x4c00011,PTR_s__ble_rx_set_password_10046d68,
                       PTR_s_Invalid_password_digit___d_10046d64);
          goto switchD_10046d9c_default;
        }
        pcVar31 = pcVar31 + 1;
      } while (pcVar16 != pcVar40);
      _local_90 = _local_90 & 0xffffff;
    }
    puVar29 = DAT_10046fc0;
    uStack_8d._1_1_ = cVar12;
    local_f8 = (code *)(*(code *)DAT_10046fc0[2])();
    FUN_100a5b78(unaff_r10 | DAT_10046fc4,PTR_s__ble_rx_set_password_10046fcc,
                 PTR_s__ble_rx_set_password_cmd_0x_x_vi_10046fc8,cVar12);
    puVar20 = PTR_DAT_10046fd0;
    switch(cVar12) {
    case (code)0x0:
      (**(code **)(PTR_DAT_10046fd0 + 8))(0);
      iVar15 = (*(code *)puVar29[2])();
      if (iVar15 == 0x6e) {
        pcVar16 = (code *)puVar29[1];
      }
      else {
        pcVar16 = (code *)puVar29[2];
      }
      (*pcVar16)();
      goto LAB_10046dbc;
    case (code)0x1:
      iVar15 = (**(code **)(PTR_DAT_10046fd0 + 0x24))();
      if (iVar15 == 0) goto LAB_10046dbc;
      (**(code **)(puVar20 + 8))(1);
      uVar21 = 0;
      break;
    case (code)0x2:
      uVar21 = 2;
      break;
    case (code)0x3:
      (**(code **)(PTR_DAT_10046fd0 + 0x28))(local_90);
      iVar15 = (**(code **)(puVar20 + 0x24))();
      if (iVar15 != 0) {
        (**(code **)(puVar20 + 8))(1);
      }
      iVar15 = (*(code *)puVar29[2])();
      if (iVar15 != 0x6e) goto LAB_10046dbc;
      goto LAB_10046de6;
    case (code)0x4:
      iVar15 = (**(code **)(PTR_DAT_10046fd0 + 0x1c))();
      if (iVar15 != 0) {
        (**(code **)(puVar20 + 0x18))();
      }
      iVar15 = (*(code *)puVar29[2])();
      if (iVar15 == 0x6e) {
        FUN_100eea1c();
        (*(code *)*puVar29)(0x4c);
      }
      goto LAB_10046dbc;
    case (code)0x5:
      iVar15 = (*(code *)puVar29[2])();
      if (iVar15 != 0x6e) goto switchD_10046d9c_default;
      (*(code *)*puVar29)(0x4c);
      goto switchD_10046d9c_default;
    default:
      goto switchD_10046d9c_default;
    }
    *(undefined1 *)(DAT_10046fd4 + 0x6a4) = uVar21;
    iVar15 = (*(code *)puVar29[2])();
    if (iVar15 == 0x6e) {
LAB_10046de6:
      FUN_1004375c(0x6e,local_90);
    }
    else {
      FUN_1013965a(0x6e,0);
    }
LAB_10046dbc:
    FUN_100454dc(cVar12);
    goto LAB_1004602a;
  case 0x3a:
    if (pcVar16 == (code *)0x0) goto switchD_10046d9c_default;
    (**(code **)(*(int *)(DAT_10046fd8 + 0x30) + 4))(pcVar40[1]);
    FUN_10045644();
    goto LAB_1004602a;
  case 0x3b:
    if (pcVar16 == (code *)0x0) goto switchD_10046d9c_default;
    cVar12 = pcVar40[1];
    FUN_100a5b78(unaff_r10 | DAT_10046fdc,PTR_s__ble_rx_set_tp_mode_10046fe4,
                 PTR_s__ble_rx_set_tp_mode_tp_mode____d_10046fe0,cVar12);
    (**(code **)(PTR_DAT_10046fe8 + 4))(cVar12 != (code)0x0);
    FUN_100456a0();
    goto LAB_1004602a;
  case 0x3c:
    uVar39 = (uint)(byte)pcVar40[1];
    FUN_100a5b78(unaff_r10 | DAT_10046fec,DAT_10046ff4,DAT_10046ff0,uVar39);
    if (uVar39 == 1) {
      uVar39 = (uint)(byte)pcVar40[2];
      FUN_100a5b78(unaff_r10 | DAT_10046ff8,DAT_10046ff4,
                   PTR_s__ble_rx_guide_enable_step____d_10046ffc,uVar39);
      iVar15 = (*(code *)DAT_10046fc0[2])();
      puVar20 = PTR_DAT_10047000;
      if (iVar15 == 0x6f) {
        if (uVar39 != 0) {
          uVar39 = uVar39 + 10;
          goto LAB_10046ed4;
        }
      }
      else if (uVar39 != 0) goto switchD_10045f8e_caseD_f;
      (**(code **)(PTR_DAT_10047000 + 8))();
      (**(code **)(puVar20 + 0x10))();
      goto switchD_10045f8e_caseD_f;
    }
    if (uVar39 != 0) {
      if ((uVar39 != 2) && (uVar39 != 3)) goto switchD_10045f8e_caseD_f;
      iVar15 = (*(code *)DAT_10046fc0[2])();
      if (iVar15 != 0x6f) goto switchD_10045f8e_caseD_f;
LAB_10046ed4:
      FUN_1004375c(0x6f,uVar39);
      goto switchD_10045f8e_caseD_f;
    }
    iVar15 = (*(code *)DAT_10046fc0[2])();
    if (iVar15 == 0x6f) {
      FUN_1004375c(0x6f,0);
    }
    FUN_1004b6f0();
    pcVar16 = *(code **)(PTR_DAT_10047000 + 0x14);
    goto LAB_10046aa4;
  case 0x3d:
    pcVar16 = (code *)FUN_10045888(pcVar16,pcVar31);
    break;
  case 0x3e:
    pcVar16 = (code *)FUN_100457a4(pcVar16,pcVar31);
    break;
  case 0x3f:
    pcVar16 = (code *)FUN_10045920(pcVar16,pcVar31);
    break;
  case 0x40:
    pcVar16 = *(code **)(PTR_DAT_10047004 + 0x28);
LAB_10046aa4:
    (*pcVar16)();
    goto switchD_10045f8e_caseD_f;
  case 0x41:
    pcVar16 = (code *)FUN_100459e4(pcVar16,pcVar31);
    break;
  case 0x42:
    pcVar16 = (code *)FUN_10045a78(pcVar16,pcVar31);
    break;
  case 0x43:
    pcVar16 = (code *)FUN_10045ac0(pcVar16,pcVar31);
    break;
  case 0x44:
    pcVar16 = (code *)FUN_10045e9c(pcVar16,pcVar31);
  }
  do {
    uStack_b6 = 0;
    uStack_b5 = 0;
    local_c0 = (uint)CONCAT11((char)local_e0,2);
    local_bc = (code)0x0;
    uStack_bb = 0;
    sStack_ba = 0;
    local_b8 = 0;
    uStack_b7 = 0;
    if ((int)pcVar16 < 0) {
      uStack_b6 = 4;
LAB_1004604c:
      FUN_100506fc(&local_c0);
    }
    else if (pcVar16 == (code *)0x0) {
      uStack_b6 = 8;
      goto LAB_1004604c;
    }
LAB_10046056:
    if (*(byte **)PTR_DAT_100461f4 == local_2c) {
      return pcVar16;
    }
    FUN_1013cdc0();
switchD_10045f8e_caseD_3:
    puVar29 = DAT_10046210;
    if (pcVar16 == (code *)0x0) {
switchD_10046d9c_default:
      pcVar16 = (code *)0xffffffea;
    }
    else {
      cVar12 = pcVar40[1];
      if ((byte)cVar12 < 4) {
        (**(code **)(PTR_DAT_1004620c + 8))(cVar12);
        FUN_100486d0();
        iVar15 = (*(code *)puVar29[2])();
        if ((iVar15 != 0x52) && (iVar15 = (*(code *)puVar29[2])(), iVar15 != 0x6f)) {
          (*(code *)*puVar29)(0x52);
        }
        FUN_100a5b78(unaff_r10 | 0x840031,PTR_s__ble_rx_set_langu_10046218,
                     PTR_s__ble_rx_set_language___d_10046214,cVar12);
LAB_1004602a:
        pcVar16 = (code *)0x1;
      }
      else {
switchD_10045f8e_caseD_f:
        pcVar16 = (code *)0x0;
      }
    }
  } while( true );
}

