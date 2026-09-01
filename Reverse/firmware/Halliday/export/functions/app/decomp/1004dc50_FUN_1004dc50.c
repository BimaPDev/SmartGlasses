/* FUN_1004dc50 @ 0x1004dc50 */

void FUN_1004dc50(undefined4 param_1)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)PTR_DAT_1004dcbc;
  iVar2 = FUN_10124372();
  iVar3 = FUN_1012437a(param_1);
  if ((iVar3 == 7) || ((iVar3 == 0xd && (iVar3 = FUN_100871bc(param_1), iVar3 == 10)))) {
    FUN_10094174(4,PTR_s_WEST_TOPDIR_application_bt_watch_1004dcc4,0x28,
                 PTR_s__screen_time_view_list_event_cb_1004dcc8,PTR_s_LV_EVENT_CLICKED___d_1004dcc0,
                 *(undefined4 *)(iVar2 + 0x10));
    if (*(int *)PTR_DAT_1004dcbc != iVar4) goto LAB_1004dc8e;
  }
  else {
    if (*(int *)PTR_DAT_1004dcbc == iVar4) {
      return;
    }
LAB_1004dc8e:
    FUN_1013cdc0();
  }
  uVar1 = *(undefined1 *)(iVar2 + 0x10);
  iVar2 = *DAT_1004dc40;
  if (*DAT_1004dc44 == 0) {
    if (*DAT_1004dc40 == iVar2) {
      return;
    }
  }
  else {
    iVar3 = *(int *)(DAT_1004dc48 + 4);
    (**(code **)(iVar3 + 8))();
    (**(code **)(iVar3 + 4))(uVar1);
    if (*DAT_1004dc40 == iVar2) goto LAB_1004dc24;
  }
  FUN_1013cdc0();
LAB_1004dc24:
                    /* WARNING: Could not recover jumptable at 0x1004dc2e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(DAT_1004dc4c + 4))();
  return;
}

