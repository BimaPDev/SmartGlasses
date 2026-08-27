/* FUN_2c549848 @ 0x2c549848 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c549848(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint in_fpscr;
  undefined8 uVar4;
  
  uVar2 = FUN_2c48e738();
  uVar4 = VectorUnsignedToFloat((uint)*(byte *)(param_1 + 4),(byte)(in_fpscr >> 0x16) & 3);
  FUN_2c48e518((int)uVar4,uVar2,_LAB_2c5498a8);
  cVar1 = *(char *)(param_1 + 0x21);
  if (cVar1 == '\0') {
    uVar3 = FUN_2c48e3b8(*(undefined4 *)(param_1 + 8));
    FUN_2c48e474(uVar2,_LAB_2c5498ac,uVar3);
    return uVar2;
  }
  if (cVar1 != '\x01') {
    if (cVar1 != '\x02') {
      return uVar2;
    }
    FUN_2c48e5b4(uVar2,_LAB_2c5498ac,*(undefined4 *)(param_1 + 8));
    return uVar2;
  }
  FUN_2c48e4c8(uVar2,_LAB_2c5498ac,*(undefined1 *)(param_1 + 0x20),1,param_4);
  return uVar2;
}

