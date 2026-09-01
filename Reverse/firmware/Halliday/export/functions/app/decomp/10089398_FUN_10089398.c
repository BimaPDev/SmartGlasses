/* FUN_10089398 @ 0x10089398 */

void FUN_10089398(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 extraout_r2;
  int iVar3;
  undefined4 extraout_r3;
  undefined8 uVar4;
  
  uVar2 = DAT_10089414;
  piVar1 = DAT_10089410;
  if (*(int *)(param_1 + 8) == 0) {
    iVar3 = *DAT_10089410;
    *DAT_10089410 = iVar3 + 1;
    iVar3 = FUN_10094254(0x24,uVar2,piVar1,iVar3 + 1,param_1,param_2,param_3,param_4);
    *(int *)(param_1 + 8) = iVar3;
    if (iVar3 == 0) {
      uVar4 = FUN_10094174(3,DAT_10089424,0x16e,DAT_10089414,DAT_10089420,DAT_1008941c,DAT_10089418)
      ;
      FUN_10119dc2(DAT_1008942c,DAT_10089428,DAT_10089424,0x16e,uVar4);
      FUN_10119dc2(DAT_10089430);
      FUN_1011a1f0(DAT_10089424,0x16e,extraout_r2,extraout_r3);
    }
    if (*(int *)(param_1 + 8) != 0) {
      FUN_10124976(*(int *)(param_1 + 8),0x24);
      *(ushort *)(*(int *)(param_1 + 8) + 0x20) = *(ushort *)(*(int *)(param_1 + 8) + 0x20) | 0xf03;
    }
  }
  return;
}

