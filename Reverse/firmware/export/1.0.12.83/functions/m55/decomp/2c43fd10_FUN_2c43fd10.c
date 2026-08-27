/* FUN_2c43fd10 @ 0x2c43fd10 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c43fd10(undefined4 param_1,undefined4 param_2,int param_3)

{
  int unaff_r5;
  undefined2 unaff_r7;
  int unaff_r9;
  int unaff_r10;
  undefined4 in_cr0;
  
  if (-1 < unaff_r9 - unaff_r10) {
    software_bkpt(0x43);
    coprocessor_load(9,in_cr0,*(int *)(unaff_r5 + 0x10) + 0x25c);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined2 *)(param_3 + 0x22) = unaff_r7;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

