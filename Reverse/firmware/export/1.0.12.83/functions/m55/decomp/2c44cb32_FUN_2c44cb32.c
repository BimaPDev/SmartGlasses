/* FUN_2c44cb32 @ 0x2c44cb32 */

void FUN_2c44cb32(int param_1,undefined4 param_2,int param_3)

{
  code *pcVar1;
  undefined4 in_cr4;
  undefined4 in_cr11;
  undefined4 in_cr15;
  
  *(int *)(param_1 + 0x50) = param_3 + -0xdf;
  coprocessor_function2(0xe,0xc,5,in_cr11,in_cr4,in_cr15);
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0x17,0x2c44cb46);
  (*pcVar1)();
}

