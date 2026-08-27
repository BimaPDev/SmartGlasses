/* FUN_2c11ce10 @ 0x2c11ce10 */

void FUN_2c11ce10(int param_1)

{
  code *pcVar1;
  int unaff_r5;
  
  *(uint *)(param_1 + unaff_r5) = (uint)*(byte *)(param_1 + 0x1f);
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xd8,0x2c11d3da);
  (*pcVar1)();
}

