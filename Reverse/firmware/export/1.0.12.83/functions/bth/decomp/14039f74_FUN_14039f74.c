/* FUN_14039f74 @ 0x14039f74 */

undefined4 FUN_14039f74(uint param_1,uint param_2,uint param_3,uint param_4,byte param_5)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  undefined4 unaff_lr;
  
  puVar3 = DAT_1403a02c;
  if (7 < param_1) {
    return 0xffffffff;
  }
  if (param_3 < 0x20) {
    return 0xfffffffe;
  }
  if ((param_2 & 0x1f) != 0) {
    return 0xfffffffd;
  }
  if (param_4 < 6) {
    uVar5 = 0;
    if ((param_4 != 0) && (param_4 != 3)) {
      if ((1 < param_4 - 1) && (param_4 != 4)) {
        return 0xfffffffb;
      }
      uVar5 = 4;
    }
    uVar4 = 0;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      uVar4 = isIRQinterruptsEnabled();
    }
    if ((uVar4 & 1) == 0) {
      *DAT_1403a02c = 0x1403a002;
      puVar3[1] = unaff_lr;
      disableIRQinterrupts();
    }
    iVar2 = DAT_1403a028;
    if (2 < param_4) {
      uVar5 = uVar5 | 1;
    }
    *(uint *)(DAT_1403a028 + 0x98) = param_1;
    *(uint *)(iVar2 + 0x9c) = uVar5 | param_2 & 0xffffffe0 | 2;
    *(uint *)(iVar2 + 0xa0) = (param_3 - 1) + param_2 & 0xffffffe0 | (param_5 & 7) << 1 | 1;
    DataSynchronizationBarrier(0xf);
    InstructionSynchronizationBarrier(0xf);
    if ((uVar4 & 1) == 0) {
      *DAT_1403a02c = 0xffffffff;
      enableIRQinterrupts();
      return 0;
    }
    return 0;
  }
  return 0xfffffffc;
}

