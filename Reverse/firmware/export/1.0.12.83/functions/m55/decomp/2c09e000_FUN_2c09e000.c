/* FUN_2c09e000 @ 0x2c09e000 */

void FUN_2c09e000(void)

{
  int *in_r3;
  int unaff_r7;
  undefined4 in_cr8;
  
  coprocessor_load(2,in_cr8,unaff_r7 + -0xb8);
  *(short *)(*in_r3 + 0xe) = (short)(*in_r3 << 1);
  return;
}

