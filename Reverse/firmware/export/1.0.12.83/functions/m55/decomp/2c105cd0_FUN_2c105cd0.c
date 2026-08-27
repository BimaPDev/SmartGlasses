/* FUN_2c105cd0 @ 0x2c105cd0 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c105cd0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int unaff_r4;
  char in_CY;
  
  *param_1 = param_3;
  if (unaff_r4 < 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_CY != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined4 *)(unaff_r4 + 0x1c) = param_3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

