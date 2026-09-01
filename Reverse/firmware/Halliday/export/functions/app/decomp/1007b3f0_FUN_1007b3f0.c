/* FUN_1007b3f0 @ 0x1007b3f0 */

uint FUN_1007b3f0(void)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  
  uVar1 = DAT_1007b48c;
  if (*DAT_1007b478 != 0) {
    piVar3 = *(int **)(*DAT_1007b478 + 0x10);
    uVar1 = DAT_1007b490;
    if (*piVar3 != 0) {
      if ((*(char *)((int)DAT_1007b478 + 0x141) != '\x02') &&
         (*(char *)((int)DAT_1007b478 + 0x141) != '\x04')) {
        return 0;
      }
      iVar2 = FUN_1011fe10(*piVar3,piVar3 + 6);
      if (iVar2 != 0) {
        FUN_100a5b78(DAT_1007b498 | ((int)PTR_LAB_1007b480 - (int)PTR_DAT_1007b47c) * 0x20 & 0xff00U
                     ,PTR_s_chargei_adc_get_sample_1007b484,DAT_1007b494,iVar2);
        return 0xfffffffb;
      }
      return (uint)*(ushort *)piVar3[8];
    }
  }
  FUN_100a5b78(uVar1 | ((int)PTR_LAB_1007b480 - (int)PTR_DAT_1007b47c) * 0x20 & 0xff00U,
               PTR_s_chargei_adc_get_sample_1007b484,DAT_1007b488);
  return 0xfffffffa;
}

