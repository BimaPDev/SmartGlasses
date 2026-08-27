/* FUN_2c2bca30 @ 0x2c2bca30 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c2bca30(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 unaff_r7;
  undefined4 in_cr5;
  undefined4 in_cr14;
  
  coprocessor_function(3,0,7,in_cr14,in_cr5,in_cr14);
  *(undefined4 *)(param_3 + 100) = unaff_r7;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

