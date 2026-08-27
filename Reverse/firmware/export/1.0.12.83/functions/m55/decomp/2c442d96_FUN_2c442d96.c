/* FUN_2c442d96 @ 0x2c442d96 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c442d96(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 unaff_r4;
  undefined4 unaff_r7;
  
  *param_4 = param_1;
  param_4[1] = param_2;
  param_4[2] = unaff_r4;
  param_4[3] = unaff_r7;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

