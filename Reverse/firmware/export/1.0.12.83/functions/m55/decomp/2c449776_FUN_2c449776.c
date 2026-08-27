/* FUN_2c449776 @ 0x2c449776 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c449776(int param_1)

{
  uint uVar1;
  int unaff_r4;
  undefined4 unaff_r5;
  int unaff_r6;
  int unaff_r7;
  
  *(char *)(unaff_r4 + 0x1b) = (char)unaff_r5;
  if (unaff_r6 == 0xf1) {
    uRam00000149 = 0xf1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar1 = (uint)*(ushort *)(unaff_r7 + 0x1e);
  iRam000000f1 = param_1;
  uRam000000f5 = uVar1;
  iRam000000f9 = unaff_r7 - param_1;
  iRam000000fd = unaff_r6;
  iRam00000101 = unaff_r7;
  *(undefined4 *)(uVar1 + 0x7e) = 0x105;
  *(undefined4 *)(uVar1 + 0x82) = unaff_r5;
  *(int *)(uVar1 + 0x86) = unaff_r6;
  *(int *)(uVar1 + 0x8a) = unaff_r7;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

