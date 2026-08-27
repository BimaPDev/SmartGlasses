/* FUN_14039e64 @ 0x14039e64 */

void FUN_14039e64(void)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 unaff_lr;
  
  puVar2 = DAT_14039eb4;
  iVar3 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    iVar3 = isIRQinterruptsEnabled();
  }
  if (iVar3 << 0x1f < 0) {
    iVar3 = FUN_1403a2cc(DAT_14039eb8,2);
  }
  else {
    *DAT_14039eb4 = 0x14039e74;
    puVar2[1] = unaff_lr;
    disableIRQinterrupts();
    iVar3 = FUN_1403a2cc(DAT_14039eb8,2);
    *puVar2 = 0xffffffff;
    enableIRQinterrupts();
  }
  if (iVar3 == 0) {
    return;
  }
  FUN_1402a6e8(4,0x61,DAT_14039ec4,DAT_14039ec0,DAT_14039ebc,iVar3);
  return;
}

