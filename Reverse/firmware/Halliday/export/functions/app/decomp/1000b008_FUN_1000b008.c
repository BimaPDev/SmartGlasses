/* FUN_1000b008 @ 0x1000b008 */

undefined4 FUN_1000b008(float param_1)

{
  int iVar1;
  
  param_1 = param_1 * DAT_1000b048;
  iVar1 = *DAT_1000b04c;
  *(byte *)(DAT_1000b050 + 0xb) = *(byte *)(DAT_1000b050 + 0xb) & 0xfe;
  FUN_1013144c((uint)(0.0 < param_1) * (int)param_1);
  if (*DAT_1000b04c != iVar1) {
    FUN_1013cdc0();
  }
  return 0;
}

