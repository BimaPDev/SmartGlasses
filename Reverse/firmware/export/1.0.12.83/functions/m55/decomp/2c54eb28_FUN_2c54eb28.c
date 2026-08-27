/* FUN_2c54eb28 @ 0x2c54eb28 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c54eb28(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint in_fpscr;
  undefined8 uVar3;
  
  uVar1 = FUN_2c48e738();
  uVar3 = VectorUnsignedToFloat((uint)*(byte *)(param_1 + 0x1d),(byte)(in_fpscr >> 0x16) & 3);
  FUN_2c48e518((int)uVar3,uVar1,_LAB_2c54eb70);
  if (*(char *)(param_1 + 0x1c) == '\0') {
    uVar2 = FUN_2c48e3b8(*(undefined4 *)(param_1 + 4));
    FUN_2c48e474(uVar1,_LAB_2c54eb74,uVar2);
    return uVar1;
  }
  if (*(char *)(param_1 + 0x1c) != '\x01') {
    return uVar1;
  }
  FUN_2c48e5b4(uVar1,_LAB_2c54eb74,*(undefined4 *)(param_1 + 4),1,param_4);
  return uVar1;
}

