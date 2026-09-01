/* FUN_100403ac @ 0x100403ac */

void FUN_100403ac(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uStack_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  iVar1 = *(int *)PTR_DAT_10040408;
  uStack_20 = param_1;
  local_1c = param_2;
  uStack_18 = param_3;
  uStack_14 = param_4;
  FUN_1011ea48(&uStack_20,0,0x14,0);
  uStack_20 = CONCAT22(0xd508,(undefined2)uStack_20);
  local_1c = CONCAT31(local_1c._1_3_,0xff);
  FUN_100a5b78(((int)PTR_DAT_1004040c - (int)PTR_DAT_10040410) * 0x20 & 0xff00U | 0x16c0031,
               PTR_s_volume_sync_to_ui_10040418,PTR_s_volume_sync_to_ui_MSG_VOLUME_SYN_10040414);
  FUN_1009ece8(PTR_s_launcher_10156a52_0x1c_1004041c,&uStack_20);
  if (*(int *)PTR_DAT_10040408 != iVar1) {
    FUN_1013cdc0();
  }
  return;
}

