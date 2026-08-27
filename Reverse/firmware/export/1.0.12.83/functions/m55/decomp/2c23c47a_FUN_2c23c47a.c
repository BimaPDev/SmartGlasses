/* FUN_2c23c47a @ 0x2c23c47a */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c23c47a(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  
  *unaff_r5 = param_3;
  unaff_r5[1] = param_4;
  unaff_r5[2] = unaff_r6;
  unaff_r5[3] = unaff_r7;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

