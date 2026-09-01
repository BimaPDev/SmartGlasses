/* FUN_1002f824 @ 0x1002f824 */

void FUN_1002f824(uint param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  uint unaff_r7;
  undefined4 *unaff_r8;
  undefined4 *puVar4;
  int *local_60;
  undefined4 local_5c;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined2 local_20;
  int local_1c;
  
  iVar2 = *DAT_1002f994;
  local_1c = *(int *)PTR_DAT_1002f998;
  piVar3 = DAT_1002f994;
  if (iVar2 == 0) goto LAB_1002f87e;
  unaff_r7 = 0;
  puVar4 = (undefined4 *)(iVar2 + 0x14);
  do {
    unaff_r8 = puVar4 + 1;
    if (param_1 != (unaff_r7 & 0xff)) goto LAB_1002f88e;
    FUN_10124c20(*puVar4,1);
    while (unaff_r7 = unaff_r7 + 1, puVar4 = unaff_r8, unaff_r7 == 6) {
      unaff_r7 = FUN_1004b7d8();
      if (unaff_r7 == 0) {
        if (*(int *)(iVar2 + 0x1fc) != 0) {
          FUN_10094ab8();
          *(undefined4 *)(iVar2 + 0x1fc) = 0;
        }
        FUN_100933f8();
        switch(param_1) {
        case 0:
          FUN_100a5b78(((int)PTR_DAT_1002f99c - (int)PTR_DAT_1002f9a0) * 0x20 & 0xff00U | 0x6c0031,
                       PTR_s_ai_view_set_layout_1002f9a8,PTR_s_ai_view_set_layout_loading_1002f9ac);
          (**(code **)(PTR_DAT_1002f9b0 + 4))();
          FUN_10045b58();
          break;
        case 1:
          FUN_10048434(1);
          FUN_1001b8c8(1);
          break;
        case 2:
          FUN_10094174(4,PTR_s_WEST_TOPDIR_application_bt_watch_1002f9bc,0x1de,
                       PTR_s_button_ai_on_listen_1002f9b8,
                       PTR_s_button_ai_on_listen_1015427e_6_1002f9b4);
          if ((*piVar3 != 0) && (unaff_r7 = *(uint *)(DAT_1002f9c0 + 0xe8), unaff_r7 != 0)) {
            FUN_100a5b78(((int)PTR_DAT_1002f99c - (int)PTR_DAT_1002f9a0) * 0x20 & 0xff00U |
                         0x1e80031,DAT_1002f9c8,DAT_1002f9c4);
            *(undefined1 *)(unaff_r7 + 0x14ca) = 0;
            *(undefined1 *)(unaff_r7 + 1) = 0;
            *DAT_1002f9cc = 3;
            FUN_10048434(1);
            FUN_1001b8c8(1);
          }
          if (*piVar3 != 0) {
            piVar3 = *(int **)(*piVar3 + 8);
            FUN_10093284(&local_60);
            local_40 = 0;
            uStack_3c = 0;
            local_38 = 0xb;
            uStack_34 = 3000;
            local_20 = 0xffff;
            local_5c = DAT_1002f9d0;
            local_60 = piVar3;
            FUN_1009331c(&local_60);
          }
          break;
        case 3:
          if (*(int *)(iVar2 + 0x1fc) == 0) {
            uVar1 = FUN_10094a1c(DAT_1002f9d4,200);
            *(undefined4 *)(iVar2 + 0x1fc) = uVar1;
          }
        }
        *(char *)(iVar2 + 0x1a5) = (char)param_1;
      }
      else {
        FUN_100a5b78(((int)PTR_DAT_1002f99c - (int)PTR_DAT_1002f9a0) * 0x20 & 0xff00U | 0x5e0031,
                     PTR_s_ai_view_set_layout_1002f9a8,
                     PTR_s_ai_view_set_layout_tutorial_is_o_1002f9a4);
      }
LAB_1002f87e:
      if (*(int *)PTR_DAT_1002f998 == local_1c) {
        return;
      }
      FUN_1013cdc0();
LAB_1002f88e:
      FUN_10124cea();
    }
  } while( true );
}

