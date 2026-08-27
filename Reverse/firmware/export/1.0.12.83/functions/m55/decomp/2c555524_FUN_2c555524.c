/* FUN_2c555524 @ 0x2c555524 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c555524(int param_1)

{
  undefined4 uVar1;
  uint in_fpscr;
  undefined8 uVar2;
  
  uVar1 = FUN_2c48e738();
  uVar2 = VectorSignedToFloat(*(undefined4 *)(param_1 + 4),(byte)(in_fpscr >> 0x16) & 3);
  FUN_2c48e518((int)uVar2,uVar1,_LAB_2c555564);
  uVar2 = VectorSignedToFloat(*(undefined4 *)(param_1 + 0x20),(byte)(in_fpscr >> 0x16) & 3);
  FUN_2c48e518((int)uVar2,uVar1,_LAB_2c555568);
  FUN_2c48e5b4(uVar1,_LAB_2c55556c,*(undefined4 *)(param_1 + 8));
  FUN_2c48e5b4(uVar1,_LAB_2c555570,*(undefined4 *)(param_1 + 0x24));
  return uVar1;
}

