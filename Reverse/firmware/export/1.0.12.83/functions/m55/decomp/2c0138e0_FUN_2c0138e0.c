/* FUN_2c0138e0 @ 0x2c0138e0 */

void FUN_2c0138e0(void)

{
  bool bVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 unaff_lr;
  
  puVar2 = DAT_2c013928;
  iVar4 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    iVar4 = getBasePriority();
  }
  if (iVar4 != 0x40) {
    *DAT_2c013928 = 0x2c0138ee;
    puVar2[1] = unaff_lr;
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(0x40);
  }
  iVar5 = *(int *)(DAT_2c01392c + 0x50);
  do {
  } while (iVar5 == *(int *)(DAT_2c01392c + 0x50));
  InstructionSynchronizationBarrier(0xf);
  iVar6 = *(int *)(DAT_2c013930 + 4);
  if (iVar4 == 0) {
    *DAT_2c013928 = 0xffffffff;
  }
  piVar3 = DAT_2c013938;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(iVar4);
  }
  *DAT_2c013934 = iVar5 + 1;
  *piVar3 = -iVar6;
  return;
}

