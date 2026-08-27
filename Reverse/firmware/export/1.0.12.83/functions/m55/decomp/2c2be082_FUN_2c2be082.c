/* FUN_2c2be082 @ 0x2c2be082 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c2be082(undefined4 param_1,undefined2 *param_2,int param_3)

{
  int unaff_r5;
  int unaff_r6;
  int unaff_r7;
  bool in_ZR;
  bool in_CY;
  
  if (!in_CY || in_ZR) {
    *(char *)(unaff_r7 + 3) = (char)unaff_r7;
    *param_2 = (short)unaff_r5;
    *(undefined1 *)(unaff_r6 * 2) = *(undefined1 *)(param_3 + unaff_r5);
    *(char *)(unaff_r7 + 1) = (char)unaff_r6 + '\f';
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

