/* FUN_2c54f1c0 @ 0x2c54f1c0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c54f1c0(int param_1)

{
  undefined4 uVar1;
  uint in_fpscr;
  undefined8 uVar2;
  
  uVar1 = FUN_2c48e738();
  uVar2 = VectorSignedToFloat(*(undefined4 *)(param_1 + 8),(byte)(in_fpscr >> 0x16) & 3);
  FUN_2c48e518((int)uVar2,uVar1,_LAB_2c54f218);
  FUN_2c48e4c8(uVar1,_LAB_2c54f21c,*(undefined1 *)(param_1 + 4));
  FUN_2c48e4c8(uVar1,_LAB_2c54f220,*(undefined1 *)(param_1 + 0x3c));
  FUN_2c48e5b4(uVar1,_LAB_2c54f224,*(undefined4 *)(param_1 + 0xc));
  uVar2 = VectorSignedToFloat(*(undefined4 *)(param_1 + 0x40),(byte)(in_fpscr >> 0x16) & 3);
  FUN_2c48e518((int)uVar2,uVar1,_LAB_2c54f228);
  FUN_2c48e5b4(uVar1,_LAB_2c54f22c,*(undefined4 *)(param_1 + 0x24));
  return uVar1;
}

