/* FUN_2c0f8190 @ 0x2c0f8190 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c0f8190(int param_1,int param_2)

{
  undefined4 uVar1;
  int unaff_r5;
  char in_NG;
  undefined4 in_cr6;
  undefined4 in_cr8;
  undefined4 in_cr9;
  undefined4 in_cr14;
  undefined4 in_cr15;
  
  if (in_NG == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  coprocessor_store(8,in_cr8,unaff_r5);
  *(char *)(param_1 + 3) = (char)param_1;
  uVar1 = _DAT_2c0f8444;
  software_interrupt(0x2e);
  *(undefined2 *)(unaff_r5 + -0xfc) = 0;
  coprocessor_function(0xf,10,0,in_cr9,in_cr6,in_cr14);
  *(short *)(param_2 * 4 + 0x14) = (short)uVar1;
  coprocessor_moveto(10,5,0,0x4a,in_cr6,in_cr15);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

