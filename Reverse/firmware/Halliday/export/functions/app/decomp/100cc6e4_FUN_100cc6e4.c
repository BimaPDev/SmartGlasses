/* FUN_100cc6e4 @ 0x100cc6e4 */

int FUN_100cc6e4(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 extraout_r2;
  undefined4 extraout_r3;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    param_1 = DAT_100cc734;
  }
  uVar2 = FUN_100c19e4(param_1,param_3 + 8 + param_2 & 0xffff,0xffffffff,0xffffffff,param_4);
  iVar1 = (int)uVar2;
  if (iVar1 == 0) {
    FUN_10119dc2(DAT_100cc740,DAT_100cc73c,DAT_100cc738,0xa6b,0,(int)((ulonglong)uVar2 >> 0x20));
    FUN_1011a1f0(DAT_100cc738,0xa6b,extraout_r2,extraout_r3);
  }
  FUN_100c1bc4(iVar1 + 8,param_2 + 8);
  return iVar1;
}

