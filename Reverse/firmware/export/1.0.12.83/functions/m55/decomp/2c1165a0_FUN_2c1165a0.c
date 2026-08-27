/* FUN_2c1165a0 @ 0x2c1165a0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_2c1165a0(void)

{
  int unaff_r4;
  undefined8 *unaff_r7;
  undefined8 in_d22;
  undefined8 in_d28;
  
  _MasterStackPointer = unaff_r4 << 0x14;
  _Reset = 0x20;
  *(char *)((int)unaff_r7 + 0xb) = (char)unaff_r7;
  puRam00000084 = unaff_r7;
  VectorShiftRightAccumulate(in_d28,in_d22,0xb);
  uRam00000052 = 0x20;
  return *unaff_r7;
}

