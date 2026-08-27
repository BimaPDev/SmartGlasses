/* FUN_2c43956e @ 0x2c43956e */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c43956e(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *unaff_r4;
  undefined4 unaff_r5;
  
  *(char *)(param_1 + 0xf) = (char)param_1;
  *unaff_r4 = param_3;
  unaff_r4[1] = unaff_r4;
  unaff_r4[2] = unaff_r5;
  software_bkpt(0xf5);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

