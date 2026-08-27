/* FUN_2c018440 @ 0x2c018440 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c018440(void)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 unaff_lr;
  
  FUN_2c0155a8();
  uVar4 = func_0x2c01560c();
  puVar2 = _DAT_2c018494;
  *_DAT_2c018494 = uVar4;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar3 = _DAT_2c018498;
  iVar6 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    iVar6 = isIRQinterruptsEnabled();
  }
  if (iVar6 << 0x1f < 0) {
    uVar4 = func_0x2c018070(1);
  }
  else {
    *_DAT_2c018498 = 0x2c018462;
    puVar3[1] = unaff_lr;
    disableIRQinterrupts();
    uVar4 = func_0x2c018070(1);
    *puVar3 = 0xffffffff;
    enableIRQinterrupts();
  }
  FUN_2c0155a8();
  uVar5 = func_0x2c01560c();
  puVar2[1] = uVar5;
  puVar2[2] = 1;
  return uVar4;
}

