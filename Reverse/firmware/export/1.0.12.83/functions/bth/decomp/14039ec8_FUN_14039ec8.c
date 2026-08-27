/* FUN_14039ec8 @ 0x14039ec8 */

uint FUN_14039ec8(void)

{
  bool bVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 unaff_lr;
  
  puVar2 = DAT_14039f24;
  uVar5 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar5 = isIRQinterruptsEnabled();
  }
  uVar5 = uVar5 & 1;
  if (uVar5 == 0) {
    *DAT_14039f24 = 0x14039ed8;
    puVar2[1] = unaff_lr;
    disableIRQinterrupts();
  }
  uVar6 = 0;
  do {
    uVar4 = 1 << (uVar6 & 0xff);
    uVar3 = uVar6 & 0xff;
    uVar6 = uVar6 + 1;
    if ((uVar4 & *DAT_14039f28) == 0) {
      *DAT_14039f28 = uVar4 | *DAT_14039f28;
      if (uVar5 != 0) {
        return uVar3;
      }
      *DAT_14039f24 = 0xffffffff;
      enableIRQinterrupts();
      return uVar3;
    }
  } while (uVar6 != 8);
  if (uVar5 != 0) {
    return 0xff;
  }
  *DAT_14039f24 = 0xffffffff;
  enableIRQinterrupts();
  return 0xff;
}

