/* FUN_1005a300 @ 0x1005a300 */

void FUN_1005a300(int *param_1,undefined4 param_2,uint param_3)

{
  undefined4 uVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 extraout_r2;
  undefined4 extraout_r3;
  undefined4 *puVar7;
  uint uVar8;
  uint uVar9;
  int *piVar10;
  undefined8 uVar11;
  int *local_2c;
  uint uStack_28;
  
  uVar9 = -(param_3 + 0xc) & 3;
  uVar8 = param_3 + 0xc + uVar9;
  if (*(uint *)(*param_1 + 0x10) < uVar8) {
    return;
  }
  param_1[3] = 0;
  if (param_3 == 0) {
    return;
  }
  piVar10 = param_1 + 1;
  local_2c = (int *)param_1[1];
  uStack_28 = param_3;
  uVar1 = DAT_1005a3f8;
  if (piVar10 == local_2c) {
    local_2c = (int *)0x0;
  }
  else if (((local_2c != (int *)0x0) && (*(ushort *)(local_2c + 2) == param_3)) &&
          (iVar5 = FUN_1011ea30(local_2c + 3), uVar1 = DAT_1005a3f8, iVar5 == 0)) {
    return;
  }
  do {
    uVar3 = FUN_1011a0c8(*param_1,&local_2c,uVar8);
    if (uVar3 < uVar8) {
      uVar4 = FUN_1011a0c8(*param_1,&local_2c,uVar8);
      if (uVar8 == uVar4) {
        FUN_1011a124(*param_1,uVar3);
        uVar9 = uVar9 + uVar3 & 0xffff;
        uVar3 = uVar8;
LAB_1005a362:
        piVar2 = local_2c;
        *(short *)(local_2c + 2) = (short)param_3;
        *(short *)((int)local_2c + 10) = (short)uVar9;
        FUN_1011ea40(local_2c + 3,param_2,param_3);
        iVar6 = param_1[1];
        *piVar2 = iVar6;
        piVar2[1] = (int)piVar10;
        iVar5 = *param_1;
        *(int **)(iVar6 + 4) = piVar2;
        param_1[1] = (int)piVar2;
        FUN_1011a124(iVar5,uVar3);
        return;
      }
    }
    else if (uVar8 == uVar3) goto LAB_1005a362;
    FUN_1011a124(*param_1,0);
    if ((piVar10 == (int *)param_1[1]) || (iVar5 = FUN_1011b224(param_1), iVar5 == 0)) {
      uVar11 = FUN_1011a07c(*param_1);
      if ((int)uVar11 == 0) {
        FUN_10119dc2(DAT_1005a3f4,DAT_1005a3f0,uVar1,0xbd,0,(int)((ulonglong)uVar11 >> 0x20));
        FUN_1011a1f0(uVar1,0xbd,extraout_r2,extraout_r3);
      }
      puVar7 = (undefined4 *)*param_1;
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7[2] = 0;
      puVar7[3] = 0;
    }
  } while( true );
}

