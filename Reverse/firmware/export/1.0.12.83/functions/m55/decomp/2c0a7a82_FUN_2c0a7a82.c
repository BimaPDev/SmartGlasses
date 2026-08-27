/* FUN_2c0a7a82 @ 0x2c0a7a82 */

void FUN_2c0a7a82(uint param_1)

{
  code *pcVar1;
  int unaff_r4;
  int unaff_r7;
  uint unaff_r11;
  int in_r12;
  undefined4 in_cr0;
  uint uStack000000e0;
  
  coprocessor_load(2,in_cr0,in_r12 + 0x2b4);
  uStack000000e0 = unaff_r4 + unaff_r7 & 0xffff;
  *(uint *)~param_1 = uStack000000e0;
  ((uint *)~param_1)[1] = unaff_r11;
  software_bkpt(0xee);
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xe0,0x2c0a7aea);
  (*pcVar1)();
}

