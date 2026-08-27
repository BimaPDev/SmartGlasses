/* FUN_2c54d7cc @ 0x2c54d7cc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c54d7cc(int param_1)

{
  undefined4 uVar1;
  uint in_fpscr;
  undefined8 uVar2;
  
  uVar1 = FUN_2c48e738();
  FUN_2c48e5b4(uVar1,_LAB_2c54d858,*(undefined4 *)(param_1 + 4));
  uVar2 = VectorSignedToFloat(*(undefined4 *)(param_1 + 0x1c),(byte)(in_fpscr >> 0x16) & 3);
  FUN_2c48e518((int)uVar2,uVar1,_LAB_2c54d85c);
  FUN_2c48e5b4(uVar1,_LAB_2c54d860,*(undefined4 *)(param_1 + 0x20));
  FUN_2c48e4c8(uVar1,_LAB_2c54d864,*(undefined1 *)(param_1 + 0x38));
  FUN_2c48e5b4(uVar1,_LAB_2c54d868,*(undefined4 *)(param_1 + 0x3c));
  FUN_2c48e5b4(uVar1,_LAB_2c54d86c,*(undefined4 *)(param_1 + 0x54));
  FUN_2c48e5b4(uVar1,_LAB_2c54d870,*(undefined4 *)(param_1 + 0x6c));
  FUN_2c48e5b4(uVar1,_LAB_2c54d874,*(undefined4 *)(param_1 + 0x84));
  FUN_2c48e5b4(uVar1,_LAB_2c54d878,*(undefined4 *)(param_1 + 0x9c));
  FUN_2c48e5b4(uVar1,_LAB_2c54d87c,*(undefined4 *)(param_1 + 0xb4));
  FUN_2c48e5b4(uVar1,_LAB_2c54d880,*(undefined4 *)(param_1 + 0xcc));
  return uVar1;
}

