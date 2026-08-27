/* FUN_2c10de5e @ 0x2c10de5e */

undefined8 FUN_2c10de5e(int param_1)

{
  uint unaff_r4;
  byte unaff_r5;
  undefined4 *unaff_r6;
  
  *(byte *)(param_1 + 0xe) = unaff_r5 & 0x55;
  *(char *)(((int)(unaff_r4 >> 3) >> 0x18 | 0x80480000U) * 2) = (char)unaff_r6;
  return CONCAT44(*unaff_r6,param_1);
}

