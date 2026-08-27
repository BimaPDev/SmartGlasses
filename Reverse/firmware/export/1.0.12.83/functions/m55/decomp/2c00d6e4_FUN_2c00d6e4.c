/* FUN_2c00d6e4 @ 0x2c00d6e4 */

undefined4 FUN_2c00d6e4(int param_1,int param_2)

{
  bool bVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined4 unaff_lr;
  
  puVar2 = DAT_2c00d77c;
  iVar6 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    iVar6 = getBasePriority();
  }
  if (iVar6 != 0x40) {
    *DAT_2c00d77c = 0x2c00d6f2;
    puVar2[1] = unaff_lr;
  }
  piVar5 = DAT_2c00d780;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(0x40);
  }
  iVar4 = 0;
  piVar3 = DAT_2c00d780;
  do {
    if (*piVar3 != 0) {
      DAT_2c00d780[param_1] = param_2;
      if ((param_2 != 0) || (param_1 != iVar4)) goto LAB_2c00d734;
      piVar5 = piVar5 + iVar4;
      goto LAB_2c00d756;
    }
    iVar4 = iVar4 + 1;
    piVar3 = piVar3 + 1;
  } while (iVar4 != 5);
  DAT_2c00d780[param_1] = param_2;
  if (param_2 != 0) {
    *(undefined4 *)(*(int *)(DAT_2c00d784 + 8) + 0x80) = DAT_2c00d788;
    puVar2 = DAT_2c00d78c;
    DataSynchronizationBarrier(0xf);
    *(undefined1 *)(DAT_2c00d78c + 0xc4) = 0xa0;
    puVar2[0x60] = 0x10000;
    *puVar2 = 0x10000;
  }
  goto LAB_2c00d734;
  while (iVar4 = iVar4 + 1, piVar5 = piVar5 + 1, iVar4 != 5) {
LAB_2c00d756:
    if (*piVar5 != 0) {
      if (iVar4 < 5) goto LAB_2c00d734;
      break;
    }
  }
  DAT_2c00d78c[0x20] = 0x10000;
  DataSynchronizationBarrier(0xf);
  InstructionSynchronizationBarrier(0xf);
LAB_2c00d734:
  if (iVar6 == 0) {
    *DAT_2c00d77c = 0xffffffff;
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(iVar6);
  }
  return 0;
}

