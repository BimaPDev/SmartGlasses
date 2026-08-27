/* FUN_140a047c @ 0x140a047c */

int FUN_140a047c(void)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 unaff_lr;
  
  puVar3 = DAT_140a04cc;
  uVar2 = DAT_140a04c8;
  iVar5 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    iVar5 = isIRQinterruptsEnabled();
  }
  if (-1 < iVar5 << 0x1f) {
    *DAT_140a04cc = 0x140a048e;
    puVar3[1] = unaff_lr;
    disableIRQinterrupts();
  }
  uVar4 = FUN_1403a144(DAT_140a04c8,0x1000,3,1);
  FUN_1402a6e8(4,0x2a6,DAT_140a04d8,DAT_140a04d4,DAT_140a04d0,uVar2,0x1000,uVar4);
  return iVar5;
}

