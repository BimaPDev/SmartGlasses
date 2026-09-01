/* FUN_10031c98 @ 0x10031c98 */

void FUN_10031c98(undefined4 param_1)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  
  iVar6 = *DAT_10031d60;
  iVar3 = FUN_1012437a();
  iVar4 = FUN_10124372(param_1);
  if (iVar3 == 0xd) {
    cVar2 = FUN_100871bc(param_1);
    if (cVar2 == '\n') {
      iVar3 = *(int *)(iVar4 + 0x10);
      if (iVar3 != 0) {
        iVar4 = FUN_1011ea18(iVar3,DAT_10031d64);
        if (iVar4 == 0) {
          FUN_100316d0();
          puVar1 = PTR_DAT_10031d6c;
          uVar5 = FUN_1003172c(*(undefined1 *)(*DAT_10031d68 + 0x15c));
          FUN_100a5b78(((int)puVar1 - (int)PTR_DAT_10031d70) * 0x20 & 0xff00U | 0x860031,
                       PTR_s_prompter_list_obj_opration_delet_10031d78,
                       PTR_s_prompter_list_obj_opration_delet_10031d74,uVar5);
          (**(code **)PTR_DAT_10031d7c)(uVar5);
          FUN_10031a1c();
          FUN_10052c38(4,2,0);
          FUN_10031c54();
        }
        FUN_10094174(4,PTR_s_WEST_TOPDIR_application_bt_watch_10031d88,0x370,
                     PTR_s_delete_event_handler_10031d84,PTR_s_Button_clicked___s_10031d80,iVar3);
      }
      goto LAB_10031d36;
    }
    if (cVar2 != '\x1b') goto LAB_10031d36;
    if (*DAT_10031d60 == iVar6) goto LAB_10031d56;
  }
  else {
LAB_10031d36:
    if (*DAT_10031d60 == iVar6) {
      return;
    }
  }
  FUN_1013cdc0();
LAB_10031d56:
  FUN_10031c54();
  return;
}

