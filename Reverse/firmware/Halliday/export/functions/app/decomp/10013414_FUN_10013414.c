/* FUN_10013414 @ 0x10013414 */

void FUN_10013414(void)

{
  undefined4 uVar1;
  undefined1 auStack_38 [24];
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined1 *local_10;
  int local_c;
  
  local_10 = auStack_38;
  local_c = *DAT_10013490;
  uStack_1c = 0;
  local_20 = 0x9080000;
  local_18 = 0;
  local_14 = DAT_10013494;
  FUN_1013ca1a(auStack_38,0,1);
  if (*DAT_10013498 != 0) {
    FUN_100a5b78(((int)PTR_DAT_100134a0 - (int)PTR_DAT_1001349c) * 0x20 & 0xff00U | 0x1180031,
                 PTR_s_lcmusic_force_stop_cb_sync_100134a8,PTR_s_music_state__d_100134a4,
                 *(undefined1 *)(*DAT_10013498 + 2));
    uVar1 = FUN_1009e224();
    FUN_1009ece8(uVar1,&local_20);
    FUN_1011dbde(auStack_38,0xffffffff);
  }
  if (*DAT_10013490 != local_c) {
    FUN_1013cdc0();
  }
  return;
}

