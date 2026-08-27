/* FUN_2c4e0012 @ 0x2c4e0012 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c4e0012(int param_1)

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
  int iVar13;
  int *piVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  
  iVar13 = FUN_2c4de104();
  if (iVar13 != 0) {
    piVar14 = (int *)(param_1 + 0xa8);
    iVar13 = *(int *)(*piVar14 + -0xc);
    uVar15 = *(uint *)((int)piVar14 + iVar13 + 0x68);
    uVar16 = 0;
    if (uVar15 != 0) {
      uVar16 = (uint)(*(int *)(param_1 + 0x138) << 3) / uVar15;
    }
    FUN_2c4e0504(_LAB_2c4df308,4,0,0,_LAB_2c4df314,0x5f,_LAB_2c4df310,0x1300,_LAB_2c4df30c,
                 *(undefined4 *)((int)piVar14 + iVar13 + 0x2c),
                 *(undefined4 *)((int)piVar14 + iVar13 + 0x28),*(undefined4 *)(param_1 + 0x134),
                 *(undefined4 *)(param_1 + 0x130),*(int *)(param_1 + 0x138),
                 *(undefined4 *)(param_1 + 0x140),*(undefined4 *)(param_1 + 0x13c),uVar16);
    piVar14 = (int *)(*(int *)(*piVar14 + -0xc) + (int)piVar14);
    iVar13 = piVar14[0xb];
    uVar16 = piVar14[0x12];
    iVar17 = piVar14[10];
    if (uVar16 == 0) {
      uVar15 = 0;
    }
    else {
      uVar15 = (uint)piVar14[0x11] / uVar16;
    }
    uVar3 = func_0x2c4db1d0(uVar15);
    uVar4 = func_0x2c4db1d0(piVar14[0x14]);
    uVar5 = func_0x2c4db1d0(piVar14[0x13]);
    uVar15 = piVar14[0x17];
    if (uVar15 == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = (uint)piVar14[0x16] / uVar15;
    }
    uVar7 = func_0x2c4db1d0(uVar6);
    uVar8 = func_0x2c4db1d0(piVar14[0x19]);
    uVar9 = func_0x2c4db1d0(piVar14[0x18]);
    piVar10 = (int *)(**(code **)(*piVar14 + 0x14))(piVar14);
    uVar11 = (**(code **)(*piVar10 + 0x38))();
    piVar10 = (int *)(**(code **)(*piVar14 + 0x14))(piVar14);
    uVar12 = (**(code **)(*piVar10 + 0x20))();
    uVar2 = _LAB_2c4dd3d0;
    uVar1 = _LAB_2c4dd3cc;
    FUN_2c4e0504(_LAB_2c4dd3c4,4,0,0,_LAB_2c4dd3d0,0x48,_LAB_2c4dd3cc,0x1300,_LAB_2c4dd3c8,iVar13,
                 iVar17,uVar16,uVar3,uVar4,uVar5,uVar15,uVar7,uVar8,uVar9,uVar11,uVar12);
    if (piVar14[0x1a] != 0) {
      uVar15 = func_0x2c4db1d4();
      uVar15 = uVar15 / (uint)piVar14[0x12];
      uVar6 = func_0x2c4db1d8();
      uVar6 = uVar6 / _LAB_2c4dd3d4;
      uVar16 = 0;
      if (piVar14[0x12] != 0) {
        uVar16 = (uint)piVar14[0x11] / (uint)piVar14[0x12];
      }
      uVar18 = 0;
      if (piVar14[0x17] != 0) {
        uVar18 = (uint)piVar14[0x16] / (uint)piVar14[0x17];
      }
      FUN_2c4e0504(_LAB_2c4dd3c4,4,0,0,uVar2,0x51,uVar1,0x1300,_LAB_2c4dd3d8,piVar14[0xb],
                   piVar14[10],(uVar6 * uVar16) / uVar15,(uVar6 * piVar14[0x14]) / uVar15,
                   (uVar6 * piVar14[0x13]) / uVar15,(uVar18 * uVar6) / uVar15,
                   (uVar6 * piVar14[0x19]) / uVar15,(piVar14[0x18] * uVar6) / uVar15,uVar8,uVar9,
                   uVar11,uVar12);
    }
    return 1;
  }
  return 0;
}

