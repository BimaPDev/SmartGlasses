/* FUN_2c2852dc @ 0x2c2852dc */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c2852dc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 unaff_r4;
  undefined4 *unaff_r5;
  undefined4 unaff_r6;
  
  *unaff_r5 = param_3;
  unaff_r5[1] = param_4;
  unaff_r5[2] = unaff_r4;
  unaff_r5[3] = unaff_r6;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

