/* FUN_100776ac @ 0x100776ac */

undefined4
FUN_100776ac(undefined4 param_1,undefined4 param_2,undefined1 *param_3,undefined1 *param_4,
            undefined1 *param_5)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_1011fa04();
  puVar1 = PTR_DAT_10077718;
  iVar2 = 0;
  do {
    if (*(int *)(PTR_DAT_10077718 + iVar2 * 8) == (int)uVar3 * (int)((ulonglong)uVar3 >> 0x20)) {
      *param_3 = PTR_DAT_10077718[iVar2 * 8 + 4];
      *param_4 = puVar1[iVar2 * 8 + 5];
      *param_5 = iVar2 < 9;
      return 0;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 != 0xe);
  FUN_100a5b78(((int)PTR_DAT_10077720 - (int)PTR_DAT_1007771c) * 0x20 & 0xff00U | 0xe40011,
               PTR_s_audio_get_pll_setting_10077728,PTR_s_Failed_to_find_audio_pll_setting_10077724,
               param_1);
  *param_3 = 0xff;
  *param_5 = 0xff;
  return 0xfffffff8;
}

