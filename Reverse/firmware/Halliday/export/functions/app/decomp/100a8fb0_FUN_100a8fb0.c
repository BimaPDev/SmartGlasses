/* FUN_100a8fb0 @ 0x100a8fb0 */

undefined4 FUN_100a8fb0(int param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  
  uVar6 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar6 = getBasePriority();
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if ((bVar1) && (uVar2 = getBasePriority(), uVar2 == 0 || 0x20 < uVar2)) {
    setBasePriority(0x20);
  }
  InstructionSynchronizationBarrier(0xf);
  if (*(char *)(param_1 + 8) == '\0') {
    *(undefined1 *)(param_1 + 8) = 1;
    uVar5 = DAT_100a9124;
    uVar2 = DAT_100a9120;
    iVar4 = DAT_100a911c;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(uVar6);
    }
    InstructionSynchronizationBarrier(0xf);
    uVar7 = *(byte *)(param_1 + 5) & 8;
    uVar9 = (DAT_100a90fc - DAT_100a9100) * 0x20 & 0xff00;
    if ((*(byte *)(param_1 + 5) & 8) == 0) {
      iVar4 = FUN_10064734(*(undefined4 *)(param_1 + 0x24));
      uVar6 = DAT_100a912c;
      uVar2 = DAT_100a9120;
      uVar10 = uVar9 | DAT_100a9128;
      while (((iVar8 = FUN_10064770(*(undefined4 *)(param_1 + 0x24)), iVar8 < iVar4 + -1 &&
              (uVar7 = uVar7 + 1, uVar7 != 0x65)) &&
             ((int)((uint)*(byte *)(param_1 + 9) << 0x1e) < 0))) {
        if ((uVar7 * DAT_100a911c >> 1 | uVar7 * DAT_100a911c * -0x80000000) <= uVar2) {
          uVar5 = FUN_10064770(*(undefined4 *)(param_1 + 0x24));
          FUN_100a5b78(uVar10,DAT_100a9110,uVar6,uVar7,uVar5);
        }
        FUN_1011dbc8(2);
      }
      iVar8 = FUN_10064770(*(undefined4 *)(param_1 + 0x24));
      uVar6 = FUN_1012d608(*(undefined4 *)(param_1 + 0x18));
      uVar5 = FUN_1012f56c(*(undefined4 *)(param_1 + 0x58));
      FUN_100a5b78(DAT_100a9114 | uVar9,DAT_100a9110,DAT_100a9118,uVar7,iVar4 - iVar8,uVar6,uVar5);
    }
    else {
      uVar7 = DAT_100a9104 | uVar9;
      iVar8 = 0;
      while (((iVar3 = FUN_1012d608(*(undefined4 *)(param_1 + 0x18)), 0 < iVar3 &&
              (iVar8 = iVar8 + 1, iVar8 != 0x65)) &&
             ((int)((uint)*(byte *)(param_1 + 9) << 0x1e) < 0))) {
        if (((uint)(iVar4 * iVar8) >> 1 | iVar4 * iVar8 * -0x80000000) <= uVar2) {
          uVar6 = FUN_1012d608(*(undefined4 *)(param_1 + 0x18));
          FUN_100a5b78(uVar7,DAT_100a9110,uVar5,iVar8,uVar6);
        }
        FUN_1011dbc8(2);
      }
      uVar6 = FUN_1012d608(*(undefined4 *)(param_1 + 0x18));
      FUN_100a5b78(DAT_100a9108 | uVar9,DAT_100a9110,DAT_100a910c,iVar8,uVar6);
    }
    FUN_100a8e00(param_1,0,0,1,4);
  }
  else {
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(uVar6);
    }
    InstructionSynchronizationBarrier(0xf);
  }
  return 0;
}

