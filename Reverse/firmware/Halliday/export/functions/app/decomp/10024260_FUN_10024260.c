/* FUN_10024260 @ 0x10024260 */

void FUN_10024260(void)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  undefined *puVar9;
  int iVar10;
  int unaff_r6;
  int iVar11;
  int iVar12;
  uint unaff_r11;
  undefined4 uVar13;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  undefined *local_44;
  int local_3c;
  int local_38;
  int local_34;
  
  puVar9 = PTR_DAT_10024588;
  local_34 = *DAT_10024580;
  iVar12 = *DAT_10024584;
  if (iVar12 == 0) goto LAB_100242ec;
  local_3c = 0;
  FUN_100434c0(&local_3c);
  local_50 = (**(code **)(puVar9 + 0x14))();
  unaff_r11 = 0;
  unaff_r6 = 0;
  FUN_10127064(*(undefined4 *)(iVar12 + 0x24));
  local_44 = puVar9;
  local_54 = ((int)PTR_DAT_10024590 - (int)PTR_DAT_1002458c) * 0x20 & 0xff00;
  local_48 = local_54 | DAT_10024594;
  local_4c = local_54 | DAT_10024594 - 0x40000;
  do {
    if (local_50 <= unaff_r11) {
      local_38 = 0;
      FUN_100434c0(&local_38);
      if (100 < (uint)(local_38 - local_3c)) {
        FUN_100a5b78(local_54 | DAT_10024598,PTR_s_notify_list_view_update_100245a0,
                     PTR_s_notify_list_view_update___d_ms_f_1002459c,local_38 - local_3c,local_50);
      }
LAB_100242ec:
      if (*DAT_10024580 == local_34) {
        return;
      }
      FUN_1013cdc0();
    }
    iVar2 = (**(code **)(local_44 + 0x10))(unaff_r11 & 0xff);
    if (iVar2 != 0) {
      iVar11 = iVar2 + 0x14;
      if (iVar11 == 0) {
        iVar10 = 0;
      }
      else {
        iVar10 = 0;
        pcVar6 = (char *)(iVar2 + 0x13);
        do {
          pcVar6 = pcVar6 + 1;
          if (*pcVar6 == '\0') break;
          iVar10 = iVar10 + 1;
        } while (iVar10 != 0x24);
      }
      iVar7 = iVar2 + 0x38;
      if (iVar7 == 0) {
LAB_10024338:
        if (iVar10 != 0x24) {
          if (unaff_r6 == 0) {
            uVar13 = *(undefined4 *)(iVar12 + 0x24);
            iVar10 = FUN_10023584(*(undefined1 *)(iVar2 + 0x17a),iVar11);
            if ((iVar10 == 1) ||
               (iVar10 = FUN_10023584(*(undefined1 *)(iVar2 + 0x17a),iVar7), iVar10 == 1)) {
              iVar10 = FUN_10096f4c(uVar13);
              FUN_10125640(iVar10,DAT_100245ac);
              FUN_101256e8(iVar10,0xb,0);
              uVar4 = FUN_1004cf14(0x28);
              FUN_10097998(iVar10,uVar4);
              FUN_10126f70(iVar10,2,0);
              unaff_r6 = FUN_10096f4c(uVar13);
              FUN_10125640(unaff_r6,DAT_100245ac);
              uVar13 = FUN_1004cf14(0x29);
              FUN_10097998(unaff_r6,uVar13);
              FUN_10126f70(unaff_r6,2,0);
              local_38 = -1;
              *(int **)(unaff_r6 + 0x10) = &local_38;
              *(int **)(iVar10 + 0x10) = &local_38;
              FUN_10127096(unaff_r6,0);
              FUN_10127096(iVar10,0);
              FUN_10124c20(unaff_r6,0x400);
              FUN_10124c20(iVar10,0x400);
            }
            else if (iVar10 == 2) {
              FUN_10119dc2(PTR_s__s___LINE____d_APP_NOTIFY_CFG_TY_100245c0,
                           PTR_s_message_pin_filter_line_create_100245bc,0x23c);
            }
          }
          iVar10 = FUN_1002ed68(*(undefined4 *)(iVar12 + 0x24));
          FUN_1012569c(iVar10,0x100,DAT_100245b0);
          *(uint *)(iVar10 + 0x10) = unaff_r11;
          FUN_101255ce(iVar10,0);
          FUN_1012566e(iVar10,0x46);
          FUN_10125640(iVar10,0xfa);
          bVar1 = *(byte *)(iVar2 + 0x17a);
          uVar13 = FUN_10096718(iVar10);
          FUN_101256e8(uVar13,7,8,0);
          FUN_10096730(uVar13,((int)(bVar1 - 1) % 0x19) * 0xc + iVar12 + 0x34);
          uVar4 = FUN_10096f4c(iVar10);
          FUN_1012569c(uVar4,0x56,0x1c);
          FUN_10089c2c(uVar4,uVar13,0x13,10,0xfffffffa);
          iVar8 = iVar12 + 0x1ac;
          FUN_10097b98(uVar4,4);
          FUN_10126f52(uVar4,iVar8,0);
          FUN_10097998(uVar4,iVar11);
          uVar5 = FUN_10096f4c(iVar10);
          FUN_1012566e(uVar5,0x1c);
          FUN_10125640(uVar5,DAT_100245b4);
          FUN_10089c2c(uVar5,uVar4,0x14,8,0);
          FUN_10126f52(uVar5,iVar8,0);
          FUN_100240c0(uVar5,iVar2);
          uVar4 = FUN_10096f4c(iVar10);
          FUN_1012569c(uVar4,0xa0,0x1c);
          FUN_10089c2c(uVar4,uVar13,0x15,10,10);
          FUN_10097b98(uVar4,1);
          FUN_10126f52(uVar4,iVar8,0);
          FUN_10097998(uVar4,iVar7);
          FUN_1002ef9c(iVar10,PTR_FUN_1002471c_1_100245b8);
          if ((*(char *)(iVar2 + 0x17d) == '\x01') && (unaff_r6 != 0)) {
            uVar13 = FUN_10126fda(unaff_r6);
            FUN_10127096(iVar10,uVar13);
          }
          goto LAB_1002434c;
        }
LAB_1002433c:
        uVar13 = 0x24;
        uVar3 = local_4c;
        puVar9 = PTR_s_error_message__d__title_len____d_100245a4;
      }
      else {
        iVar8 = 0;
        pcVar6 = (char *)(iVar2 + 0x37);
        do {
          pcVar6 = pcVar6 + 1;
          if (*pcVar6 == '\0') goto LAB_10024338;
          iVar8 = iVar8 + 1;
        } while (iVar8 != 0x140);
        if (iVar10 == 0x24) goto LAB_1002433c;
        uVar13 = 0x140;
        uVar3 = local_48;
        puVar9 = PTR_s_error_message__d__content_len_____100245a8;
      }
      FUN_100a5b78(uVar3,PTR_s_notify_list_view_update_100245a0,puVar9,unaff_r11,uVar13);
    }
LAB_1002434c:
    unaff_r11 = unaff_r11 + 1;
  } while( true );
}

