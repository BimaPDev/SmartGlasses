/* FUN_2c114cd4 @ 0x2c114cd4 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c114cd4(undefined4 param_1)

{
  undefined4 *unaff_r4;
  undefined4 unaff_r7;
  
  *unaff_r4 = param_1;
  unaff_r4[1] = unaff_r7;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

