/* FUN_2c64ef34 @ 0x2c64ef34 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_2c64ef34(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  int iStack_18;
  undefined4 uStack_14;
  int iStack_10;
  
  uVar1 = 0;
  uVar2 = _LAB_2c64ef60;
  iStack_18 = param_3;
  uStack_14 = param_4;
  iStack_10 = param_3;
  while ((param_5 != 0 && (param_5 = param_5 + -1, uVar1 < 0x110000))) {
    uVar3 = FUN_2c64e81e(&iStack_18,uVar2);
    uVar2 = (undefined4)((ulonglong)uVar3 >> 0x20);
    uVar1 = (uint)uVar3;
  }
  return iStack_18 - param_3;
}

