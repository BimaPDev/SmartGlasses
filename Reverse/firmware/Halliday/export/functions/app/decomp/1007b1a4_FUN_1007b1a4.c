/* FUN_1007b1a4 @ 0x1007b1a4 */

uint FUN_1007b1a4(void)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  
  uVar1 = DAT_1007b230;
  if (*DAT_1007b21c != 0) {
    piVar3 = *(int **)(*DAT_1007b21c + 0x10);
    uVar1 = DAT_1007b234;
    if (*piVar3 != 0) {
      iVar2 = FUN_1011fe10(*piVar3,piVar3 + 0xb);
      if (iVar2 != 0) {
        FUN_100a5b78(DAT_1007b23c | ((int)PTR_LAB_1007b224 - (int)PTR_DAT_1007b220) * 0x20 & 0xff00U
                     ,PTR_s_dc5v_adc_get_sample_1007b228,DAT_1007b238,iVar2);
        return 0xfffffffb;
      }
      return (uint)*(ushort *)piVar3[0xd];
    }
  }
  FUN_100a5b78(uVar1 | ((int)PTR_LAB_1007b224 - (int)PTR_DAT_1007b220) * 0x20 & 0xff00U,
               PTR_s_dc5v_adc_get_sample_1007b228,DAT_1007b22c);
  return 0xfffffffa;
}

