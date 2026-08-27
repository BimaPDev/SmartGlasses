/* FUN_2c555e8c @ 0x2c555e8c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c555e8c(int param_1)

{
  undefined4 uVar1;
  uint in_fpscr;
  undefined8 uVar2;
  
  uVar1 = FUN_2c48e738();
  uVar2 = VectorUnsignedToFloat((uint)*(byte *)(param_1 + 0x1c),(byte)(in_fpscr >> 0x16) & 3);
  FUN_2c48e518((int)uVar2,uVar1,_LAB_2c555ed4);
  FUN_2c48e4c8(uVar1,_LAB_2c555ed8,*(undefined1 *)(param_1 + 0x1d));
  FUN_2c48e4c8(uVar1,_LAB_2c555edc,*(undefined1 *)(param_1 + 0x1e));
  FUN_2c48e4c8(uVar1,_LAB_2c555ee0,*(undefined1 *)(param_1 + 0x1f));
  FUN_2c48e5b4(uVar1,_LAB_2c555ee4,*(undefined4 *)(param_1 + 4));
  return uVar1;
}

