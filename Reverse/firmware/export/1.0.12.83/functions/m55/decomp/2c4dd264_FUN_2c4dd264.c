/* FUN_2c4dd264 @ 0x2c4dd264 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c4dd264(int *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int *piVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  
  iVar14 = param_1[0xb];
  uVar16 = param_1[0x12];
  iVar15 = param_1[10];
  if (uVar16 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (uint)param_1[0x11] / uVar16;
  }
  uVar4 = func_0x2c4db1d0(uVar3);
  uVar5 = func_0x2c4db1d0(param_1[0x14]);
  uVar6 = func_0x2c4db1d0(param_1[0x13]);
  uVar3 = param_1[0x17];
  if (uVar3 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = (uint)param_1[0x16] / uVar3;
  }
  uVar8 = func_0x2c4db1d0(uVar7);
  uVar9 = func_0x2c4db1d0(param_1[0x19]);
  uVar10 = func_0x2c4db1d0(param_1[0x18]);
  piVar11 = (int *)(**(code **)(*param_1 + 0x14))(param_1);
  uVar12 = (**(code **)(*piVar11 + 0x38))();
  piVar11 = (int *)(**(code **)(*param_1 + 0x14))(param_1);
  uVar13 = (**(code **)(*piVar11 + 0x20))();
  uVar2 = _LAB_2c4dd3d0;
  uVar1 = _LAB_2c4dd3cc;
  FUN_2c4e0504(_LAB_2c4dd3c4,4,0,0,_LAB_2c4dd3d0,0x48,_LAB_2c4dd3cc,0x1300,_LAB_2c4dd3c8,iVar14,
               iVar15,uVar16,uVar4,uVar5,uVar6,uVar3,uVar8,uVar9,uVar10,uVar12,uVar13);
  if (param_1[0x1a] != 0) {
    uVar3 = func_0x2c4db1d4();
    uVar3 = uVar3 / (uint)param_1[0x12];
    uVar7 = func_0x2c4db1d8();
    uVar7 = uVar7 / _LAB_2c4dd3d4;
    uVar16 = 0;
    if (param_1[0x12] != 0) {
      uVar16 = (uint)param_1[0x11] / (uint)param_1[0x12];
    }
    uVar17 = 0;
    if (param_1[0x17] != 0) {
      uVar17 = (uint)param_1[0x16] / (uint)param_1[0x17];
    }
    FUN_2c4e0504(_LAB_2c4dd3c4,4,0,0,uVar2,0x51,uVar1,0x1300,_LAB_2c4dd3d8,param_1[0xb],param_1[10],
                 (uVar7 * uVar16) / uVar3,(uVar7 * param_1[0x14]) / uVar3,
                 (uVar7 * param_1[0x13]) / uVar3,(uVar17 * uVar7) / uVar3,
                 (uVar7 * param_1[0x19]) / uVar3,(param_1[0x18] * uVar7) / uVar3,uVar9,uVar10,uVar12
                 ,uVar13);
  }
  return 1;
}

