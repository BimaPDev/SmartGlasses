/* FUN_100d5d18 @ 0x100d5d18 */

undefined4 FUN_100d5d18(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  
  uVar4 = FUN_100d456c();
  iVar2 = (int)uVar4;
  if (iVar2 == 0) {
    uVar3 = (DAT_100d5d94 - DAT_100d5d90) * 0x20 & 0xff00;
    FUN_100a5b78(DAT_100d5d98 | uVar3,DAT_100d5da0,DAT_100d5d9c,uVar3,param_4);
    param_2 = 0xffffffed;
  }
  else {
    bVar1 = *(byte *)(iVar2 + 0x3a);
    if ((int)((ulonglong)uVar4 >> 0x20) == 0) {
      if ((int)((uint)bVar1 << 0x1f) < 0) {
        *(byte *)(iVar2 + 0x3a) = bVar1 & 0xfe;
        FUN_100d5b04(param_1);
      }
      else {
        uVar3 = (DAT_100d5d94 - DAT_100d5d90) * 0x20 & 0xff00;
        FUN_100a5b78(DAT_100d5da4 | uVar3,DAT_100d5da0,DAT_100d5da8,uVar3,param_4);
        param_2 = 0xffffff88;
      }
    }
    else {
      *(byte *)(iVar2 + 0x3a) = bVar1 | 1;
      FUN_100d5b04(param_1,1);
      param_2 = 0;
    }
  }
  return param_2;
}

