/* FUN_10115b08 @ 0x10115b08 */

void FUN_10115b08(int param_1,int param_2,int *param_3,undefined4 param_4)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *extraout_r2;
  int *extraout_r2_00;
  uint uVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  undefined8 uVar10;
  
  uVar4 = DAT_10115c80;
  uVar3 = DAT_10115c50;
  uVar2 = DAT_10115c4c;
  uVar10 = CONCAT44(param_2,param_1);
  iVar8 = param_2 * 0x14 + param_1;
  piVar9 = param_3;
  do {
    if (iVar8 == param_1) {
      return;
    }
    *(undefined4 *)(iVar8 + -0xc) = 0;
    uVar6 = *(byte *)(iVar8 + -7) & 0x3f;
    switch(uVar6) {
    case 0:
      goto switchD_10115b38_caseD_0;
    case 1:
      iVar7 = *(int *)(iVar8 + -4);
      if (iVar7 == 0) {
        FUN_10119dc2(uVar3,DAT_10115c64,uVar2,0xbb,uVar10,param_3,0,param_4);
        FUN_10119dc2(DAT_10115c68);
        uVar5 = 0xbb;
LAB_10115b6c:
        uVar10 = FUN_1011a1f0(uVar2,uVar5,param_3,iVar7);
        param_3 = extraout_r2;
      }
      break;
    case 2:
      iVar7 = *(int *)(iVar8 + -4);
      if (iVar7 == 0) {
        FUN_10119dc2(uVar3,DAT_10115c54,uVar2,0xb3,uVar10,param_3,0,param_4);
        FUN_10119dc2(DAT_10115c58);
        uVar5 = 0xb3;
        goto LAB_10115b6c;
      }
      break;
    default:
      FUN_10119dc2(uVar3,uVar4,uVar2,0xca,uVar10,param_3,uVar6,param_4);
      FUN_10119dc2(DAT_10115c7c);
      uVar10 = FUN_1011a1f0(uVar2,0xca,param_3,uVar6);
      param_3 = extraout_r2_00;
      goto switchD_10115b38_caseD_0;
    case 4:
      iVar7 = *(int *)(iVar8 + -4);
      if (iVar7 == 0) {
        FUN_10119dc2(uVar3,DAT_10115c5c,uVar2,0xb7,uVar10,param_3,0,param_4);
        FUN_10119dc2(DAT_10115c60);
        uVar5 = 0xb7;
        goto LAB_10115b6c;
      }
      break;
    case 8:
      iVar7 = *(int *)(iVar8 + -4);
      if (iVar7 == 0) {
        FUN_10119dc2(uVar3,DAT_10115c6c,uVar2,0xbf,uVar10,param_3,0,param_4);
        FUN_10119dc2(DAT_10115c70);
        uVar5 = 0xbf;
        goto LAB_10115b6c;
      }
      break;
    case 0x10:
      iVar7 = *(int *)(iVar8 + -4);
      if (iVar7 == 0) {
        FUN_10119dc2(uVar3,DAT_10115c74,uVar2,0xc3,uVar10,param_3,0,param_4);
        FUN_10119dc2(DAT_10115c78);
        uVar5 = 0xc3;
        goto LAB_10115b6c;
      }
    }
    iVar7 = *(int *)(iVar8 + -0x14);
    if (iVar7 != 0) {
      param_3 = *(int **)(iVar8 + -0x10);
      *param_3 = iVar7;
      *(int **)(iVar7 + 4) = param_3;
      *(undefined4 *)(iVar8 + -0x14) = 0;
      *(undefined4 *)(iVar8 + -0x10) = 0;
    }
switchD_10115b38_caseD_0:
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(piVar9);
    }
    InstructionSynchronizationBarrier(0xf);
    piVar9 = (int *)0x0;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      piVar9 = (int *)getBasePriority();
    }
    bVar1 = (bool)isCurrentModePrivileged();
    if ((bVar1) && (uVar6 = getBasePriority(), uVar6 == 0 || 0x20 < uVar6)) {
      setBasePriority(0x20);
    }
    InstructionSynchronizationBarrier(0xf);
    iVar8 = iVar8 + -0x14;
  } while( true );
}

