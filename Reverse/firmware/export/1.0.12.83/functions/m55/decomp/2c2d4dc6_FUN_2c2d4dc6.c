/* FUN_2c2d4dc6 @ 0x2c2d4dc6 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c2d4dc6(uint param_1,undefined4 param_2)

{
  int unaff_r6;
  bool in_CY;
  bool bVar1;
  
  bVar1 = param_1 == 0;
  if (in_CY && !bVar1) {
    bVar1 = param_1 >> 0x10 == 0;
  }
  if (bVar1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined4 *)(unaff_r6 * 2) = param_2;
  *(short *)(unaff_r6 * 8 + 0x38) = (short)(unaff_r6 * 8);
  software_interrupt(0xac);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

