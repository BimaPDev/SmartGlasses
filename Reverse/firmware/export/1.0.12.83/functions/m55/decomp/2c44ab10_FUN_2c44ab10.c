/* FUN_2c44ab10 @ 0x2c44ab10 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c44ab10(undefined4 param_1,int param_2,int param_3,int param_4)

{
  int *unaff_r5;
  bool in_ZR;
  bool in_CY;
  
  if (in_CY && !in_ZR) {
    *(int **)(param_2 + 0x78) = unaff_r5;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *unaff_r5 = param_2;
  unaff_r5[1] = param_3;
  unaff_r5[2] = param_4;
  software_bkpt(0x5f);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

