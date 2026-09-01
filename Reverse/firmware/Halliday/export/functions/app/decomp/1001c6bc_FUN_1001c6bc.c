/* FUN_1001c6bc @ 0x1001c6bc */

void FUN_1001c6bc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined4 local_40;
  undefined4 local_3c [9];
  ushort local_18 [2];
  int local_14;
  
  local_14 = *(int *)PTR_DAT_1001c8e4;
  FUN_100a5b78(DAT_1001c8f0 | ((int)PTR_DAT_1001c8ec - (int)PTR_DAT_1001c8e8) * 0x20 & 0xff00U,
               PTR_s_reset_glass_data_1001c8f8,PTR_s__________reset_glass_data________1001c8f4);
  FUN_10052be0(PTR_s_glasses_reset_1001c8fc,0);
  FUN_1009eeac(PTR_s_MODE_IDX_1001c900,3);
  FUN_1012d1ae(PTR_s_MODE_IDX_1001c900);
  FUN_1009eeac(PTR_s_CURRENT_PLAYER_1001c904,1);
  FUN_1012d1ae(PTR_s_CURRENT_PLAYER_1001c904);
  puVar1 = PTR_DAT_1001c908;
  FUN_1009eeac(PTR_s_IS_RESET_FLAG_1001c90c,1);
  FUN_1012d1ae(PTR_s_IS_RESET_FLAG_1001c90c);
  (**(code **)(*(int *)(puVar1 + 0x30) + 0x10))();
  (**(code **)(*(int *)(puVar1 + 0x3c) + 0x10))();
  (**(code **)(*(int *)(puVar1 + 0x34) + 0x10))();
  puVar2 = PTR_DAT_1001c910;
  (**(code **)(*(int *)(puVar1 + 0x38) + 0x10))();
  (**(code **)(*(int *)puVar2 + 0xc))();
  (**(code **)(*(int *)(puVar2 + 4) + 0x10))();
  (**(code **)(PTR_DAT_1001c914 + 0xc))();
  (**(code **)(PTR_DAT_1001c918 + 0x10))();
  (**(code **)(PTR_DAT_1001c91c + 0xc))();
  (**(code **)(PTR_DAT_1001c920 + 4))();
  (**(code **)(PTR_DAT_1001c924 + 0x18))();
  (**(code **)(PTR_DAT_1001c928 + 0x10))();
  (**(code **)(PTR_DAT_1001c92c + 0x10))();
  (**(code **)(PTR_DAT_1001c930 + 0xc))();
  (**(code **)(PTR_DAT_1001c934 + 0x18))();
  (**(code **)(PTR_DAT_1001c938 + 4))();
  (**(code **)(PTR_DAT_1001c93c + 0x24))();
  (**(code **)(PTR_DAT_1001c940 + 0xc))();
  (**(code **)(PTR_DAT_1001c944 + 0x10))();
  (*(code *)**(undefined4 **)(PTR_DAT_1001c948 + 0x34))();
  (**(code **)(PTR_DAT_1001c94c + 4))();
  (**(code **)(PTR_DAT_1001c950 + 4))();
  (**(code **)(PTR_DAT_1001c954 + 8))();
  FUN_10023020();
  FUN_1011ea48(local_3c,0,0x24);
  thunk_FUN_1009efe8(PTR_s_ALARM_DATA_1001c958,local_3c,0x24);
  FUN_1012d1ae(PTR_s_ALARM_DATA_1001c958);
  local_40 = 0;
  uVar3 = FUN_100a5168(&local_40);
  FUN_1011ea48(uVar3,0,400);
  thunk_FUN_1009efe8(PTR_s_ALARM_INFO_1001c95c,uVar3,400);
  FUN_1012d1ae(PTR_s_ALARM_INFO_1001c95c);
  FUN_1011ea48(DAT_1001c960,0,0xd0);
  thunk_FUN_1009efe8(DAT_1001c964,DAT_1001c960,0xd0);
  FUN_1012d1ae(DAT_1001c964);
  local_18[0] = 0xa14;
  thunk_FUN_1009efe8(DAT_1001c968,local_18,2);
  FUN_1012d1ae(DAT_1001c968);
  local_3c[0] = DAT_1001c96c;
  thunk_FUN_1009efe8(DAT_1001c970,local_3c);
  FUN_1012d1ae(DAT_1001c970);
  iVar4 = 0;
  puVar5 = DAT_1001c974;
  do {
    *puVar5 = (char)iVar4;
    iVar4 = iVar4 + 1;
    puVar5 = puVar5 + 1;
  } while (iVar4 != 0x10);
  thunk_FUN_1009efe8(PTR_s_MENU_SORTING_1001c978,DAT_1001c974);
  FUN_1012d1ae(PTR_s_MENU_SORTING_1001c978);
  local_18[0] = local_18[0] & 0xff00;
  thunk_FUN_1009efe8(PTR_DAT_1001c97c,local_18,1);
  FUN_1012d1ae(PTR_DAT_1001c97c);
  FUN_1006c2a0(PTR_s__NAND__SYSTEM_BT_NAME_bt_name_li_1001c980);
  FUN_1006c2a0(PTR_s__NAND__SYSTEM_BT_NAME_1001c984);
  FUN_1006c2a0(PTR_s__NAND__SYSTEM_SPORT_sport_lib_1001c988);
  FUN_1006c2a0(PTR_s__NAND__SYSTEM_SPORT_1001c98c);
  FUN_1006c2a0(PTR_s__NAND__SYSTEM_NEWS_news_lib_1001c990);
  FUN_1006c2a0(PTR_s__NAND__SYSTEM_NEWS_1001c994);
  FUN_1006c2a0(PTR_s__NAND__SYSTEM_WEATHER_weather_li_1001c998);
  FUN_1006c2a0(PTR_s__NAND__SYSTEM_WEATHER_1001c99c);
  FUN_1006c2a0(PTR_s__NAND__SYSTEM_WORDS_words_lib_1001c9a0);
  FUN_1006c2a0(PTR_s__NAND__SYSTEM_WORDS_1001c9a4);
  FUN_1006c2a0(PTR_s__NAND__SYSTEM_LUCKY_lucky_lib_1001c9a8);
  FUN_1006c2a0(PTR_s__NAND__SYSTEM_LUCKY_1001c9ac);
  FUN_1006c2a0(PTR_s__NAND__SYSTEM_NAVI_navi_lib_1001c9b0);
  FUN_1006c2a0(PTR_s__NAND__SYSTEM_NAVI_1001c9b4);
  FUN_1006c2a0(PTR_s__NAND__pb_vcf_1001c9b8);
  FUN_10040f84(PTR_s__NAND__MUSIC_1001c9bc);
  FUN_10040f84(PTR_s__NAND__MUSIC_1001c9bc);
  FUN_10040f84(PTR_s__REMIND_CFG_1015068d_0xd_1001c9c0);
  if (*(int *)PTR_DAT_1001c8e4 != local_14) {
    FUN_1013cdc0();
  }
  return;
}

