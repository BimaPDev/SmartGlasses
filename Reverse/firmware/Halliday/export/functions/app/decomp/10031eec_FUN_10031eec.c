/* FUN_10031eec @ 0x10031eec */

void FUN_10031eec(void)

{
  int *piVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined *puVar6;
  uint uVar7;
  uint uVar8;
  undefined1 uVar9;
  char cVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  undefined4 uVar15;
  int local_40;
  uint local_3c;
  uint local_38;
  undefined4 uStack_34;
  uint local_30;
  int local_2c;
  
  piVar1 = DAT_100321d8;
  local_2c = *DAT_100321d0;
  iVar11 = *DAT_100321d8;
  uVar12 = (DAT_100321d4 - (int)PTR_DAT_100321dc) * 0x20 & 0xff00;
  if (iVar11 != 0) goto LAB_10031f30;
  uVar3 = uVar12 | 0x1b80011;
  puVar6 = PTR_s_p_prompter_data_is_NULL_in_promp_100321e0;
  do {
    FUN_100a5b78(uVar3,PTR_s_prompter_reading_config_100321e4,puVar6);
    while( true ) {
      if (*DAT_100321d0 == local_2c) {
        return;
      }
      FUN_1013cdc0();
LAB_10031f30:
      iVar14 = iVar11 + 0x170;
      iVar4 = FUN_1011ea10(iVar14);
      if (iVar4 == 0) break;
      FUN_100a5b78(DAT_100321f0 | uVar12,PTR_s_prompter_reading_config_100321e4,
                   PTR_s_Reading_config_for_file___s_100321f4,iVar14);
      uVar15 = FUN_10035220(iVar14,iVar11 + 0x160);
      *(undefined4 *)(iVar11 + 0x1274) = uVar15;
      uVar7 = *(uint *)(iVar11 + 0x160);
      uVar3 = *(uint *)(iVar11 + 0x168);
      uVar8 = (uint)*(ushort *)(iVar11 + 0x16e);
      FUN_100a5b78(uVar12 | 0x1c40034,PTR_s_prompter_reading_config_100321e4,
                   PTR_s_Bookmark_read___auto_scroll___d__100321f8,*(undefined1 *)(iVar11 + 0x16d),
                   uVar8,uVar3,uVar7);
      FUN_100347c4();
      puVar2 = PTR_s_Setting_default_font_size___d_100321fc;
      puVar6 = PTR_s_prompter_reading_config_100321e4;
      if (*(char *)(iVar11 + 0x16c) == '\0') {
        *(undefined1 *)(iVar11 + 0x16c) = 0x14;
        FUN_100a5b78(uVar12 | 0x1d00031,puVar6,puVar2,0x14,uVar8,uVar3,uVar7);
      }
      FUN_10034838(*(undefined1 *)(iVar11 + 0x16c));
      FUN_1011ea48(&local_40,0,0x14);
      iVar4 = FUN_1003494c(*(undefined1 *)(iVar11 + 0x16c),&local_40);
      if (iVar4 == 0) {
        uVar8 = uStack_34 >> 0x10 & 0xff;
        uVar3 = local_38;
        uVar7 = local_3c;
        FUN_100a5b78(DAT_10032200 | uVar12,PTR_s_prompter_reading_config_100321e4,DAT_10032204,
                     *(undefined1 *)(iVar11 + 0x16c),uVar8,local_38,local_3c);
        iVar4 = local_40;
        *(undefined1 *)(iVar11 + 0x15f) = uStack_34._2_1_;
        *(int *)(iVar11 + 0x1438) = local_40;
        *(uint *)(iVar11 + 0x143c) = local_3c;
        *(uint *)(iVar11 + 0x1440) = local_38;
        *(uint *)(iVar11 + 0x1444) = uStack_34;
        *(uint *)(iVar11 + 0x1448) = local_30;
        cVar10 = *(char *)(iVar11 + 0x16c);
        if (*(char *)(iVar11 + 0x15e) != cVar10) {
          *(char *)(iVar11 + 0x15e) = cVar10;
          if (cVar10 == '\x14') {
            iVar13 = iVar11 + 0x118;
          }
          else if (cVar10 == '\x16') {
            iVar13 = iVar11 + 0xf8;
          }
          else if (cVar10 == '\x10') {
            iVar13 = iVar11 + 0x138;
          }
          else {
            iVar13 = iVar11 + 0x118;
            *(undefined1 *)(iVar11 + 0x15e) = 0x14;
          }
          if ((*(int *)(iVar11 + 0x14) != 0) && (iVar13 != 0)) {
            if (local_40 != 0) {
              FUN_1012566e(*(int *)(iVar11 + 0x14),
                           (uint)*(ushort *)(local_40 + 4) * (uint)*(byte *)(local_40 + 6));
              uVar3 = (uint)*(byte *)(iVar4 + 6);
              uVar8 = (uint)*(ushort *)(iVar4 + 4);
              FUN_100a5b78(DAT_10032208 | uVar12,PTR_s_prompter_reading_config_100321e4,DAT_1003220c
                           ,uVar3 * uVar8,uVar8,uVar3,uVar7);
            }
            FUN_10126f52(*(undefined4 *)(iVar11 + 0x14),iVar13,0);
            uVar3 = local_30 >> 0x10;
            uVar8 = (uint)*(byte *)(iVar11 + 0x15f);
            FUN_100a5b78(DAT_10032210 | uVar12,PTR_s_prompter_reading_config_100321e4,DAT_10032214,
                         *(undefined1 *)(iVar11 + 0x15e),uVar8,uVar3,uVar7);
          }
        }
        FUN_10032d70(iVar11 + 0x1420);
        uVar5 = DAT_10032218;
        if (*(char *)(iVar11 + 0x16d) == '\0') {
          *(undefined1 *)(iVar11 + 0x141c) = 0;
          uVar5 = uVar12 | 0x2180031;
          uVar15 = DAT_10032228;
        }
        else {
          *(undefined1 *)(iVar11 + 0x141c) = 1;
          uVar5 = uVar5 | uVar12;
          uVar15 = DAT_1003221c;
        }
        FUN_100a5b78(uVar5,PTR_s_prompter_reading_config_100321e4,uVar15,0x141c,uVar8,uVar3,uVar7);
      }
      else {
        FUN_100a5b78(DAT_1003222c | uVar12,PTR_s_prompter_reading_config_100321e4,DAT_10032230);
        uVar5 = DAT_10032234;
        if (*(char *)(iVar11 + 0x16c) == '\0') {
          *(undefined1 *)(iVar11 + 0x15f) = 9;
          puVar2 = PTR_s_Setting_default_font_size___d_100321fc;
          puVar6 = PTR_s_prompter_reading_config_100321e4;
          *(undefined1 *)(iVar11 + 0x16c) = 0x14;
          FUN_100a5b78(uVar5 | uVar12,puVar6,puVar2,0x14);
        }
        cVar10 = *(char *)(iVar11 + 0x16c);
        iVar4 = iVar11 + 0x118;
        if (*(char *)(iVar11 + 0x15e) != cVar10) {
          *(char *)(iVar11 + 0x15e) = cVar10;
          if (cVar10 == '\x10') {
            uVar9 = 0xc;
            iVar4 = iVar11 + 0x138;
LAB_10032154:
            *(undefined1 *)(iVar11 + 0x15f) = uVar9;
          }
          else {
            if (cVar10 == '\x14') {
LAB_100321c0:
              uVar9 = 2;
              goto LAB_10032154;
            }
            if (cVar10 == '\x16') {
              iVar4 = iVar11 + 0xf8;
              goto LAB_100321c0;
            }
          }
          if (*(int *)(iVar11 + 0x14) != 0) {
            FUN_10126fae();
            uVar8 = FUN_10125790();
            iVar13 = *(int *)(iVar4 + 8);
            uVar7 = (int)uVar8 / iVar13;
            if (iVar13 != 0) {
              cVar10 = (char)uVar7;
              if ((uVar7 & 0xff) != 0) {
                cVar10 = cVar10 + -1;
              }
              *(char *)(iVar11 + 0x15f) = cVar10;
            }
            FUN_1012566e(*(undefined4 *)(iVar11 + 0x14),iVar13 * (uint)*(byte *)(iVar11 + 0x15f) * 2
                        );
            FUN_10126f52(*(undefined4 *)(iVar11 + 0x14),iVar4,0);
            uVar3 = iVar13 * (uint)*(byte *)(iVar11 + 0x15f);
            FUN_100a5b78(DAT_10032238 | uVar12,PTR_s_prompter_reading_config_100321e4,DAT_1003223c,
                         iVar13,uVar8,uVar3,uVar7);
          }
        }
        *(undefined1 *)(iVar11 + 0x141c) = 1;
      }
      if (*(char *)(iVar11 + 0x16d) == '\0') {
        FUN_100a5b78(DAT_10032274 | uVar12,DAT_1003227c,DAT_10032278,iVar14,uVar8,uVar3,uVar7);
        FUN_100334d0(3);
        *(undefined1 *)(iVar11 + 0x1420) = 0;
        if (*(int *)(iVar11 + 0x158) != 0) {
          FUN_10094ab8();
          *(undefined4 *)(iVar11 + 0x158) = 0;
        }
      }
      else {
        FUN_100a5b78(DAT_10032220 | uVar12,PTR_s_prompter_reading_config_100321e4,DAT_10032224,
                     *(undefined1 *)(iVar11 + 0x141c),iVar14,uVar3,uVar7);
        FUN_100334d0(0);
        FUN_100046a8();
        if ((*(int *)(iVar11 + 0x158) != 0) &&
           (-1 < (int)((uint)*(byte *)(*(int *)(iVar11 + 0x158) + 0x14) << 0x1f))) {
          FUN_1012b322(*(undefined4 *)(*piVar1 + 0x158));
        }
      }
    }
    uVar3 = DAT_100321e8 | uVar12;
    puVar6 = DAT_100321ec;
  } while( true );
}

