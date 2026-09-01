/* FUN_100cb748 @ 0x100cb748 */

int FUN_100cb748(undefined4 *param_1,int *param_2,int param_3)

{
  ushort uVar1;
  undefined2 uVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  ushort uVar8;
  undefined4 uVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  undefined8 uVar13;
  
  piVar10 = param_1 + 0x19;
  do {
    iVar4 = FUN_10133e76(piVar10);
    if (iVar4 == 0) {
      FUN_100a5b78(DAT_100cb91c | (DAT_100cb908 - DAT_100cb904) * 0x20 & 0xff00U,DAT_100cb914,
                   DAT_100cb920);
      return -0xb;
    }
  } while (*piVar10 != iVar4);
  *piVar10 = iVar4 + -1;
  piVar12 = param_2 + 2;
  uVar5 = FUN_10132788(piVar12);
  uVar1 = *(ushort *)(param_2 + 3);
  if ((((uint)*(ushort *)(param_1 + 0x18) < (uint)uVar1 + param_3) ||
      (uVar6 = FUN_10132788(piVar12), uVar6 < (param_3 + 8U & 0xffff))) || (*param_2 != 0)) {
    uVar13 = FUN_100c195c(*(undefined1 *)((int)param_2 + 6));
    piVar7 = (int *)FUN_1013270a((int)uVar13,(int)((ulonglong)uVar13 >> 0x20),0,0);
    if (piVar7 == (int *)0x0) {
      piVar7 = (int *)FUN_100ca5a4(0,4,0,0);
      if (piVar7 == (int *)0x0) goto LAB_100cb7c4;
    }
    else {
      FUN_100c1bc4(piVar7 + 2);
    }
    piVar11 = piVar7 + 2;
    if (param_3 != 0) {
      uVar2 = FUN_10133de0(param_2);
      FUN_101327c8(piVar11,uVar2);
    }
    uVar6 = FUN_10132790(piVar11);
    if (uVar6 < (uint)*(ushort *)(param_1 + 0x18) - param_3) {
      uVar3 = FUN_10132790(piVar11);
    }
    else {
      uVar3 = (ushort)((uint)*(ushort *)(param_1 + 0x18) - param_3);
    }
    uVar8 = *(ushort *)(param_2 + 3);
    if (uVar3 <= *(ushort *)(param_2 + 3)) {
      uVar8 = uVar3;
    }
    FUN_101327a0(piVar11,param_2[2]);
    FUN_100c1f58(piVar12,uVar8);
  }
  else {
    if (param_3 != 0) {
      uVar2 = FUN_10133de0(param_2);
      FUN_1013271e(piVar12,uVar2);
    }
    piVar7 = (int *)FUN_100c1d1c(param_2);
    if (piVar7 == (int *)0x0) {
LAB_100cb7c4:
      FUN_10133e7c(piVar10,1);
      return -0xb;
    }
  }
  param_3 = (uint)*(ushort *)(piVar7 + 3) - param_3;
  uVar9 = DAT_100cb918;
  if (((param_2 == piVar7) || ((short)param_2[3] == 0)) && (*(int *)(param_1[1] + 0x14) != 0)) {
    uVar9 = DAT_100cb900;
  }
  iVar4 = FUN_10134022(*param_1,*(undefined2 *)(param_1 + 0x17),piVar7,uVar9,param_1);
  if (iVar4 != 0) {
    FUN_100a5b78(DAT_100cb910 | (DAT_100cb908 - DAT_100cb904) * 0x20 & 0xff00U,DAT_100cb914,
                 DAT_100cb90c,iVar4);
    FUN_10133e7c(piVar10,1);
    if (iVar4 == -0x69) {
      *(ushort *)(param_2 + 3) = uVar1;
      param_2[2] = param_2[4] + (uVar5 & 0xffff);
      return -0xb;
    }
    return iVar4;
  }
  iVar4 = FUN_10133e76(piVar10);
  if (iVar4 != 0) {
    return param_3;
  }
  param_1[0x10] = param_1[0x10] & 0xfffffffe;
  if (*(code **)(param_1[1] + 0x18) != (code *)0x0) {
    (**(code **)(param_1[1] + 0x18))(param_1);
    return param_3;
  }
  return param_3;
}

