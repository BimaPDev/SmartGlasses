/* FUN_2c10dd98 @ 0x2c10dd98 */

ulonglong FUN_2c10dd98(undefined4 param_1)

{
  undefined4 unaff_r8;
  int unaff_r10;
  undefined4 in_cr0;
  
  coprocessor_load(0xb,in_cr0,unaff_r10 + -0x318);
  return CONCAT44(unaff_r8,param_1) & 0x550055ffffffff;
}

