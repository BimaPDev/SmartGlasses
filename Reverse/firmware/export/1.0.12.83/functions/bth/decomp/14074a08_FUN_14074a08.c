/* FUN_14074a08 @ 0x14074a08 */

void FUN_14074a08(int *param_1,int *param_2)

{
  bool bVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  undefined4 unaff_lr;
  
  puVar2 = DAT_14074a7c;
  piVar4 = (int *)*param_2;
  if ((param_2 != piVar4) && (piVar4 != (int *)0x0)) {
    if (param_1 == piVar4) {
LAB_14074a66:
                    /* WARNING: Subroutine does not return */
      FUN_1402a64c(0x43,DAT_14074a84,DAT_14074a80,param_1,param_2);
    }
    iVar5 = 0x3e9;
    piVar3 = (int *)*piVar4;
    while ((param_2 != piVar3 && (piVar3 != (int *)0x0))) {
      if (param_1 == piVar3) goto LAB_14074a66;
      iVar5 = iVar5 + -1;
      piVar3 = (int *)*piVar3;
      if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_140749f8();
      }
    }
  }
  iVar5 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    iVar5 = getBasePriority();
  }
  if (iVar5 != 0x40) {
    *DAT_14074a7c = 0x14074a40;
    puVar2[1] = unaff_lr;
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(0x40);
  }
  piVar4[1] = (int)param_1;
  *param_1 = (int)piVar4;
  param_1[1] = (int)param_2;
  *param_2 = (int)param_1;
  if (iVar5 == 0) {
    *DAT_14074a7c = 0xffffffff;
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(iVar5);
  }
  return;
}

