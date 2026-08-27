/* FUN_2c49aa9c @ 0x2c49aa9c */

void FUN_2c49aa9c(void)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 unaff_lr;
  
  puVar2 = DAT_2c49aaec;
  iVar3 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    iVar3 = isIRQinterruptsEnabled();
  }
  if (iVar3 << 0x1f < 0) {
    iVar3 = FUN_2c49aa24(DAT_2c49aaf0,7);
  }
  else {
    *DAT_2c49aaec = 0x2c49aaac;
    puVar2[1] = unaff_lr;
    disableIRQinterrupts();
    iVar3 = FUN_2c49aa24(DAT_2c49aaf0,7);
    *puVar2 = 0xffffffff;
    enableIRQinterrupts();
  }
  if (iVar3 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x61,DAT_2c49aafc,DAT_2c49aaf8,DAT_2c49aaf4,iVar3);
}

