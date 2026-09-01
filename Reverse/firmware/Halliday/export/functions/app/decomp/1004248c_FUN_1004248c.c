/* FUN_1004248c @ 0x1004248c */

void FUN_1004248c(void)

{
  byte *pbVar1;
  uint uVar2;
  undefined4 local_114;
  undefined1 auStack_110 [252];
  int local_14;
  
  pbVar1 = DAT_10042530;
  local_14 = *(int *)PTR_DAT_10042524;
  uVar2 = ((int)PTR_DAT_10042528 - (int)PTR_DAT_1004252c) * 0x20 & 0xff00;
  FUN_100a5b78(uVar2 | 0x1660031,PTR_s__tts_play_handler_10042538,PTR_s_tts_play_handler__d_10042534
               ,*DAT_10042530);
  if (*pbVar1 < 0x15) {
    local_114 = 0;
    FUN_1011ea48(auStack_110,0,0xfc);
    FUN_100a2da4(0);
    FUN_10118a1c(&local_114,0x100,PTR_DAT_10042540,
                 *(undefined4 *)(PTR_PTR_1004253c + (uint)*pbVar1 * 4));
    FUN_100a5b78(uVar2 | 0x16e0031,PTR_s__tts_play_handler_10042538,
                 PTR_s_tts_play_handle__s_10042544,&local_114);
    FUN_100a2c44(&local_114,0,0xffffffff,0xffffffff,0);
    FUN_10042200();
  }
  if (*(int *)PTR_DAT_10042524 != local_14) {
    FUN_1013cdc0();
  }
  return;
}

