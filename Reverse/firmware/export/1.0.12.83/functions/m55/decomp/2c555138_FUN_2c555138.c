/* FUN_2c555138 @ 0x2c555138 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c555138(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  uint in_fpscr;
  undefined8 uVar2;
  
  uVar1 = FUN_2c48e738();
  uVar2 = VectorUnsignedToFloat((uint)*(byte *)(param_1 + 4),(byte)(in_fpscr >> 0x16) & 3);
  FUN_2c48e518((int)uVar2,uVar1,_LAB_2c555168);
  if (*(int *)(param_1 + 0xc) == 0) {
    return uVar1;
  }
  FUN_2c48e5b4(uVar1,_LAB_2c55516c,*(undefined4 *)(param_1 + 8),*(int *)(param_1 + 0xc),param_4);
  return uVar1;
}

