/* FUN_100c9e38 @ 0x100c9e38 */

void FUN_100c9e38(int param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  while (uVar4 = FUN_100c1b58(param_1 + 0x38,param_2,0,0), uVar1 = (uint)((ulonglong)uVar4 >> 0x20),
        iVar3 = (int)uVar4, iVar3 != 0) {
    if (*(int *)(iVar3 + 0x14) != 0) {
      FUN_100c9c00();
    }
    FUN_100c1c90(iVar3);
    param_2 = extraout_r1_00;
  }
  iVar3 = *(int *)(param_1 + 0x14);
  lVar5 = (ulonglong)uVar1 << 0x20;
  uVar2 = extraout_r2;
  if (iVar3 != 0) {
    FUN_10119dc2(DAT_100c9ec4,DAT_100c9ec0,DAT_100c9ebc,0x56c,0,uVar1);
    FUN_10119dc2(DAT_100c9ec8);
    lVar5 = FUN_1011a1f0(DAT_100c9ebc,0x56c,extraout_r2,iVar3);
    uVar2 = extraout_r2_00;
  }
  iVar3 = *(int *)(param_1 + 0x1c);
  if (iVar3 != 0) {
    FUN_10119dc2(DAT_100c9ec4,DAT_100c9ecc,DAT_100c9ebc,0x56d,lVar5);
    FUN_1011a1f0(DAT_100c9ebc,0x56d,uVar2,iVar3);
  }
  FUN_10133712(param_1);
  FUN_1013cbaa(param_1 + 0x60,extraout_r1,0,0);
  return;
}

