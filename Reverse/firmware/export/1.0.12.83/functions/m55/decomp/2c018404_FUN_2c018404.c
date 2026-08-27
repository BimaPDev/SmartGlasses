/* FUN_2c018404 @ 0x2c018404 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c018404(void)

{
  bool bVar1;
  char cVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 unaff_lr;
  
  puVar3 = _DAT_2c01843c;
  uVar4 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar4 = isIRQinterruptsEnabled();
  }
  if ((uVar4 & 1) == 0) {
    *_DAT_2c01843c = 0x2c018414;
    puVar3[1] = unaff_lr;
    disableIRQinterrupts();
  }
  isThreadModePrivileged();
  cVar2 = isUsingMainStack();
  if (cVar2 == '\x01') {
    func_0x2c018070();
  }
  else {
    FUN_2c018048();
  }
  if ((uVar4 & 1) == 0) {
    *_DAT_2c01843c = 0xffffffff;
    enableIRQinterrupts();
  }
  return;
}

