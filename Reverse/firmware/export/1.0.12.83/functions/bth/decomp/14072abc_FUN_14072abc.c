/* FUN_14072abc @ 0x14072abc */

void FUN_14072abc(uint param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 unaff_lr;
  
  iVar3 = DAT_14072b34;
  puVar2 = DAT_14072b2c;
  iVar5 = DAT_14072b34 + param_1 * 8;
  if (1 < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x42,DAT_14072b28,0xdf,DAT_14072b24);
  }
  iVar4 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    iVar4 = getBasePriority();
  }
  if (iVar4 != 0x40) {
    param_3 = 0x14072aea;
    *DAT_14072b2c = 0x14072aea;
    puVar2[1] = unaff_lr;
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(0x40);
  }
  FUN_14073a6c(iVar5,param_2,param_3,0x40,param_4);
  *param_2 = 0;
  if (*(int *)(iVar3 + param_1 * 8) == 0) {
    FUN_14073cd4(*(undefined1 *)(DAT_14072b30 + param_1));
  }
  if (iVar4 == 0) {
    *DAT_14072b2c = 0xffffffff;
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(iVar4);
  }
  return;
}

