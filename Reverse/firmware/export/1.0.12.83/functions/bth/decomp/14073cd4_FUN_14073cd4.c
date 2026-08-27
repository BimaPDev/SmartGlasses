/* FUN_14073cd4 @ 0x14073cd4 */

void FUN_14073cd4(uint param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 unaff_lr;
  
  puVar2 = DAT_14073d30;
  if (param_1 < 7) {
    iVar3 = 0;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      iVar3 = getBasePriority();
    }
    if (iVar3 != 0x40) {
      *DAT_14073d30 = 0x14073cec;
      puVar2[1] = unaff_lr;
    }
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(0x40);
    }
    if (param_1 < 7) {
      *DAT_14073d34 = *DAT_14073d34 & ~(1 << (param_1 & 0xff));
    }
    if (iVar3 == 0) {
      *DAT_14073d30 = 0xffffffff;
    }
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(iVar3);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402a64c(0x44,DAT_14073d3c,0x90,DAT_14073d38,param_1,0);
}

