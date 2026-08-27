/* FUN_2c5573e8 @ 0x2c5573e8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c5573e8(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint in_fpscr;
  undefined8 uVar3;
  
  uVar1 = FUN_2c48e738();
  FUN_2c48e5b4(uVar1,_LAB_2c557468,*(undefined4 *)(param_1 + 4));
  FUN_2c48e5b4(uVar1,_LAB_2c55746c,*(undefined4 *)(param_1 + 0x1c));
  FUN_2c48e5b4(uVar1,_LAB_2c557470,*(undefined4 *)(param_1 + 0x34));
  FUN_2c48e5b4(uVar1,_LAB_2c557474,*(undefined4 *)(param_1 + 0x4c));
  uVar3 = VectorSignedToFloat(*(undefined4 *)(param_1 + 100),(byte)(in_fpscr >> 0x16) & 3);
  FUN_2c48e518((int)uVar3,uVar1,_LAB_2c557478);
  FUN_2c48e5b4(uVar1,_LAB_2c55747c,*(undefined4 *)(param_1 + 0x68));
  uVar2 = func_0x2c6729dc(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84));
  FUN_2c48e518(uVar2,uVar1,_LAB_2c557480);
  FUN_2c48e4c8(uVar1,_LAB_2c557484,*(undefined1 *)(param_1 + 0x88));
  uVar3 = VectorSignedToFloat(*(undefined4 *)(param_1 + 0x8c),(byte)(in_fpscr >> 0x16) & 3);
  FUN_2c48e518((int)uVar3,uVar1,_LAB_2c557488);
  return uVar1;
}

