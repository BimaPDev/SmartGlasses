/* FUN_1002bae0 @ 0x1002bae0 */

void FUN_1002bae0(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = *DAT_1002bb7c;
  iVar1 = FUN_1012437a();
  iVar2 = FUN_10124372(param_1);
  iVar5 = *DAT_1002bb80;
  if (iVar5 == 0) goto LAB_1002bb30;
  if (iVar1 == 7) {
LAB_1002bb08:
    if (*DAT_1002bb7c == iVar4) goto LAB_1002b278;
  }
  else {
    if (iVar1 == 0xd) {
      iVar1 = FUN_100871bc(param_1);
      if (iVar1 != 10) goto LAB_1002bb30;
      goto LAB_1002bb08;
    }
    if (iVar1 == 0xe) {
      *(undefined1 *)(iVar5 + 0xad) = 0;
      FUN_10094174(4,PTR_s_WEST_TOPDIR_application_bt_watch_1002bb8c,0xba,
                   PTR_s_create_new_event_handler_1002bb88,PTR_s_list_index____d_1002bb84,0);
      if (*(int *)(iVar5 + 0x14) == 0) goto LAB_1002bb30;
      if (*DAT_1002bb7c == iVar4) {
        FUN_1012bb2a(*(int *)(iVar5 + 0x14),(int)(short)((short)*(undefined4 *)(iVar2 + 0x10) + 1));
        return;
      }
    }
    else {
LAB_1002bb30:
      if (*DAT_1002bb7c == iVar4) {
        return;
      }
    }
  }
  FUN_1013cdc0();
LAB_1002b278:
  uVar3 = *(undefined4 *)(iVar5 + 4);
  if (*DAT_1002b2a0 != *DAT_1002b2a0) {
    uVar3 = FUN_1013cdc0();
  }
  FUN_1002acc4(uVar3,0xff);
  return;
}

