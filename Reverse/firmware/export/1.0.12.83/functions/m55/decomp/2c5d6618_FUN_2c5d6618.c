/* FUN_2c5d6618 @ 0x2c5d6618 */

undefined4 FUN_2c5d6618(void)

{
  undefined4 uVar1;
  uint in_fpscr;
  undefined4 in_cr6;
  undefined4 in_cr10;
  double dVar2;
  
  uVar1 = FUN_2c63e0e0();
  dVar2 = (double)VectorSignedToFloat(uVar1,(byte)(in_fpscr >> 0x16) & 3);
  coprocessor_function2(0xb,0xb,2,in_cr6,in_cr10,in_cr6);
  uVar1 = VectorFloatToSigned((dVar2 * 10.0) / DAT_2c5d6648,3);
  return uVar1;
}

