/* FUN_2c034618 @ 0x2c034618 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c034618(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int unaff_r5;
  char in_CY;
  
  if (in_CY != '\0') {
    *(short *)(param_3 + 0x1e) = (short)param_4;
    *(undefined4 *)(unaff_r5 + 0x44) = param_4;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

