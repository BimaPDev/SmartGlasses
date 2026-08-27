/* FUN_2c067966 @ 0x2c067966 */

void FUN_2c067966(void)

{
  code *pcVar1;
  int unaff_r6;
  int unaff_lr;
  undefined4 in_cr0;
  undefined4 in_cr11;
  
  coprocessor_store(1,in_cr11,unaff_r6 + -0x2f8);
  software_bkpt(0x39);
  coprocessor_load(10,in_cr0,unaff_lr + -0x44);
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfa,0x2c0679fc);
  (*pcVar1)();
}

