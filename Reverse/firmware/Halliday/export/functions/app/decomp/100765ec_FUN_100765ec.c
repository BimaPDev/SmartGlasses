/* FUN_100765ec @ 0x100765ec */

undefined4 FUN_100765ec(int param_1,undefined1 *param_2,undefined1 *param_3,undefined1 *param_4)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  
  puVar2 = PTR_DAT_10076660;
  iVar4 = 0;
  do {
    iVar5 = iVar4 * 6;
    if (param_1 <= *(short *)(PTR_DAT_10076660 + iVar5)) {
      *param_2 = PTR_DAT_10076660[iVar5 + 2];
      *param_3 = puVar2[iVar5 + 3];
      puVar3 = PTR_DAT_10076664;
      uVar1 = puVar2[iVar5 + 4];
      *param_4 = uVar1;
      FUN_100a5b78(DAT_1007666c | ((int)puVar3 - (int)PTR_DAT_10076668) * 0x20 & 0xff00U,
                   PTR_s_adc_aux_amic_gain_translate_10076674,PTR_s_gain__d_map___d__d__d__10076670,
                   param_1,*param_2,*param_3,uVar1);
      return 0;
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 != 0x84);
  FUN_100a5b78(DAT_1007667c | ((int)PTR_DAT_10076664 - (int)PTR_DAT_10076668) * 0x20 & 0xff00U,
               PTR_s_adc_aux_amic_gain_translate_10076674,
               PTR_s_can_not_find_out_gain_map__d_10076678,param_1);
  return 0xfffffffe;
}

