/* FUN_2c258388 @ 0x2c258388 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x2c258598) */

void FUN_2c258388(undefined4 param_1,int param_2,undefined4 *param_3)

{
  undefined4 unaff_r5;
  int unaff_r6;
  undefined4 *unaff_r7;
  char in_NG;
  
  *unaff_r7 = param_1;
  unaff_r7[1] = param_3;
  if (in_NG != '\0') {
    *param_3 = unaff_r5;
    param_3[1] = unaff_r6;
    *(undefined2 *)(unaff_r6 + 0x14) = 0x85a8;
    *(short *)(param_2 + 0x38) = (short)param_3 + 0x304;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

