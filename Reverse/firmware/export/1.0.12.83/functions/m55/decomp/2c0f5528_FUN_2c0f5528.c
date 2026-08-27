/* FUN_2c0f5528 @ 0x2c0f5528 */

void FUN_2c0f5528(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4)

{
  code *pcVar1;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 in_cr0;
  undefined4 in_cr1;
  undefined4 in_cr13;
  
  *param_3 = param_2;
  param_3[1] = param_3;
  param_3[2] = param_4;
  param_3[3] = unaff_r4;
  param_3[4] = unaff_r5;
  param_3[5] = unaff_r6;
  coprocessor_function(4,0xf,1,in_cr0,in_cr13,in_cr1);
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfd,0x2c0f5580);
  (*pcVar1)();
}

