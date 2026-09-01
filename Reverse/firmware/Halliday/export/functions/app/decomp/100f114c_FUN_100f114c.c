/* FUN_100f114c @ 0x100f114c */

uint FUN_100f114c(uint param_1)

{
  uint uVar1;
  
  uVar1 = DAT_100f116c;
  while( true ) {
    if (DAT_100f1170 <= uVar1) {
      return 0;
    }
    if (*(ushort *)(uVar1 + 0xc) == param_1) break;
    uVar1 = uVar1 + 0x14;
  }
  return uVar1;
}

