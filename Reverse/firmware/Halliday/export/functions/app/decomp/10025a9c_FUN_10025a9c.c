/* FUN_10025a9c @ 0x10025a9c */

void FUN_10025a9c(uint param_1)

{
  int iVar1;
  
  iVar1 = *DAT_10025adc;
  if (iVar1 != 0) {
    iVar1 = (param_1 % 10) * 0x19e + iVar1;
  }
  if (*DAT_10025ad8 != *DAT_10025ad8) {
    FUN_1013cdc0(iVar1);
  }
  return;
}

