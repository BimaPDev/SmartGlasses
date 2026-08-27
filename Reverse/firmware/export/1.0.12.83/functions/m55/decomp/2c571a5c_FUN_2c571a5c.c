/* FUN_2c571a5c @ 0x2c571a5c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c571a5c(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint in_fpscr;
  undefined8 uVar3;
  
  uVar1 = FUN_2c48e738();
  uVar2 = FUN_2c48e738();
  uVar3 = VectorSignedToFloat(*(undefined4 *)(param_1 + 8),(byte)(in_fpscr >> 0x16) & 3);
  FUN_2c48e518((int)uVar3,uVar2,_LAB_2c571ac8);
  FUN_2c48e474(uVar1,_LAB_2c571acc,uVar2);
  FUN_2c48e4c8(uVar1,_LAB_2c571ad0,*(undefined1 *)(param_1 + 0xc));
  uVar3 = VectorSignedToFloat(*(undefined4 *)(param_1 + 0x10),(byte)(in_fpscr >> 0x16) & 3);
  FUN_2c48e518((int)uVar3,uVar1,_LAB_2c571ad4);
  uVar3 = VectorSignedToFloat(*(undefined4 *)(param_1 + 0x14),(byte)(in_fpscr >> 0x16) & 3);
  FUN_2c48e518((int)uVar3,uVar1,_LAB_2c571ad8);
  uVar3 = VectorSignedToFloat(*(undefined4 *)(param_1 + 0x18),(byte)(in_fpscr >> 0x16) & 3);
  FUN_2c48e518((int)uVar3,uVar1,_LAB_2c571adc);
  return uVar1;
}

