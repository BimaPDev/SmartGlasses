/* FUN_100c1fe4 @ 0x100c1fe4 */

int FUN_100c1fe4(int *param_1,uint param_2)

{
  ushort uVar1;
  uint uVar2;
  undefined4 extraout_r2;
  int iVar3;
  undefined4 extraout_r3;
  undefined8 uVar4;
  
  iVar3 = *param_1;
  uVar1 = *(ushort *)(param_1 + 1);
  uVar2 = FUN_10132790();
  if (uVar2 < param_2) {
    FUN_10119dc2(DAT_100c2034,uVar2,param_2);
    uVar4 = FUN_10132790(param_1);
    if ((uint)uVar4 < param_2) {
      FUN_10119dc2(DAT_100c2040,DAT_100c203c,DAT_100c2038,0x341,uVar4);
      FUN_1011a1f0(DAT_100c2038,0x341,extraout_r2,extraout_r3);
    }
  }
  *(short *)(param_1 + 1) = (short)param_2 + (short)param_1[1];
  return (uint)uVar1 + iVar3;
}

