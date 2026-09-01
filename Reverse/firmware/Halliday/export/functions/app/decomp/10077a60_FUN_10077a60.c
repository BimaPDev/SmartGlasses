/* FUN_10077a60 @ 0x10077a60 */

int FUN_10077a60(uint param_1,uint param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 uStack_1c;
  
  uStack_1c = param_4;
  iVar1 = FUN_100775bc(param_4,(int)&uStack_1c + 3,param_3,param_4,param_1,param_2,param_3);
  if (iVar1 == 0) {
    if (uStack_1c._3_1_ == '\x01') {
      iVar2 = 9;
      iVar4 = 0;
    }
    else {
      if (uStack_1c._3_1_ != '\0') {
        FUN_100a5b78(((int)PTR_DAT_10077b10 - (int)PTR_DAT_10077b0c) * 0x20 & 0xff00U | 0x1d20011,
                     PTR_s_audio_get_pll_sample_rate_10077b14,PTR_s_Error_series__d_10077b18);
        return -1;
      }
      iVar2 = 0xe;
      iVar4 = 9;
    }
    puVar3 = PTR_DAT_10077b1c + iVar4 * 8;
    for (; iVar4 < iVar2; iVar4 = iVar4 + 1) {
      if (((byte)puVar3[4] == param_2) && ((byte)puVar3[5] == param_3)) {
        iVar1 = FUN_1011fa22(*(uint *)(PTR_DAT_10077b1c + iVar4 * 8) / param_1);
        return iVar1;
      }
      puVar3 = puVar3 + 8;
    }
    if (iVar2 == iVar4) {
      FUN_100a5b78(((int)PTR_DAT_10077b10 - (int)PTR_DAT_10077b0c) * 0x20 & 0xff00U | 0x1e00013,
                   PTR_s_audio_get_pll_sample_rate_10077b14,
                   PTR_s_Failed_to_translate_sr_pre_div___10077b20,param_2,param_3,param_4);
      iVar1 = -0xe;
    }
  }
  return iVar1;
}

