/* FUN_100263a4 @ 0x100263a4 */

void FUN_100263a4(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  uint unaff_r4;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 local_20;
  int local_1c;
  
  piVar1 = DAT_100264a8;
  local_1c = *DAT_100264a4;
  if (*DAT_100264a8 == 0) goto LAB_10026444;
  local_28 = 0;
  uStack_24 = 0;
  local_20 = 0;
  iVar2 = FUN_10113cfc(DAT_100264ac,param_2,10000,0);
  unaff_r4 = ((int)PTR_DAT_100264b0 - (int)PTR_DAT_100264b4) * 0x20 & 0xff00;
  if (iVar2 != 0) {
    FUN_100a5b78(unaff_r4 | 0xa30011,PTR_s_Message_storageByIndex_100264bc,
                 PTR_s_message_file_mutex_Deadlock______100264b8);
  }
  iVar2 = FUN_1006ba84(&local_28,PTR_s__NAND__SYSTEM_MESSAGE_message_li_100264c0,3);
  FUN_100a5b78(unaff_r4 | 0xa70031,PTR_s_Message_storageByIndex_100264bc,
               PTR_s_Message_storage_fs_open____d_100264c4,iVar2);
  if (-1 < iVar2) goto LAB_1002647a;
  FUN_1006c1dc(PTR_s__NAND__SYSTEM_MESSAGE_100264c8);
  iVar2 = FUN_1006ba84(&local_28,PTR_s__NAND__SYSTEM_MESSAGE_message_li_100264c0,0x13);
  if (-1 < iVar2) goto LAB_10026452;
  FUN_100a5b78(unaff_r4 | 0xac0011,PTR_s_Message_storageByIndex_100264bc,
               PTR_s_fs_open__s_error_ret__d_100264cc,
               PTR_s__NAND__SYSTEM_MESSAGE_message_li_100264c0);
  while( true ) {
    FUN_1006bc30(&local_28);
    FUN_10025bc0();
    FUN_10026270();
LAB_10026444:
    if (*DAT_100264a4 == local_1c) break;
    FUN_1013cdc0();
LAB_10026452:
    FUN_1006bdc4(&local_28,0x102c);
    FUN_1006bd24(&local_28,0);
    FUN_100a5b78(unaff_r4 | 0xb10031,PTR_s_Message_storageByIndex_100264bc,
                 PTR_s_Message_storage_new_ret____d_100264d0,0x102c);
LAB_1002647a:
    param_1 = param_1 * 0x19e;
    FUN_1006bd24(&local_28,param_1,0);
    FUN_1006bcd4(&local_28,*piVar1 + param_1,0x19e);
    FUN_1006be14(&local_28);
  }
  return;
}

