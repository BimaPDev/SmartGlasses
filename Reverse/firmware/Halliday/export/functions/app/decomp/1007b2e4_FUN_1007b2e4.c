/* FUN_1007b2e4 @ 0x1007b2e4 */

uint FUN_1007b2e4(void)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  
  uVar1 = DAT_1007b370;
  if (*DAT_1007b35c != 0) {
    piVar3 = *(int **)(*DAT_1007b35c + 0x10);
    uVar1 = DAT_1007b374;
    if (*piVar3 != 0) {
      iVar2 = FUN_1011fe10(*piVar3,piVar3 + 1);
      if (iVar2 != 0) {
        FUN_100a5b78((DAT_1007b364 - DAT_1007b360) * 0x20 & 0xff00U | 0x6700011,DAT_1007b368,
                     DAT_1007b378,iVar2);
        return 0xfffffffb;
      }
      return (uint)*(ushort *)piVar3[3];
    }
  }
  FUN_100a5b78(uVar1 | (DAT_1007b364 - DAT_1007b360) * 0x20 & 0xff00U,DAT_1007b368,DAT_1007b36c);
  return 0xfffffffa;
}

