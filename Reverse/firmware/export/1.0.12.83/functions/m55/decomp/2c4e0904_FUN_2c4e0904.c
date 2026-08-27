/* FUN_2c4e0904 @ 0x2c4e0904 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c4e0904(int *param_1)

{
  longlong lVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int *piVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  undefined4 uVar19;
  
  iVar15 = *(int *)(*param_1 + -0xc);
  uVar9 = (**(code **)(*param_1 + 0x3c))();
  *(undefined4 *)((int)param_1 + iVar15 + 0x68) = uVar9;
  iVar15 = param_1[0x4e];
  iVar18 = *(int *)(*param_1 + -0xc);
  uVar16 = param_1[0x24];
  uVar9 = *(undefined4 *)((int)param_1 + iVar18 + 0x28);
  uVar19 = *(undefined4 *)((int)param_1 + iVar18 + 0x2c);
  if (iVar15 == 0) {
    uVar10 = 0;
  }
  else {
    lVar1 = (ulonglong)uVar16 * 100;
    uVar10 = FUN_2c672a48((int)lVar1,(int)((ulonglong)lVar1 >> 0x20),iVar15,0);
  }
  piVar11 = (int *)(**(code **)(*(int *)((int)param_1 + iVar18) + 0x14))((int)param_1 + iVar18);
  uVar12 = (**(code **)(*piVar11 + 0x38))();
  piVar11 = (int *)(**(code **)(*(int *)((int)param_1 + *(int *)(*param_1 + -0xc)) + 0x14))
                             (*(int *)(*param_1 + -0xc) + (int)param_1);
  uVar13 = (**(code **)(*piVar11 + 0x20))();
  func_0x2c4e0558(_LAB_2c4e099c,uVar9,uVar19,uVar10,iVar15,uVar16,uVar12,uVar13,param_1[0x32],
                  param_1[8]);
  iVar15 = FUN_2c4de104();
  if (iVar15 != 0) {
    piVar11 = param_1 + 0x2a;
    iVar15 = *(int *)(*piVar11 + -0xc);
    uVar14 = *(uint *)((int)piVar11 + iVar15 + 0x68);
    uVar16 = 0;
    if (uVar14 != 0) {
      uVar16 = (uint)(param_1[0x4e] << 3) / uVar14;
    }
    FUN_2c4e0504(_LAB_2c4df308,4,0,0,_LAB_2c4df314,0x5f,_LAB_2c4df310,0x1300,_LAB_2c4df30c,
                 *(undefined4 *)((int)piVar11 + iVar15 + 0x2c),
                 *(undefined4 *)((int)piVar11 + iVar15 + 0x28),param_1[0x4d],param_1[0x4c],
                 param_1[0x4e],param_1[0x50],param_1[0x4f],uVar16);
    piVar11 = (int *)(*(int *)(*piVar11 + -0xc) + (int)piVar11);
    iVar15 = piVar11[0xb];
    uVar16 = piVar11[0x12];
    iVar18 = piVar11[10];
    if (uVar16 == 0) {
      uVar14 = 0;
    }
    else {
      uVar14 = (uint)piVar11[0x11] / uVar16;
    }
    uVar9 = func_0x2c4db1d0(uVar14);
    uVar19 = func_0x2c4db1d0(piVar11[0x14]);
    uVar10 = func_0x2c4db1d0(piVar11[0x13]);
    uVar14 = piVar11[0x17];
    if (uVar14 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = (uint)piVar11[0x16] / uVar14;
    }
    uVar3 = func_0x2c4db1d0(uVar2);
    uVar4 = func_0x2c4db1d0(piVar11[0x19]);
    uVar5 = func_0x2c4db1d0(piVar11[0x18]);
    piVar6 = (int *)(**(code **)(*piVar11 + 0x14))(piVar11);
    uVar7 = (**(code **)(*piVar6 + 0x38))();
    piVar6 = (int *)(**(code **)(*piVar11 + 0x14))(piVar11);
    uVar8 = (**(code **)(*piVar6 + 0x20))();
    uVar13 = _LAB_2c4dd3d0;
    uVar12 = _LAB_2c4dd3cc;
    FUN_2c4e0504(_LAB_2c4dd3c4,4,0,0,_LAB_2c4dd3d0,0x48,_LAB_2c4dd3cc,0x1300,_LAB_2c4dd3c8,iVar15,
                 iVar18,uVar16,uVar9,uVar19,uVar10,uVar14,uVar3,uVar4,uVar5,uVar7,uVar8);
    if (piVar11[0x1a] != 0) {
      uVar14 = func_0x2c4db1d4();
      uVar14 = uVar14 / (uint)piVar11[0x12];
      uVar2 = func_0x2c4db1d8();
      uVar2 = uVar2 / _LAB_2c4dd3d4;
      uVar16 = 0;
      if (piVar11[0x12] != 0) {
        uVar16 = (uint)piVar11[0x11] / (uint)piVar11[0x12];
      }
      uVar17 = 0;
      if (piVar11[0x17] != 0) {
        uVar17 = (uint)piVar11[0x16] / (uint)piVar11[0x17];
      }
      FUN_2c4e0504(_LAB_2c4dd3c4,4,0,0,uVar13,0x51,uVar12,0x1300,_LAB_2c4dd3d8,piVar11[0xb],
                   piVar11[10],(uVar2 * uVar16) / uVar14,(uVar2 * piVar11[0x14]) / uVar14,
                   (uVar2 * piVar11[0x13]) / uVar14,(uVar17 * uVar2) / uVar14,
                   (uVar2 * piVar11[0x19]) / uVar14,(piVar11[0x18] * uVar2) / uVar14,uVar4,uVar5,
                   uVar7,uVar8);
    }
    return 1;
  }
  return 0;
}

