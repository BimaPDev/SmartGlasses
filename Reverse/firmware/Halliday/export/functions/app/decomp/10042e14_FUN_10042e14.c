/* FUN_10042e14 @ 0x10042e14 */

void FUN_10042e14(uint param_1,undefined4 param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  
  uVar2 = DAT_10042ea0;
  puVar1 = PTR_s_screen_set_auto_sleep_by_index_10042e98;
  iVar4 = *(int *)PTR_DAT_10042e90;
  uVar3 = ((int)PTR_DAT_10042e88 - (int)PTR_DAT_10042e8c) * 0x20 & 0xff00;
  if (param_1 < 5) {
    *DAT_10042e9c = (char)param_1;
    FUN_100a5b78(uVar3 | 0xd90031,puVar1,uVar2,param_1,param_1,iVar4,param_3);
    FUN_10042d18(*(undefined1 *)(DAT_10042ea4 + param_1));
    if (*(int *)PTR_DAT_10042e90 == iVar4) {
      FUN_10042ae4();
      return;
    }
  }
  else if (*(int *)PTR_DAT_10042e90 == iVar4) goto LAB_10042e40;
  uVar3 = FUN_1013cdc0();
LAB_10042e40:
  FUN_100a5b78(uVar3 | 0xd50031,PTR_s_screen_set_auto_sleep_by_index_10042e98,
               PTR_s_screen_set_screen_time_by_index_i_10042e94);
  return;
}

