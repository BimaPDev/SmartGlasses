/* FUN_14072a44 @ 0x14072a44 */

void FUN_14072a44(uint param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_lr;
  
  puVar2 = DAT_14072ab0;
  if (1 < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x42,DAT_14072aac,199,DAT_14072aa8);
  }
  if (*param_2 != 0) {
    return;
  }
  iVar4 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    iVar4 = getBasePriority();
  }
  if (iVar4 != 0x40) {
    param_3 = 0x14072a6e;
    *DAT_14072ab0 = 0x14072a6e;
    puVar2[1] = unaff_lr;
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(0x40);
  }
  iVar3 = *(int *)(DAT_14072ab4 + param_1 * 8);
  FUN_140739f0(DAT_14072ab4 + param_1 * 8,param_2,param_3,0x40,param_4);
  if (iVar3 == 0) {
    FUN_14073c58(*(undefined1 *)(DAT_14072ab8 + param_1));
  }
  if (iVar4 == 0) {
    *DAT_14072ab0 = 0xffffffff;
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(iVar4);
  }
  return;
}

