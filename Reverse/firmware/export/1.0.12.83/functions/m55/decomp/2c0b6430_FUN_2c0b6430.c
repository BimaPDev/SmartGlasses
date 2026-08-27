/* FUN_2c0b6430 @ 0x2c0b6430 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c0b6430(undefined4 param_1,undefined4 param_2,uint param_3,undefined4 *param_4)

{
  char cVar1;
  uint unaff_r5;
  undefined4 in_r12;
  undefined4 in_cr3;
  
  coprocessor_store(0xf,in_cr3,in_r12);
  cVar1 = *(char *)(param_3 * 2);
  *param_4 = 0x2c0b654c;
  param_4[1] = unaff_r5 >> 5 & param_3;
  param_4[2] = 0x70;
  param_4[3] = ((int)cVar1 & (uint)param_4 >> 0xc) - 0xb;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

