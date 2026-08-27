/* FUN_2c5127f8 @ 0x2c5127f8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c5127f8(undefined4 param_1)

{
  undefined4 uVar1;
  uint in_fpscr;
  undefined8 uVar2;
  
  uVar1 = FUN_2c48e738();
  FUN_2c48e518((int)uRam2c512840,uVar1,_LAB_2c512848);
  uVar2 = VectorUnsignedToFloat(param_1,(byte)(in_fpscr >> 0x16) & 3);
  FUN_2c48e518((int)uVar2,uVar1,_LAB_2c51284c);
  FUN_2c48e5b4(uVar1,_LAB_2c512850,_LAB_2c512854);
  FUN_2c48e5b4(uVar1,_LAB_2c512858,_LAB_2c512854);
  return uVar1;
}

