/* FUN_100a5538 @ 0x100a5538 */

void FUN_100a5538(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 uVar10;
  undefined1 uStack_b4;
  byte local_b3;
  int local_a8;
  undefined1 auStack_a4 [136];
  
  uVar8 = 0x20;
  uVar10 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar10 = getBasePriority();
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if ((bVar1) && (uVar5 = getBasePriority(), uVar5 == 0 || 0x20 < uVar5)) {
    setBasePriority(0x20);
  }
  InstructionSynchronizationBarrier(0xf);
  iVar7 = *(int *)(param_1 + 8);
  if (iVar7 != 0) {
    uVar8 = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(uVar10);
  }
  InstructionSynchronizationBarrier(0xf);
  uVar2 = DAT_100a566c;
  uVar3 = DAT_100a5660;
  uVar4 = DAT_100a565c;
  if (iVar7 != 0) {
    FUN_10119dc2(DAT_100a5658,iVar7,uVar8,uVar10);
    uVar2 = DAT_100a566c;
    uVar3 = DAT_100a5660;
    uVar4 = DAT_100a565c;
  }
LAB_100a5570:
  while( true ) {
    while( true ) {
      iVar7 = param_1 + 0x14;
      uVar5 = FUN_1011a09e(iVar7);
      if (uVar5 < 0x10) {
        return;
      }
      uVar8 = FUN_1011a09e(iVar7);
      iVar6 = FUN_100545e4(iVar7,&uStack_b4,0x10);
      iVar9 = local_a8;
      if (iVar6 == 0x10) break;
      FUN_10119dc2(DAT_100a5664);
    }
    if ((0x3f < local_b3) || ((local_b3 & 0xf) == 0)) {
      uVar10 = FUN_1011a09e(iVar7);
      FUN_10119dc2(DAT_100a5668,local_b3 >> 4,local_b3 & 0xf,uVar10,uVar8);
      uVar8 = 0;
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        uVar8 = getBasePriority();
      }
      bVar1 = (bool)isCurrentModePrivileged();
      if ((bVar1) && (uVar5 = getBasePriority(), uVar5 == 0 || 0x20 < uVar5)) {
        setBasePriority(0x20);
      }
      InstructionSynchronizationBarrier(0xf);
      *(undefined4 *)(param_1 + 0x14) = 0;
      *(undefined4 *)(param_1 + 0x18) = 0;
      *(undefined4 *)(param_1 + 0x1c) = 0;
      *(undefined4 *)(param_1 + 0x20) = 0;
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        setBasePriority(uVar8);
      }
      InstructionSynchronizationBarrier(0xf);
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
      return;
    }
    if ((local_b3 & 0xf0) != 0x30) goto LAB_100a5620;
    iVar9 = local_a8 + 1;
    iVar7 = FUN_100545e4(iVar7,auStack_a4);
    if (iVar9 * 4 == iVar7) break;
    FUN_10119dc2(uVar2,local_a8);
  }
  goto LAB_100a5640;
LAB_100a5620:
  if ((local_b3 & 0xf0) == 0x10) {
    iVar7 = FUN_100545e4(iVar7,auStack_a4);
    if (iVar9 == iVar7) {
LAB_100a5640:
      uVar8 = FUN_100a529c(&uStack_b4,uVar4,0x100);
      FUN_100a6148(&uStack_b4,uVar4,uVar8);
    }
    else {
      FUN_10119dc2(uVar3,iVar9);
    }
  }
  goto LAB_100a5570;
}

