/* FUN_1000fa80 @ 0x1000fa80 */

void FUN_1000fa80(void)

{
  char *pcVar1;
  undefined1 *puVar2;
  undefined1 auStack_1c [16];
  int local_c;
  
  local_c = *DAT_1000faf0;
  puVar2 = (undefined1 *)*DAT_1000faf4;
  pcVar1 = *(char **)(puVar2 + 4);
  *pcVar1 = *pcVar1 + '\x01';
  FUN_10118a1c(auStack_1c,0xd,PTR_s__s_act_1000fafc,PTR_s_callring_1000faf8);
  FUN_100a5b78(((int)PTR_DAT_1000fb04 - (int)PTR_DAT_1000fb00) * 0x20 & 0xff00U | 0x510031,
               PTR_s__btcall_ring_start_1000fb0c,PTR_s_btcall_tts_play_1000fb08);
  FUN_100a2e08(PTR_LAB_1000fa44_1_1000fb10);
  FUN_100a2c44(auStack_1c,0,0xffffffff,0xffffffff,0);
  *puVar2 = 2;
  if (*DAT_1000faf0 != local_c) {
    FUN_1013cdc0();
  }
  return;
}

