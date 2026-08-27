/* FUN_2c64ef64 @ 0x2c64ef64 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_2c64ef64(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,uint param_5)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  int iStack_20;
  undefined4 uStack_1c;
  int iStack_18;
  
  uVar2 = 0;
  uVar1 = _LAB_2c64efa8;
  iStack_20 = param_3;
  uStack_1c = param_4;
  iStack_18 = param_3;
  while( true ) {
    uVar3 = uVar2 + 1;
    if (param_5 <= uVar3) break;
    uVar4 = FUN_2c64e81e(&iStack_20,uVar1);
    uVar1 = (undefined4)((ulonglong)uVar4 >> 0x20);
    if (0x10ffff < (uint)uVar4) goto LAB_2c64ef84;
    if (0xffff < (uint)uVar4) {
      uVar2 = uVar3;
    }
    uVar2 = uVar2 + 1;
  }
  if (param_5 == uVar3) {
    FUN_2c64e81e(&iStack_20,0xffff);
  }
LAB_2c64ef84:
  return iStack_20 - param_3;
}

