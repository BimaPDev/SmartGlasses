/* FUN_2c08c7d8 @ 0x2c08c7d8 */

void FUN_2c08c7d8(int param_1)

{
  code *pcVar1;
  int unaff_r4;
  short unaff_r5;
  undefined4 unaff_lr;
  undefined4 in_cr0;
  undefined4 in_cr6;
  
  coprocessor_store(0xc,in_cr0,unaff_lr);
  coprocessor_load(5,in_cr6,*(int *)(unaff_r4 + 0xc) + -200);
  software_bkpt(0);
  *(short *)((param_1 >> 8) + 0x12) = *(short *)((param_1 >> 8) + 0x30) - unaff_r5;
  NMI = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xe0,0x2c08ca12);
  (*pcVar1)();
}

