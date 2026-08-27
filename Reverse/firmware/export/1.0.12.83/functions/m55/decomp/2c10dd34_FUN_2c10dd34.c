/* FUN_2c10dd34 @ 0x2c10dd34 */

undefined8 FUN_2c10dd34(undefined4 param_1)

{
  uint unaff_r4;
  undefined4 *unaff_r6;
  
  software_bkpt(0x81);
  *(char *)(((int)(unaff_r4 >> 3) >> 0x18 | 0x80480000U) * 2) = (char)unaff_r6;
  return CONCAT44(*unaff_r6,param_1);
}

