/* FUN_14039f2c @ 0x14039f2c */

void FUN_14039f2c(uint param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 unaff_lr;
  
  puVar2 = DAT_14039f6c;
  iVar4 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    iVar4 = isIRQinterruptsEnabled();
  }
  if (-1 < iVar4 << 0x1f) {
    *DAT_14039f6c = 0x14039f3a;
    puVar2[1] = unaff_lr;
    puVar3 = DAT_14039f70;
    disableIRQinterrupts();
    uVar5 = *DAT_14039f70;
    *puVar2 = 0xffffffff;
    *puVar3 = uVar5 & ~(1 << (param_1 & 0xff));
    enableIRQinterrupts();
    return;
  }
  *DAT_14039f70 = *DAT_14039f70 & ~(1 << (param_1 & 0xff));
  return;
}

