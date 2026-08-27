/* FUN_2c6672a4 @ 0x2c6672a4 */

undefined4 FUN_2c6672a4(void)

{
  undefined4 in_r3;
  undefined4 uVar1;
  undefined4 uVar2;
  double in_d0;
  undefined4 extraout_s1;
  undefined8 uVar3;
  
  uVar1 = FUN_2c6673e0();
  if (!NAN(in_d0)) {
    uVar2 = FUN_2c666bc0();
    if (1.0 < (double)CONCAT44(extraout_s1,uVar2)) {
      uVar3 = FUN_2c6685e0();
      uVar1 = DAT_2c6672f8;
      *(undefined4 *)uVar3 = 0x21;
      uVar1 = FUN_2c668458(uVar1,(int)((ulonglong)uVar3 >> 0x20),0x21,in_r3);
      return uVar1;
    }
  }
  return uVar1;
}

