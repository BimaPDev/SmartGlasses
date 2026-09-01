/* FUN_10006d70 @ 0x10006d70 */

int FUN_10006d70(undefined4 param_1,uint param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  
  uVar7 = param_2 & 0x7fffffff;
  if ((int)uVar7 <= DAT_10006fd0) {
    *(undefined4 *)(param_3 + 1) = 0;
    *(undefined4 *)((int)param_3 + 0xc) = 0;
    *param_3 = CONCAT44(param_2,param_1);
    return 0;
  }
  if ((int)uVar7 <= DAT_10006fd4) {
    if ((int)param_2 < 1) {
      uVar11 = FUN_1000379c(param_1,param_2,DAT_10006fa8,DAT_10006fac);
      uVar10 = (undefined4)((ulonglong)uVar11 >> 0x20);
      uVar1 = (undefined4)uVar11;
      if (uVar7 != DAT_100071c8) {
        uVar11 = FUN_1000379c(uVar1,uVar10,DAT_100071b0,DAT_100071b4);
        *param_3 = uVar11;
        uVar11 = FUN_10003798(uVar1,uVar10);
        uVar11 = FUN_1000379c((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),DAT_100071b0,DAT_100071b4
                             );
        param_3[1] = uVar11;
        return -1;
      }
      uVar11 = FUN_1000379c(uVar1,uVar10,DAT_100071b8,DAT_100071bc);
      uVar1 = (undefined4)((ulonglong)uVar11 >> 0x20);
      uVar12 = FUN_1000379c((int)uVar11,uVar1,DAT_100071c0,DAT_100071c4);
      *param_3 = uVar12;
      uVar11 = FUN_10003798((int)uVar11,uVar1);
      uVar11 = FUN_1000379c((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),DAT_100071c0,DAT_100071c4);
      param_3[1] = uVar11;
      return -1;
    }
    uVar11 = FUN_10003798();
    uVar10 = (undefined4)((ulonglong)uVar11 >> 0x20);
    uVar1 = (undefined4)uVar11;
    if (uVar7 != DAT_10006fd8) {
      uVar11 = FUN_10003798(uVar1,uVar10,DAT_10006fb0,DAT_10006fb4);
      *param_3 = uVar11;
      uVar11 = FUN_10003798(uVar1,uVar10);
      uVar11 = FUN_10003798((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),DAT_10006fb0,DAT_10006fb4);
      param_3[1] = uVar11;
      return 1;
    }
    uVar11 = FUN_10003798(uVar1,uVar10,DAT_10006fb8,DAT_10006fbc);
    uVar1 = (undefined4)((ulonglong)uVar11 >> 0x20);
    uVar12 = FUN_10003798((int)uVar11,uVar1,DAT_10006fc0,DAT_10006fc4);
    *param_3 = uVar12;
    uVar11 = FUN_10003798((int)uVar11,uVar1);
    uVar11 = FUN_10003798((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),DAT_10006fc0,DAT_10006fc4);
    param_3[1] = uVar11;
    return 1;
  }
  if (DAT_10006fdc < (int)uVar7) {
    if (DAT_10006fe0 < (int)uVar7) {
      uVar11 = FUN_10003798(param_1,param_2);
      param_3[1] = uVar11;
      *param_3 = uVar11;
      return 0;
    }
    iVar9 = ((int)uVar7 >> 0x14) + -0x416;
    iVar8 = uVar7 + iVar9 * -0x100000;
    FUN_10004068(param_1,iVar8);
    local_50 = FUN_10003a34();
    uVar11 = FUN_10003798(param_1,iVar8,(int)local_50,(int)((ulonglong)local_50 >> 0x20));
    uVar11 = FUN_10003b08((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),0,DAT_10006fe4);
    FUN_10004068();
    local_48 = FUN_10003a34();
    uVar11 = FUN_10003798((int)uVar11,(int)((ulonglong)uVar11 >> 0x20));
    local_40 = FUN_10003b08((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),0,DAT_10006fe4);
    FUN_10003fd8((int)local_40,(int)((ulonglong)local_40 >> 0x20),0,0);
    iVar8 = FUN_10007460(&local_50,param_3,iVar9);
    if (-1 < (int)param_2) {
      return iVar8;
    }
    *(int *)((int)param_3 + 4) = *(int *)((int)param_3 + 4) + -0x80000000;
    *(int *)((int)param_3 + 0xc) = *(int *)((int)param_3 + 0xc) + -0x80000000;
    return -iVar8;
  }
  uVar11 = FUN_101166f8();
  uVar10 = (undefined4)((ulonglong)uVar11 >> 0x20);
  uVar12 = FUN_10003b08((int)uVar11,uVar10,DAT_10006fc8,DAT_10006fcc);
  FUN_1000379c((int)uVar12,(int)((ulonglong)uVar12 >> 0x20),0,DAT_10006fec);
  iVar8 = FUN_10004068();
  uVar12 = FUN_10003a34();
  uVar3 = (undefined4)((ulonglong)uVar12 >> 0x20);
  uVar1 = (undefined4)uVar12;
  uVar12 = FUN_10003b08(uVar1,uVar3,DAT_10006fa8,DAT_10006fac);
  uVar11 = FUN_10003798((int)uVar11,uVar10,(int)uVar12,(int)((ulonglong)uVar12 >> 0x20));
  uVar4 = (undefined4)((ulonglong)uVar11 >> 0x20);
  uVar10 = (undefined4)uVar11;
  uVar12 = FUN_10003b08(uVar1,uVar3,DAT_10006fb0,DAT_10006fb4);
  if ((0x1f < iVar8) || (*(uint *)(DAT_10006ff0 + (iVar8 + -1) * 4) == uVar7)) {
    uVar13 = FUN_10003798(uVar10,uVar4,(int)uVar12,(int)((ulonglong)uVar12 >> 0x20));
    if ((int)((uVar7 >> 0x14) - (((uint)((ulonglong)uVar13 >> 0x20) & 0x7fffffff) >> 0x14)) < 0x11)
    goto LAB_100070f4;
    uVar12 = FUN_10003b08(uVar1,uVar3,DAT_100071b8,DAT_100071bc);
    uVar5 = (undefined4)((ulonglong)uVar12 >> 0x20);
    uVar11 = FUN_10003798(uVar10,uVar4,(int)uVar12,uVar5);
    uVar6 = (undefined4)((ulonglong)uVar11 >> 0x20);
    uVar2 = (undefined4)uVar11;
    uVar13 = FUN_10003798(uVar10,uVar4,uVar2,uVar6);
    uVar12 = FUN_10003798((int)uVar13,(int)((ulonglong)uVar13 >> 0x20),(int)uVar12,uVar5);
    uVar13 = FUN_10003b08(uVar1,uVar3,DAT_100071c0,DAT_100071c4);
    uVar12 = FUN_10003798((int)uVar13,(int)((ulonglong)uVar13 >> 0x20),(int)uVar12,
                          (int)((ulonglong)uVar12 >> 0x20));
    uVar13 = FUN_10003798(uVar2,uVar6,(int)uVar12,(int)((ulonglong)uVar12 >> 0x20));
    if ((int)(((int)uVar7 >> 0x14) - (((uint)((ulonglong)uVar13 >> 0x20) & 0x7fffffff) >> 0x14)) <
        0x32) goto LAB_100070f4;
    uVar12 = FUN_10003b08(uVar1,uVar3,DAT_100071cc,DAT_100071d0);
    uVar10 = (undefined4)((ulonglong)uVar12 >> 0x20);
    uVar11 = FUN_10003798(uVar2,uVar6,(int)uVar12,uVar10);
    uVar13 = FUN_10003798(uVar2,uVar6,(int)uVar11,(int)((ulonglong)uVar11 >> 0x20));
    uVar12 = FUN_10003798((int)uVar13,(int)((ulonglong)uVar13 >> 0x20),(int)uVar12,uVar10);
    uVar13 = FUN_10003b08(uVar1,uVar3,DAT_100071d4,DAT_100071d8);
    uVar12 = FUN_10003798((int)uVar13,(int)((ulonglong)uVar13 >> 0x20),(int)uVar12,
                          (int)((ulonglong)uVar12 >> 0x20));
  }
  uVar13 = FUN_10003798((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),(int)uVar12,
                        (int)((ulonglong)uVar12 >> 0x20));
LAB_100070f4:
  iVar9 = (int)((ulonglong)uVar13 >> 0x20);
  *param_3 = uVar13;
  uVar11 = FUN_10003798((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),(int)uVar13,iVar9);
  uVar11 = FUN_10003798((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),(int)uVar12,
                        (int)((ulonglong)uVar12 >> 0x20));
  param_3[1] = uVar11;
  if ((int)param_2 < 0) {
    iVar8 = -iVar8;
    *(int *)param_3 = (int)uVar13;
    *(int *)((int)param_3 + 4) = iVar9 + -0x80000000;
    *(int *)(param_3 + 1) = (int)uVar11;
    *(int *)((int)param_3 + 0xc) = (int)((ulonglong)uVar11 >> 0x20) + -0x80000000;
  }
  return iVar8;
}

