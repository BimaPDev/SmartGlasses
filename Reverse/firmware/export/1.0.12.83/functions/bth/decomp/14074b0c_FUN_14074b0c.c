/* FUN_14074b0c @ 0x14074b0c */

void FUN_14074b0c(int *param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 unaff_lr;
  
  puVar2 = DAT_14074b44;
  iVar3 = *param_1;
  piVar4 = (int *)param_1[1];
  iVar5 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    iVar5 = getBasePriority();
  }
  if (iVar5 != 0x40) {
    *DAT_14074b44 = 0x14074b1e;
    puVar2[1] = unaff_lr;
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(0x40);
  }
  *(int **)(iVar3 + 4) = piVar4;
  *piVar4 = iVar3;
  if (iVar5 == 0) {
    *DAT_14074b44 = 0xffffffff;
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(iVar5);
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}

