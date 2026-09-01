/* FUN_100bcbf8 @ 0x100bcbf8 */

void FUN_100bcbf8(void)

{
  uint uVar1;
  undefined4 in_r3;
  
  FUN_1011ea48(DAT_100bcc28,0,0x40);
  uVar1 = DAT_100bcc30;
  *DAT_100bcc2c = 0;
  FUN_100a5b78(uVar1 | (DAT_100bcc38 - DAT_100bcc34) * 0x20 & 0xff00U,DAT_100bcc3c,DAT_100bcc40,
               in_r3);
  return;
}

