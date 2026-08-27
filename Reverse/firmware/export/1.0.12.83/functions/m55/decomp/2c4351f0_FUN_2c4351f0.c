/* FUN_2c4351f0 @ 0x2c4351f0 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c4351f0(undefined4 param_1,undefined4 *param_2)

{
  int unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  int unaff_r8;
  undefined4 in_cr12;
  
  *(char *)(unaff_r5 + 10) = (char)unaff_r6;
  coprocessor_loadlong(0xe,in_cr12,unaff_r8 + 0x2c0);
  software_interrupt(0xbf);
  *param_2 = param_1;
  param_2[1] = unaff_r6;
  param_2[2] = unaff_r7;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

