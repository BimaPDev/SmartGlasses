/* FUN_2c4de104 @ 0x2c4de104 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c4de104(int *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int *piVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  
  iVar16 = *(int *)(*param_1 + -0xc);
  uVar13 = *(uint *)((int)param_1 + iVar16 + 0x68);
  uVar14 = 0;
  if (uVar13 != 0) {
    uVar14 = (uint)(param_1[0x24] << 3) / uVar13;
  }
  FUN_2c4e0504(_LAB_2c4de17c,4,0,0,_LAB_2c4de188,0x53,_LAB_2c4de184,0x1300,_LAB_2c4de180,
               *(undefined4 *)((int)param_1 + iVar16 + 0x2c),
               *(undefined4 *)((int)param_1 + iVar16 + 0x28),param_1[0x23],param_1[0x22],
               param_1[0x24],param_1[0x26],param_1[0x25],uVar14);
  param_1 = (int *)(*(int *)(*param_1 + -0xc) + (int)param_1);
  iVar16 = param_1[0xb];
  uVar14 = param_1[0x12];
  iVar15 = param_1[10];
  if (uVar14 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = (uint)param_1[0x11] / uVar14;
  }
  uVar3 = func_0x2c4db1d0(uVar13);
  uVar4 = func_0x2c4db1d0(param_1[0x14]);
  uVar5 = func_0x2c4db1d0(param_1[0x13]);
  uVar13 = param_1[0x17];
  if (uVar13 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = (uint)param_1[0x16] / uVar13;
  }
  uVar7 = func_0x2c4db1d0(uVar6);
  uVar8 = func_0x2c4db1d0(param_1[0x19]);
  uVar9 = func_0x2c4db1d0(param_1[0x18]);
  piVar10 = (int *)(**(code **)(*param_1 + 0x14))(param_1);
  uVar11 = (**(code **)(*piVar10 + 0x38))();
  piVar10 = (int *)(**(code **)(*param_1 + 0x14))(param_1);
  uVar12 = (**(code **)(*piVar10 + 0x20))();
  uVar2 = _LAB_2c4dd3d0;
  uVar1 = _LAB_2c4dd3cc;
  FUN_2c4e0504(_LAB_2c4dd3c4,4,0,0,_LAB_2c4dd3d0,0x48,_LAB_2c4dd3cc,0x1300,_LAB_2c4dd3c8,iVar16,
               iVar15,uVar14,uVar3,uVar4,uVar5,uVar13,uVar7,uVar8,uVar9,uVar11,uVar12);
  if (param_1[0x1a] != 0) {
    uVar13 = func_0x2c4db1d4();
    uVar13 = uVar13 / (uint)param_1[0x12];
    uVar6 = func_0x2c4db1d8();
    uVar6 = uVar6 / _LAB_2c4dd3d4;
    uVar14 = 0;
    if (param_1[0x12] != 0) {
      uVar14 = (uint)param_1[0x11] / (uint)param_1[0x12];
    }
    uVar17 = 0;
    if (param_1[0x17] != 0) {
      uVar17 = (uint)param_1[0x16] / (uint)param_1[0x17];
    }
    FUN_2c4e0504(_LAB_2c4dd3c4,4,0,0,uVar2,0x51,uVar1,0x1300,_LAB_2c4dd3d8,param_1[0xb],param_1[10],
                 (uVar6 * uVar14) / uVar13,(uVar6 * param_1[0x14]) / uVar13,
                 (uVar6 * param_1[0x13]) / uVar13,(uVar17 * uVar6) / uVar13,
                 (uVar6 * param_1[0x19]) / uVar13,(param_1[0x18] * uVar6) / uVar13,uVar8,uVar9,
                 uVar11,uVar12);
  }
  return 1;
}

