/* FUN_10115c84 @ 0x10115c84 */

int FUN_10115c84(int param_1,int param_2,char *param_3,int param_4)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  char *pcVar8;
  char *extraout_r2;
  char *extraout_r2_00;
  char *extraout_r2_01;
  char *extraout_r2_02;
  byte bVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  ulonglong uVar14;
  
  uVar4 = DAT_10115ec8;
  uVar3 = DAT_10115e90;
  uVar2 = DAT_10115e8c;
  uVar14 = CONCAT44(param_2,param_1);
  iVar11 = 0;
  iVar12 = 0;
  pcVar8 = param_3;
  do {
    if (param_2 <= iVar11) {
      return iVar12;
    }
    uVar13 = 0;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      uVar13 = getBasePriority();
    }
    bVar1 = (bool)isCurrentModePrivileged();
    if ((bVar1) && (uVar10 = getBasePriority(), uVar10 == 0 || 0x20 < uVar10)) {
      setBasePriority(0x20);
    }
    InstructionSynchronizationBarrier(0xf);
    bVar9 = *(byte *)(param_1 + 0xd) & 0x3f;
    switch(bVar9) {
    case 0:
      break;
    case 1:
      if (*(int *)(*(int *)(param_1 + 0x10) + 8) == 0) break;
      uVar10 = 1;
LAB_10115ce4:
      *(undefined4 *)(param_1 + 8) = 0;
      uVar5 = (*(uint *)(param_1 + 0xc) & 0x1fffff) >> 0xe;
      uVar14 = (ulonglong)uVar5;
      pcVar8 = (char *)(*(uint *)(param_1 + 0xc) & 0xffe03fff | (uVar10 | uVar5) << 0xe);
      *(char **)(param_1 + 0xc) = pcVar8;
      *param_3 = '\0';
      goto LAB_10115cf8;
    case 2:
      if (*(int *)(*(int *)(param_1 + 0x10) + 8) != 0) {
        uVar10 = 2;
        goto LAB_10115ce4;
      }
      break;
    default:
      FUN_10119dc2(uVar3,uVar4,uVar2,0x62,uVar14);
      FUN_10119dc2(DAT_10115e98,*(byte *)(param_1 + 0xd) & 0x3f);
      uVar14 = FUN_1011a1f0(uVar2,0x62,pcVar8,bVar9);
      pcVar8 = extraout_r2_00;
      break;
    case 4:
      if (**(int **)(param_1 + 0x10) != 0) {
        uVar10 = 4;
        goto LAB_10115ce4;
      }
      break;
    case 8:
      if (*(int *)(*(int *)(param_1 + 0x10) + 0x24) != 0) {
        uVar10 = 0x10;
        goto LAB_10115ce4;
      }
      break;
    case 0x10:
      uVar14 = FUN_1013c812(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(DAT_10115e94 + 8));
      pcVar8 = extraout_r2;
      if (0 < (int)uVar14) {
        uVar10 = 0x20;
        goto LAB_10115ce4;
      }
    }
    if ((param_4 != 0) || (*param_3 == '\0')) goto LAB_10115cf8;
    bVar9 = *(byte *)(param_1 + 0xd) & 0x3f;
    switch(bVar9) {
    case 0:
      goto switchD_10115d28_caseD_0;
    case 1:
      if (*(int *)(param_1 + 0x10) == 0) {
        FUN_10119dc2(uVar3,DAT_10115eac,uVar2,0x94,uVar14);
        FUN_10119dc2(DAT_10115eb0);
        FUN_1011a1f0(uVar2,0x94,pcVar8,0);
      }
      iVar6 = *(int *)(param_1 + 0x10);
      break;
    case 2:
      if (*(int *)(param_1 + 0x10) == 0) {
        FUN_10119dc2(uVar3,DAT_10115e9c,uVar2,0x8c,uVar14);
        FUN_10119dc2(DAT_10115ea0);
        FUN_1011a1f0(uVar2,0x8c,pcVar8,0);
      }
      iVar6 = *(int *)(param_1 + 0x10) + 0x10;
      break;
    default:
      FUN_10119dc2(uVar3,uVar4,uVar2,0xa3,uVar14);
      FUN_10119dc2(DAT_10115ec4);
      uVar14 = FUN_1011a1f0(uVar2,0xa3,pcVar8,bVar9);
      pcVar8 = extraout_r2_02;
      goto switchD_10115d28_caseD_0;
    case 4:
      if (*(int *)(param_1 + 0x10) == 0) {
        FUN_10119dc2(uVar3,DAT_10115ea4,uVar2,0x90,uVar14);
        FUN_10119dc2(DAT_10115ea8);
        uVar7 = 0x90;
LAB_10115de4:
        FUN_1011a1f0(uVar2,uVar7,pcVar8,0);
      }
      goto LAB_10115dea;
    case 8:
      if (*(int *)(param_1 + 0x10) == 0) {
        FUN_10119dc2(uVar3,DAT_10115eb4,uVar2,0x98,uVar14);
        FUN_10119dc2(DAT_10115eb8);
        FUN_1011a1f0(uVar2,0x98,pcVar8,0);
      }
      iVar6 = *(int *)(param_1 + 0x10) + 0x28;
      break;
    case 0x10:
      if (*(int *)(param_1 + 0x10) == 0) {
        FUN_10119dc2(uVar3,DAT_10115ebc,uVar2,0x9c,uVar14);
        FUN_10119dc2(DAT_10115ec0);
        uVar7 = 0x9c;
        goto LAB_10115de4;
      }
LAB_10115dea:
      iVar6 = *(int *)(param_1 + 0x10) + 0x14;
    }
    uVar14 = FUN_1013cefe(iVar6,param_1,param_3);
    pcVar8 = extraout_r2_01;
switchD_10115d28_caseD_0:
    *(char **)(param_1 + 8) = param_3;
    iVar12 = iVar12 + 1;
LAB_10115cf8:
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(uVar13);
    }
    InstructionSynchronizationBarrier(0xf);
    iVar11 = iVar11 + 1;
    param_1 = param_1 + 0x14;
  } while( true );
}

