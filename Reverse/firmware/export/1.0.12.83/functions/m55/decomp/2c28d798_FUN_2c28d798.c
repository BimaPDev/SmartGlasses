/* FUN_2c28d798 @ 0x2c28d798 */

undefined8 FUN_2c28d798(undefined4 param_1,undefined1 *param_2,undefined4 param_3,int param_4)

{
  undefined1 unaff_r4;
  int unaff_r6;
  int unaff_r7;
  int unaff_r11;
  
  *(char *)(unaff_r7 * 2) = (char)param_2;
  *(short *)(param_4 + 0x2a) = (short)unaff_r7;
  *(char *)(param_4 + unaff_r7) = (char)unaff_r6;
  *param_2 = unaff_r4;
  return CONCAT44(unaff_r6 << 6,unaff_r11 + 0x800000);
}

