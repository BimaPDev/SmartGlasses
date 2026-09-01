/* FUN_100779e4 @ 0x100779e4 */

undefined4
FUN_100779e4(uint param_1,undefined1 *param_2,undefined1 *param_3,undefined1 *param_4,
            undefined1 *param_5,undefined1 *param_6)

{
  int iVar1;
  undefined *puVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  
  puVar2 = PTR_LAB_1016b68e_1_10077a4c;
  iVar4 = 0;
  do {
    iVar1 = iVar4 * 5;
    if ((byte)PTR_LAB_1016b68e_1_10077a4c[iVar1] == param_1) {
      *param_2 = PTR_LAB_1016b68e_1_10077a4c[iVar1 + 1];
      iVar5 = iVar4;
      if (6 < iVar4) {
        iVar5 = 0;
      }
      uVar3 = (undefined1)iVar5;
      *param_3 = puVar2[iVar1 + 2];
      if (iVar4 < 7) {
        uVar3 = 1;
      }
      *param_4 = puVar2[iVar1 + 3];
      *param_5 = puVar2[iVar1 + 4];
      *param_6 = uVar3;
      return 0;
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 != 0xb);
  FUN_100a5b78(((int)PTR_DAT_10077a54 - (int)PTR_DAT_10077a50) * 0x20 & 0xff00U | 0x1b60011,
               PTR_s_audio_get_pll_setting_dac_10077a5c,
               PTR_s_Failed_to_find_audio_pll_setting_10077a58,param_1,param_4);
  *param_6 = 0xff;
  return 0xfffffff8;
}

