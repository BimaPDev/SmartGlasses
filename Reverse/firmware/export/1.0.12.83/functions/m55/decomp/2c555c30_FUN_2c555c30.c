/* FUN_2c555c30 @ 0x2c555c30 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c555c30(int param_1)

{
  undefined4 uVar1;
  uint in_fpscr;
  undefined8 uVar2;
  
  uVar1 = FUN_2c48e738();
  uVar2 = VectorUnsignedToFloat((uint)*(byte *)(param_1 + 0x34),(byte)(in_fpscr >> 0x16) & 3);
  FUN_2c48e518((int)uVar2,uVar1,_LAB_2c555c84);
  FUN_2c48e4c8(uVar1,_LAB_2c555c88,*(undefined1 *)(param_1 + 0x35));
  FUN_2c48e5b4(uVar1,_LAB_2c555c8c,*(undefined4 *)(param_1 + 4));
  FUN_2c48e5b4(uVar1,_LAB_2c555c90,*(undefined4 *)(param_1 + 0x1c));
  if (*(int *)(param_1 + 0x3c) == 0) {
    return uVar1;
  }
  FUN_2c48e5b4(uVar1,_LAB_2c555c94,*(undefined4 *)(param_1 + 0x38));
  return uVar1;
}

