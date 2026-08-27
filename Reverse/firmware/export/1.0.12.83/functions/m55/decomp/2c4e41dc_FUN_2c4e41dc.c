/* FUN_2c4e41dc @ 0x2c4e41dc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_2c4e41dc(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  
  if (*(int *)(param_1 + 0x30) == 0) {
    FUN_2c4de6ca(param_1,0xa4c5,0x5b,1);
    uVar14 = 0x5b;
    uVar5 = 0;
    uVar1 = 0;
    uVar7 = _LAB_2c4e440c;
    uVar13 = _LAB_2c4e4408;
LAB_2c4e4216:
    FUN_2c4e0504(uVar7,uVar5,0,0,_LAB_2c4e4414,uVar14,_LAB_2c4e4410,0x1300,uVar13);
  }
  else {
    uVar14 = *(undefined4 *)(param_1 + 0x50);
    uVar13 = *(undefined4 *)(param_1 + 0x5c);
    uVar1 = FUN_2c4e41a0();
    if (param_3 == uVar1) {
      return uVar1;
    }
    uVar4 = *(uint *)(param_1 + 0x50);
    uVar6 = param_3 - uVar1;
    param_2 = param_2 + uVar1;
    uVar12 = uVar4 + uVar6;
    if (*(uint *)(param_1 + 0x44) <= uVar4 + uVar6) {
      uVar12 = *(uint *)(param_1 + 0x44);
    }
    uVar11 = uVar4 + *(uint *)(param_1 + 0x4c) & ~*(uint *)(param_1 + 0x4c);
    if (uVar12 < uVar11) {
      iVar2 = func_0x2c4e4094(param_1);
      if (iVar2 == 0) {
        uVar14 = 0x70;
        uVar13 = _LAB_2c4e4418;
LAB_2c4e4270:
        uVar5 = 6;
        uVar7 = _LAB_2c4e441c;
        goto LAB_2c4e4216;
      }
      uVar3 = FUN_2c4e41a0(param_1,param_2);
      uVar1 = uVar1 + uVar3;
      if (uVar6 <= uVar3) {
        return uVar1;
      }
      uVar7 = *(undefined4 *)(param_1 + 0x44);
      uVar8 = *(undefined4 *)(param_1 + 0x50);
      uVar9 = *(undefined4 *)(param_1 + 0x5c);
      uVar10 = 0x76;
      uVar5 = _LAB_2c4e4420;
      param_3 = uVar6;
    }
    else {
      uVar6 = *(uint *)(param_1 + 0x48);
      if (uVar4 < uVar11) {
        uVar3 = FUN_2c4e4138(param_1,param_2);
        if (uVar3 == 0) {
          uVar14 = 0x7c;
          uVar13 = _LAB_2c4e4424;
          goto LAB_2c4e4270;
        }
        uVar1 = uVar1 + uVar3;
        param_2 = param_2 + uVar3;
        if (uVar3 < uVar11 - uVar4) {
          uVar7 = *(undefined4 *)(param_1 + 0x44);
          uVar8 = *(undefined4 *)(param_1 + 0x50);
          uVar9 = *(undefined4 *)(param_1 + 0x5c);
          uVar10 = 0x7f;
          uVar5 = _LAB_2c4e4420;
          param_3 = uVar11 - uVar4;
          goto LAB_2c4e42b6;
        }
      }
      uVar4 = uVar12 & ~uVar6;
      if (uVar11 < uVar4) {
        uVar11 = uVar4 - uVar11;
        uVar3 = FUN_2c4e4138(param_1,param_2,uVar11);
        if (uVar3 == 0) {
          uVar14 = 0x84;
          uVar13 = _LAB_2c4e4424;
          goto LAB_2c4e4270;
        }
        uVar1 = uVar1 + uVar3;
        param_2 = param_2 + uVar3;
        if (uVar3 < uVar11) {
          uVar7 = *(undefined4 *)(param_1 + 0x44);
          uVar8 = *(undefined4 *)(param_1 + 0x50);
          uVar9 = *(undefined4 *)(param_1 + 0x5c);
          uVar10 = 0x8a;
          uVar5 = _LAB_2c4e4420;
          param_3 = uVar11;
          goto LAB_2c4e42b6;
        }
      }
      if (uVar4 < uVar12) {
        iVar2 = func_0x2c4e4094(param_1);
        if (iVar2 == 0) {
          uVar14 = 0x8e;
          uVar13 = _LAB_2c4e4418;
          goto LAB_2c4e4270;
        }
        uVar12 = uVar12 - uVar4;
        uVar3 = FUN_2c4e41a0(param_1,param_2,uVar12);
        uVar1 = uVar1 + uVar3;
        if (uVar3 < uVar12) {
          uVar7 = *(undefined4 *)(param_1 + 0x44);
          uVar8 = *(undefined4 *)(param_1 + 0x50);
          uVar9 = *(undefined4 *)(param_1 + 0x5c);
          uVar10 = 0x95;
          uVar5 = _LAB_2c4e4420;
          param_3 = uVar12;
          goto LAB_2c4e42b6;
        }
      }
      if (uVar1 == param_3) {
        return uVar1;
      }
      uVar7 = *(undefined4 *)(param_1 + 0x44);
      uVar8 = *(undefined4 *)(param_1 + 0x50);
      uVar9 = *(undefined4 *)(param_1 + 0x5c);
      uVar10 = 0x9a;
      uVar5 = _LAB_2c4e4428;
      uVar3 = uVar1;
    }
LAB_2c4e42b6:
    FUN_2c4e0504(_LAB_2c4e441c,6,0,0,_LAB_2c4e4414,uVar10,_LAB_2c4e4410,0x1300,uVar5,uVar3,param_3,
                 uVar13,uVar14,uVar9,uVar8,uVar7);
  }
  return uVar1;
}

