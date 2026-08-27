/* FUN_2c27c206 @ 0x2c27c206 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c27c206(undefined4 param_1,undefined1 *param_2)

{
  undefined1 unaff_r6;
  undefined4 in_cr13;
  undefined4 in_cr14;
  
  *param_2 = unaff_r6;
  coprocessor_function(0xe,0,7,in_cr14,in_cr13,in_cr14);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

