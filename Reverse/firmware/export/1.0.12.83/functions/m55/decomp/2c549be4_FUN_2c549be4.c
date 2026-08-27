/* FUN_2c549be4 @ 0x2c549be4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c549be4(int param_1)

{
  undefined4 uVar1;
  uint in_fpscr;
  undefined8 uVar2;
  
  uVar1 = FUN_2c48e738();
  FUN_2c48e5b4(uVar1,_LAB_2c549c24,*(undefined4 *)(param_1 + 0xc));
  FUN_2c48e5b4(uVar1,_LAB_2c549c28,*(undefined4 *)(param_1 + 0x24));
  uVar2 = VectorSignedToFloat(*(undefined4 *)(param_1 + 4),(byte)(in_fpscr >> 0x16) & 3);
  FUN_2c48e518((int)uVar2,uVar1,_LAB_2c549c2c);
  uVar2 = VectorSignedToFloat(*(undefined4 *)(param_1 + 8),(byte)(in_fpscr >> 0x16) & 3);
  FUN_2c48e518((int)uVar2,uVar1,_LAB_2c549c30);
  return uVar1;
}

