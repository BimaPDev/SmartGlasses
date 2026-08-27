/* FUN_2c10b1b8 @ 0x2c10b1b8 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x2c10b1f8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c10b1b8(undefined4 *param_1,undefined4 param_2,int param_3)

{
  undefined4 unaff_r5;
  undefined4 in_cr1;
  undefined4 in_cr6;
  
  *param_1 = unaff_r5;
  coprocessor_moveto(10,4,0,_NMI,in_cr1,in_cr6);
  *(int *)(param_3 + 0x24) = param_3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

