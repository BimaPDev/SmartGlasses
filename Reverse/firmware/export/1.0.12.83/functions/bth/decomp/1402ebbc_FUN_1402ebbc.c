/* FUN_1402ebbc @ 0x1402ebbc */

undefined4 FUN_1402ebbc(int param_1,int param_2)

{
  byte bVar1;
  bool bVar2;
  byte *pbVar3;
  undefined4 *puVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  undefined4 unaff_lr;
  
  uVar7 = DAT_1402ec9c;
  puVar4 = DAT_1402ec98;
  pbVar3 = DAT_1402ec94;
  iVar9 = 0;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    iVar9 = getBasePriority();
  }
  if (iVar9 != 0x40) {
    bVar1 = *DAT_1402ec94;
    *DAT_1402ec98 = 0x1402ebcc;
    puVar4[1] = unaff_lr;
    uVar5 = bVar1 + 1;
    *pbVar3 = (char)uVar5 + (char)(uint)((ulonglong)uVar7 * (ulonglong)uVar5 >> 0x23) * -10;
    *(undefined4 *)(DAT_1402eca0 + (uint)bVar1 * 4) = unaff_lr;
  }
  piVar10 = DAT_1402eca4;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(0x40);
  }
  iVar8 = 0;
  piVar6 = DAT_1402eca4;
  do {
    if (*piVar6 != 0) {
      DAT_1402eca4[param_1] = param_2;
      if ((param_2 != 0) || (param_1 != iVar8)) goto LAB_1402ec2c;
      piVar10 = piVar10 + iVar8;
      goto LAB_1402ec6c;
    }
    iVar8 = iVar8 + 1;
    piVar6 = piVar6 + 1;
  } while (iVar8 != 5);
  DAT_1402eca4[param_1] = param_2;
  if (param_2 != 0) {
    *(undefined4 *)(*(int *)(DAT_1402eca8 + 8) + 0xe8) = DAT_1402ecac;
    iVar8 = DAT_1402ecb0;
    DataSynchronizationBarrier(0xf);
    *(undefined1 *)(DAT_1402ecb0 + 0x32a) = 0xa0;
    *(undefined4 *)(iVar8 + 0x184) = 0x400;
    *(undefined4 *)(iVar8 + 4) = 0x400;
  }
  goto LAB_1402ec2c;
  while (iVar8 = iVar8 + 1, piVar10 = piVar10 + 1, iVar8 != 5) {
LAB_1402ec6c:
    if (*piVar10 != 0) {
      if (iVar8 < 5) goto LAB_1402ec2c;
      break;
    }
  }
  *(undefined4 *)(DAT_1402ecb0 + 0x84) = 0x400;
  DataSynchronizationBarrier(0xf);
  InstructionSynchronizationBarrier(0xf);
LAB_1402ec2c:
  if (iVar9 == 0) {
    *DAT_1402ec98 = 0xffffffff;
  }
  pbVar3 = DAT_1402ecb4;
  bVar1 = *DAT_1402ecb4;
  *(undefined4 *)(DAT_1402ecb8 + (uint)bVar1 * 4) = unaff_lr;
  uVar7 = bVar1 + 1;
  *pbVar3 = (char)uVar7 + (char)(uint)((ulonglong)DAT_1402ec9c * (ulonglong)uVar7 >> 0x23) * -10;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(iVar9);
  }
  return 0;
}

