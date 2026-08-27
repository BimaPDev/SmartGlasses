/* FUN_2c535aac @ 0x2c535aac */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c535aac(int *param_1,int *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  
  piVar1 = _LAB_2c535cc4;
  piVar7 = (int *)param_1[6];
  if (piVar7 != (int *)(param_1[8] + -0x1c)) {
    piVar7[3] = _DAT_2c535cb4;
    piVar7[2] = 0;
    *(undefined2 *)(piVar7 + 4) = 0x1f12;
    *piVar7 = 0;
    piVar7[1] = 0;
    piVar7[5] = 0;
    piVar7[6] = 0;
    iVar5 = *param_2;
    *param_2 = 0;
    piVar1 = (int *)*piVar7;
    *piVar7 = iVar5;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    iVar5 = param_2[1];
    param_2[1] = 0;
    piVar1 = (int *)piVar7[1];
    piVar7[1] = iVar5;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    iVar5 = param_2[2];
    param_2[2] = 0;
    piVar1 = (int *)piVar7[2];
    piVar7[2] = iVar5;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    func_0x2c5307cc(piVar7 + 3,param_2 + 3);
    param_1[6] = param_1[6] + 0x1c;
    return;
  }
  iVar5 = param_1[9];
  piVar3 = (int *)param_1[5];
  iVar10 = iVar5 - (int)piVar3;
  if (_LAB_2c535cbc * (param_1[4] - param_1[2] >> 2) +
      _LAB_2c535cbc * ((int)piVar7 - param_1[7] >> 2) + ((iVar10 >> 2) + -1) * 0x12 != _LAB_2c535cc0
     ) {
    uVar6 = param_1[1];
    if (uVar6 - (iVar5 - *param_1 >> 2) < 2) {
      iVar8 = (iVar10 >> 2) + 2;
      if (uVar6 <= (uint)(iVar8 * 2)) {
        iVar5 = uVar6 * 2 + 2;
        if (uVar6 == 0) {
          iVar5 = 3;
        }
        if (*_LAB_2c535cc4 == 0) {
          FUN_2c4723c4();
          *piVar1 = 1;
        }
        iVar10 = FUN_2c47245c(0,iVar5 << 2);
        iVar4 = param_1[5];
        if (iVar4 != param_1[9] + 4) {
          FUN_2c673eb8(iVar10 + ((uint)(iVar5 - iVar8) >> 1) * 4,iVar4,(param_1[9] + 4) - iVar4);
        }
                    /* WARNING: Subroutine does not return */
        FUN_2c472680(0,*param_1);
      }
      piVar9 = (int *)(iVar5 + 4);
      piVar7 = (int *)(*param_1 + (uVar6 - iVar8 >> 1) * 4);
      if (piVar7 < piVar3) {
        if (piVar3 != piVar9) {
          FUN_2c673eb8(piVar7,piVar3,(int)piVar9 - (int)piVar3);
        }
      }
      else if (piVar3 != piVar9) {
        FUN_2c673eb8(((iVar10 + 4) - ((int)piVar9 - (int)piVar3)) + (int)piVar7);
        piVar1 = _LAB_2c535cc4;
      }
      param_1[5] = (int)piVar7;
      iVar5 = (int)piVar7 + iVar10;
      iVar8 = *piVar7;
      param_1[9] = iVar5;
      param_1[3] = iVar8;
      param_1[4] = iVar8 + 0x1f8;
      iVar10 = *(int *)((int)piVar7 + iVar10);
      param_1[7] = iVar10;
      param_1[8] = iVar10 + 0x1f8;
    }
    if (*piVar1 == 0) {
      FUN_2c4723c4();
      *piVar1 = 1;
    }
    uVar2 = FUN_2c47245c(0,0x1f8);
    iVar10 = _DAT_2c535cb4;
    *(undefined4 *)(iVar5 + 4) = uVar2;
    piVar7 = (int *)param_1[6];
    piVar7[3] = iVar10;
    piVar7[2] = 0;
    *(undefined2 *)(piVar7 + 4) = 0x1f12;
    *piVar7 = 0;
    piVar7[1] = 0;
    piVar7[5] = 0;
    piVar7[6] = 0;
    iVar5 = *param_2;
    *param_2 = 0;
    piVar1 = (int *)*piVar7;
    *piVar7 = iVar5;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    iVar5 = param_2[1];
    param_2[1] = 0;
    piVar1 = (int *)piVar7[1];
    piVar7[1] = iVar5;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    iVar5 = param_2[2];
    param_2[2] = 0;
    piVar1 = (int *)piVar7[2];
    piVar7[2] = iVar5;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    func_0x2c5307cc(piVar7 + 3,param_2 + 3);
    iVar5 = param_1[9];
    param_1[9] = iVar5 + 4;
    iVar5 = *(int *)(iVar5 + 4);
    param_1[6] = iVar5;
    param_1[7] = iVar5;
    param_1[8] = iVar5 + 0x1f8;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c658680(_DAT_2c535cb8);
}

