/* FUN_10031a1c @ 0x10031a1c */

void FUN_10031a1c(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  uint unaff_r5;
  int iVar11;
  uint unaff_r10;
  uint unaff_r11;
  undefined4 uVar12;
  undefined8 uVar13;
  code *local_3c;
  uint local_38;
  
  puVar2 = PTR_DAT_10031c1c;
  iVar9 = *DAT_10031c14;
  iVar10 = *DAT_10031c18;
  if (iVar10 == 0) goto LAB_10031c00;
  FUN_10127064(*(undefined4 *)(iVar10 + 8));
  local_3c = *(code **)(puVar2 + 4);
  unaff_r10 = 0;
  local_38 = (*local_3c)();
  puVar3 = PTR_DAT_10031c20;
  (**(code **)(puVar2 + 0x10))();
  unaff_r5 = ((int)puVar3 - (int)PTR_DAT_10031c24) * 0x20 & 0xff00;
  FUN_100a5b78(unaff_r5 | 0x1540031,PTR_s_prompter_list_view_update_10031c2c,
               PTR_s_view_prompter_num____d_10031c28,local_38);
  unaff_r11 = unaff_r5 | DAT_10031c50;
  do {
    if (local_38 <= (unaff_r10 & 0xff)) {
      cVar4 = FUN_10126fd2(*(undefined4 *)(iVar10 + 8));
      FUN_100a5b78(unaff_r5 | 0x1600031,PTR_s_prompter_list_view_update_10031c2c,
                   PTR_s_prompter_num_obj_list_child_cnt___10031c30,cVar4);
      if (cVar4 == '\0') {
        FUN_10124cea(*(undefined4 *)(iVar10 + 0xc),1);
        FUN_10124cea(*(undefined4 *)(iVar10 + 4),1);
        if (*DAT_10031c14 == iVar9) {
          FUN_10124c20(*(undefined4 *)(iVar10 + 0x18),1);
          return;
        }
      }
      else {
        FUN_10124cea(*(undefined4 *)(iVar10 + 0x18),1);
        bVar1 = *(byte *)(iVar10 + 0x15c);
        bVar5 = FUN_10126fd2(*(undefined4 *)(iVar10 + 8));
        unaff_r5 = (uint)bVar5;
        if (unaff_r5 <= bVar1) {
          *(undefined1 *)(iVar10 + 0x15c) = 0;
        }
        *(uint *)(*(int *)(iVar10 + 8) + 0x10) = (uint)bVar1;
        iVar6 = FUN_10126fb4(*(undefined4 *)(iVar10 + 8),*(undefined1 *)(iVar10 + 0x15c));
        if (iVar6 == 0) {
LAB_10031c00:
          if (*DAT_10031c14 == iVar9) {
            return;
          }
        }
        else {
          FUN_1002eefc();
          iVar7 = *(int *)(iVar10 + 0x28);
          if (iVar7 != 0) {
            uVar12 = FUN_10125790(iVar6);
            FUN_1012566e(iVar7,uVar12);
          }
          FUN_1012bb5c(*(undefined4 *)(iVar10 + 0x24),0,unaff_r5);
          if (*DAT_10031c14 == iVar9) {
            FUN_1012bb2a(*(undefined4 *)(iVar10 + 0x24),*(byte *)(iVar10 + 0x15c) + 1);
            return;
          }
        }
      }
      FUN_1013cdc0();
    }
    iVar6 = FUN_10034a08();
    if (iVar6 != 0) {
      iVar7 = iVar6;
      uVar13 = FUN_10003a58(*(undefined4 *)(iVar10 + 0x1274));
      FUN_100a5b78(unaff_r11,PTR_s_prompter_list_view_update_10031c2c,
                   PTR_s_the___d__prompter_file__percent__10031c34,unaff_r10,uVar13,iVar7);
      iVar11 = *DAT_10031c18;
      uVar12 = FUN_10035220(iVar6,iVar11 + 0x160);
      *(undefined4 *)(iVar11 + 0x1274) = uVar12;
      if (*(int *)(iVar11 + 0x164) == 0) {
        FUN_100a5b78(unaff_r5 | 0x11c0031,PTR_s_prompter_view_file_iterate_10031c3c,
                     PTR_s_error_The_file__s_is_null__10031c38,iVar6,uVar13,iVar7);
      }
      else {
        uVar12 = (*local_3c)();
        iVar7 = FUN_1002ed68(*(undefined4 *)(iVar11 + 8));
        FUN_1012569c(iVar7,0x104,DAT_10031c40);
        *(undefined4 *)(iVar7 + 0x10) = uVar12;
        uVar8 = FUN_10096f4c(iVar7);
        FUN_101256e8(uVar8,9,0);
        FUN_1012569c(uVar8,DAT_10031c48,DAT_10031c44);
        FUN_10097b98(uVar8,1);
        FUN_10126f8e(uVar8,0x14,0);
        FUN_10097998(uVar8,iVar6);
        FUN_1002ef9c(iVar7,DAT_10031c4c);
        iVar6 = FUN_1011ea18(iVar11 + 0x170,iVar6);
        if (iVar6 == 0) {
          *(char *)(iVar11 + 0x15c) = (char)uVar12;
        }
      }
    }
    unaff_r10 = unaff_r10 + 1;
  } while( true );
}

