/* FUN_2c4e1438 @ 0x2c4e1438 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c4e1438(int *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  undefined4 unaff_r4;
  uint uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 unaff_lr;
  
  iVar14 = *(int *)(*param_1 + -0xc);
  uVar21 = *(undefined4 *)((int)param_1 + iVar14 + 0x28);
  uVar22 = *(undefined4 *)((int)param_1 + iVar14 + 0x2c);
  iVar15 = param_1[0x24];
  iVar16 = param_1[0x2c];
  iVar17 = param_1[0x23];
  iVar18 = param_1[0x2b];
  piVar5 = (int *)(**(code **)(*param_1 + 0x4c))();
  uVar6 = (**(code **)(*piVar5 + 0x38))();
  piVar5 = (int *)(**(code **)(*param_1 + 0x4c))(param_1);
  uVar7 = (**(code **)(*piVar5 + 0x20))();
  iVar19 = param_1[8];
  uVar8 = *(uint *)((int)param_1 + *(int *)(*param_1 + -0xc) + 0x5c);
  iVar14 = param_1[0x44];
  iVar13 = param_1[0x45];
  uVar9 = 0;
  if (uVar8 != 0) {
    uVar9 = *(uint *)((int)param_1 + *(int *)(*param_1 + -0xc) + 0x58) / uVar8;
  }
  uVar10 = func_0x2c4db1d0(uVar9);
  uVar11 = func_0x2c4db1d0(*(undefined4 *)((int)param_1 + *(int *)(*param_1 + -0xc) + 100));
  uVar12 = func_0x2c4db1d0(*(undefined4 *)((int)param_1 + *(int *)(*param_1 + -0xc) + 0x60));
  uVar1 = _LAB_2c4e15d0;
  func_0x2c4e0558(_LAB_2c4e15cc,uVar21,uVar22,param_1 + 0x14,iVar15,iVar16,iVar17,iVar18,uVar6,uVar7
                  ,iVar19,iVar13,iVar14,uVar10,uVar11,uVar12,param_1[0x4a]);
  uVar6 = _LAB_2c4e15d4;
  FUN_2c4e0504(_LAB_2c4e15d8,4,0,0,uVar1,0x88,_LAB_2c4e15d4,0x1300,_LAB_2c4e15dc,
               *(undefined4 *)((int)param_1 + *(int *)(*param_1 + -0xc) + 0x2c),
               *(undefined4 *)((int)param_1 + *(int *)(*param_1 + -0xc) + 0x28),param_1[0x4a]);
  uVar9 = param_1[0x45];
  iVar13 = param_1[0x42];
  uVar21 = *(undefined4 *)((int)param_1 + *(int *)(*param_1 + -0xc) + 0x28);
  uVar7 = *(undefined4 *)((int)param_1 + *(int *)(*param_1 + -0xc) + 0x2c);
  iVar14 = param_1[0x40];
  if (uVar9 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = (uint)param_1[0x44] / uVar9;
  }
  uVar22 = func_0x2c4db1d0(uVar8);
  uVar10 = func_0x2c4db1d0(param_1[0x47]);
  uVar11 = func_0x2c4db1d0(param_1[0x46]);
  FUN_2c4e0504(_LAB_2c4e15d8,4,0,0,uVar1,0x89,uVar6,0x1300,_LAB_2c4e15e0,uVar7,uVar21,iVar13,iVar14,
               uVar9,uVar22,uVar10,uVar11);
  (**(code **)(*(int *)param_1[0x41] + 0x1c))();
  FUN_2c4df518(param_1 + 0x31);
  iVar14 = param_1[0x2c];
  FUN_2c4e0504(_LAB_2c4e06e0,4,0,0,_LAB_2c4e06ec,0x1d,_LAB_2c4e06e8,0x1300,_LAB_2c4e06e4,
               *(undefined4 *)((int)param_1 + *(int *)(*param_1 + -0xc) + 0x2c),
               *(undefined4 *)((int)param_1 + *(int *)(*param_1 + -0xc) + 0x28),param_1[0x2b],
               param_1[0x2a],iVar14,unaff_r4,unaff_lr);
  iVar13 = *(int *)(*param_1 + -0xc);
  uVar8 = *(uint *)((int)param_1 + iVar13 + 0x68);
  uVar9 = 0;
  if (uVar8 != 0) {
    uVar9 = (uint)(param_1[0x24] << 3) / uVar8;
  }
  FUN_2c4e0504(_LAB_2c4de17c,4,0,0,_LAB_2c4de188,0x53,_LAB_2c4de184,0x1300,_LAB_2c4de180,
               *(undefined4 *)((int)param_1 + iVar13 + 0x2c),
               *(undefined4 *)((int)param_1 + iVar13 + 0x28),param_1[0x23],param_1[0x22],
               param_1[0x24],param_1[0x26],param_1[0x25],uVar9,iVar14,unaff_r4,unaff_lr);
  param_1 = (int *)(*(int *)(*param_1 + -0xc) + (int)param_1);
  iVar14 = param_1[0xb];
  uVar9 = param_1[0x12];
  iVar13 = param_1[10];
  if (uVar9 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = (uint)param_1[0x11] / uVar9;
  }
  uVar6 = func_0x2c4db1d0(uVar8);
  uVar7 = func_0x2c4db1d0(param_1[0x14]);
  uVar21 = func_0x2c4db1d0(param_1[0x13]);
  uVar8 = param_1[0x17];
  if (uVar8 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (uint)param_1[0x16] / uVar8;
  }
  uVar10 = func_0x2c4db1d0(uVar2);
  uVar11 = func_0x2c4db1d0(param_1[0x19]);
  uVar12 = func_0x2c4db1d0(param_1[0x18]);
  piVar5 = (int *)(**(code **)(*param_1 + 0x14))(param_1);
  uVar3 = (**(code **)(*piVar5 + 0x38))();
  piVar5 = (int *)(**(code **)(*param_1 + 0x14))(param_1);
  uVar4 = (**(code **)(*piVar5 + 0x20))();
  uVar1 = _LAB_2c4dd3d0;
  uVar22 = _LAB_2c4dd3cc;
  FUN_2c4e0504(_LAB_2c4dd3c4,4,0,0,_LAB_2c4dd3d0,0x48,_LAB_2c4dd3cc,0x1300,_LAB_2c4dd3c8,iVar14,
               iVar13,uVar9,uVar6,uVar7,uVar21,uVar8,uVar10,uVar11,uVar12,uVar3,uVar4);
  if (param_1[0x1a] != 0) {
    uVar8 = func_0x2c4db1d4();
    uVar8 = uVar8 / (uint)param_1[0x12];
    uVar2 = func_0x2c4db1d8();
    uVar2 = uVar2 / _LAB_2c4dd3d4;
    uVar9 = 0;
    if (param_1[0x12] != 0) {
      uVar9 = (uint)param_1[0x11] / (uint)param_1[0x12];
    }
    uVar20 = 0;
    if (param_1[0x17] != 0) {
      uVar20 = (uint)param_1[0x16] / (uint)param_1[0x17];
    }
    FUN_2c4e0504(_LAB_2c4dd3c4,4,0,0,uVar1,0x51,uVar22,0x1300,_LAB_2c4dd3d8,param_1[0xb],param_1[10]
                 ,(uVar2 * uVar9) / uVar8,(uVar2 * param_1[0x14]) / uVar8,
                 (uVar2 * param_1[0x13]) / uVar8,(uVar20 * uVar2) / uVar8,
                 (uVar2 * param_1[0x19]) / uVar8,(param_1[0x18] * uVar2) / uVar8,uVar11,uVar12,uVar3
                 ,uVar4);
  }
  return 1;
}

