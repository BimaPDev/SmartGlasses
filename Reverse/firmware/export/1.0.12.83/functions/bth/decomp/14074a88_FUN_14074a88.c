/* FUN_14074a88 @ 0x14074a88 */

void FUN_14074a88(int *param_1,int *param_2)

{
  bool bVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  undefined4 unaff_lr;
  
  puVar2 = DAT_14074b00;
  piVar3 = (int *)*param_2;
  if ((param_2 != piVar3) && (piVar3 != (int *)0x0)) {
    if (param_1 == piVar3) {
LAB_14074ae8:
                    /* WARNING: Subroutine does not return */
      FUN_1402a64c(0x43,DAT_14074b08,DAT_14074b04,param_1,param_2);
    }
    iVar4 = 0x3e9;
    piVar3 = (int *)*piVar3;
    while ((param_2 != piVar3 && (piVar3 != (int *)0x0))) {
      if (param_1 == piVar3) goto LAB_14074ae8;
      iVar4 = iVar4 + -1;
      piVar3 = (int *)*piVar3;
      if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_140749f8();
      }
    }
  }
  piVar3 = (int *)param_2[1];
  iVar4 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    iVar4 = getBasePriority();
  }
  if (iVar4 != 0x40) {
    *DAT_14074b00 = 0x14074ac2;
    puVar2[1] = unaff_lr;
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(0x40);
  }
  param_2[1] = (int)param_1;
  *param_1 = (int)param_2;
  param_1[1] = (int)piVar3;
  *piVar3 = (int)param_1;
  if (iVar4 == 0) {
    *DAT_14074b00 = 0xffffffff;
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(iVar4);
  }
  return;
}

