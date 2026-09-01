/* FUN_100a676c @ 0x100a676c */

int FUN_100a676c(uint param_1,uint param_2,uint param_3,undefined4 param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  byte bVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  
  iVar10 = DAT_100a68c0;
  uVar8 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar8 = getBasePriority();
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if ((bVar1) && (uVar9 = getBasePriority(), uVar9 == 0 || 0x20 < uVar9)) {
    setBasePriority(0x20);
  }
  InstructionSynchronizationBarrier(0xf);
  uVar9 = *(byte *)(DAT_100a68c0 + 0x28) & 1;
  if ((*(byte *)(DAT_100a68c0 + 0x28) & 1) == 0) {
LAB_100a67a2:
    iVar4 = uVar9 * 0x30 + DAT_100a68c0;
    *(byte *)(iVar4 + 0x28) = *(byte *)(iVar4 + 0x28) | 1;
  }
  else {
    if (-1 < (int)((uint)*(byte *)(DAT_100a68c0 + 0x58) << 0x1f)) {
      uVar9 = 1;
      goto LAB_100a67a2;
    }
    if (-1 < (int)((uint)*(byte *)(DAT_100a68c0 + 0x88) << 0x1f)) {
      uVar9 = 2;
      goto LAB_100a67a2;
    }
    uVar9 = 3;
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(uVar8);
  }
  InstructionSynchronizationBarrier(0xf);
  if (uVar9 == 3) {
    return 0;
  }
  iVar4 = iVar10 + uVar9 * 0x30;
  *(undefined4 *)(iVar4 + 0x2c) = param_4;
  uVar5 = *(byte *)(iVar4 + 0x28) & 0xfffffffb | (param_3 & 1) << 2;
  *(char *)(iVar4 + 0x28) = (char)uVar5;
  if (-1 < (int)(uVar5 << 0x1d)) {
    return iVar4;
  }
  if (param_1 == 0) {
    iVar2 = FUN_10112e84(DAT_100a68d0);
    uVar8 = DAT_100a68d0;
    if (iVar2 != 0) {
      *(undefined4 *)(iVar4 + 8) = 0;
      *(undefined4 *)(iVar4 + 0xc) = 0;
      *(undefined4 *)(iVar4 + 0x10) = 0x4000;
      *(undefined4 *)(iVar4 + 0x14) = 0;
      bVar6 = *(byte *)(iVar4 + 0x28);
      *(int *)(iVar10 + uVar9 * 0x30) = iVar2;
      *(byte *)(iVar4 + 0x28) = bVar6 & 0xfd | (byte)((param_2 & 1) << 1);
      goto LAB_100a689e;
    }
  }
  else {
    iVar2 = FUN_1005ddc8(param_1 & 0xff);
    if (iVar2 == 0) {
      return 0;
    }
    bVar6 = *(byte *)(iVar2 + 10) & 0xf0;
    if ((*(byte *)(iVar2 + 10) & 0xf0) == 0) {
      iVar2 = FUN_10112e84(DAT_100a68c4);
      uVar8 = DAT_100a68c4;
    }
    else {
      if (((bVar6 != 0x20) && (bVar6 != 0x40)) && (bVar6 != 0x10)) {
        return 0;
      }
      iVar2 = FUN_10112e84(DAT_100a68cc);
      uVar8 = DAT_100a68cc;
    }
    if (iVar2 != 0) {
      iVar3 = FUN_1005ddc8(param_1 & 0xff);
      if (iVar3 == 0) {
        return 0;
      }
      iVar7 = iVar10 + uVar9 * 0x30;
      *(undefined4 *)(iVar7 + 8) = *(undefined4 *)(iVar3 + 0xc);
      *(undefined4 *)(iVar7 + 0xc) = 0;
      uVar8 = *(undefined4 *)(iVar3 + 0x10);
      *(int *)(iVar10 + uVar9 * 0x30) = iVar2;
      *(undefined4 *)(iVar7 + 0x10) = uVar8;
      *(undefined4 *)(iVar7 + 0x14) = 0;
      *(byte *)(iVar7 + 0x28) = *(byte *)(iVar7 + 0x28) & 0xfd | (byte)((param_2 & 1) << 1);
LAB_100a689e:
      iVar10 = uVar9 * 0x30 + iVar10;
      FUN_10119dc2(DAT_100a68d4,iVar2,*(undefined4 *)(iVar10 + 8),*(undefined4 *)(iVar10 + 0xc),
                   *(undefined4 *)(iVar10 + 0x10),*(undefined4 *)(iVar10 + 0x14),param_3);
      FUN_100a6d70(iVar4);
      return iVar4;
    }
  }
  FUN_10119dc2(DAT_100a68c8,uVar8);
  return 0;
}

