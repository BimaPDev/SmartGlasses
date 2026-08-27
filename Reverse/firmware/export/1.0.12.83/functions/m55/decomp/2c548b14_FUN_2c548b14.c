/* FUN_2c548b14 @ 0x2c548b14 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c548b14(int param_1)

{
  undefined4 uVar1;
  uint in_fpscr;
  undefined8 uVar2;
  
  uVar1 = FUN_2c48e738();
  FUN_2c48e5b4(uVar1,_LAB_2c548b68,*(undefined4 *)(param_1 + 4));
  uVar2 = VectorSignedToFloat(*(undefined4 *)(param_1 + 0x1c),(byte)(in_fpscr >> 0x16) & 3);
  FUN_2c48e518((int)uVar2,uVar1,_LAB_2c548b6c);
  FUN_2c48e5b4(uVar1,_LAB_2c548b70,*(undefined4 *)(param_1 + 0x20));
  FUN_2c48e518((int)*(undefined8 *)(param_1 + 0x38),uVar1,_LAB_2c548b74);
  FUN_2c48e518((int)*(undefined8 *)(param_1 + 0x40),uVar1,_LAB_2c548b78);
  FUN_2c48e5b4(uVar1,_LAB_2c548b7c,*(undefined4 *)(param_1 + 0x48));
  return uVar1;
}

