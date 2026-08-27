/* FUN_2c0c4158 @ 0x2c0c4158 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c0c4158(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *unaff_r5;
  undefined4 unaff_r6;
  char in_OV;
  undefined4 in_cr15;
  undefined1 auStack_8 [4];
  
  *unaff_r5 = param_1;
  unaff_r5[1] = param_2;
  unaff_r5[2] = param_3;
  unaff_r5[3] = unaff_r5;
  unaff_r5[4] = unaff_r6;
  if (in_OV != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  coprocessor_loadlong(0xc,in_cr15,auStack_8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

