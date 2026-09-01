/* FUN_100c0adc @ 0x100c0adc */

undefined4 FUN_100c0adc(undefined4 param_1)

{
  int iVar1;
  short local_24 [16];
  
  iVar1 = FUN_100ca440(param_1,local_24);
  if ((iVar1 < 0) || (local_24[0] != 0x101)) {
    FUN_100a5b78(DAT_100c0b20 | (DAT_100c0b1c - DAT_100c0b18) * 0x20 & 0xff00U,DAT_100c0b28,
                 DAT_100c0b24);
  }
  return 0;
}

