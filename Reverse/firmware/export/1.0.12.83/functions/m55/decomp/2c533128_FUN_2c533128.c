/* FUN_2c533128 @ 0x2c533128 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c533128(int *param_1,int *param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int *piVar10;
  
  piVar2 = _LAB_2c5332d8;
  iVar7 = param_1[9];
  piVar3 = (int *)param_1[5];
  iVar6 = iVar7 - (int)piVar3;
  if (_LAB_2c5332d4 * (param_1[4] - param_1[2] >> 2) +
      _LAB_2c5332d4 * (param_1[6] - param_1[7] >> 2) + ((iVar6 >> 2) + -1) * 0x19 == _LAB_2c5332cc)
  {
                    /* WARNING: Subroutine does not return */
    FUN_2c658680(_DAT_2c5332d0);
  }
  uVar5 = param_1[1];
  if (uVar5 - (iVar7 - *param_1 >> 2) < 2) {
    iVar9 = (iVar6 >> 2) + 2;
    if (uVar5 <= (uint)(iVar9 * 2)) {
      iVar6 = uVar5 * 2 + 2;
      if (uVar5 == 0) {
        iVar6 = 3;
      }
      if (*_LAB_2c5332d8 == 0) {
        FUN_2c4723c4();
        *piVar2 = 1;
      }
      iVar7 = FUN_2c47245c(0,iVar6 << 2);
      iVar4 = param_1[5];
      if (iVar4 != param_1[9] + 4) {
        FUN_2c673eb8(iVar7 + ((uint)(iVar6 - iVar9) >> 1) * 4,iVar4,(param_1[9] + 4) - iVar4);
      }
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0,*param_1);
    }
    piVar8 = (int *)(iVar7 + 4);
    piVar10 = (int *)(*param_1 + (uVar5 - iVar9 >> 1) * 4);
    if (piVar10 < piVar3) {
      if (piVar3 != piVar8) {
        FUN_2c673eb8(piVar10,piVar3,(int)piVar8 - (int)piVar3);
      }
    }
    else if (piVar3 != piVar8) {
      FUN_2c673eb8(((iVar6 + 4) - ((int)piVar8 - (int)piVar3)) + (int)piVar10);
      piVar2 = _LAB_2c5332d8;
    }
    param_1[5] = (int)piVar10;
    iVar7 = (int)piVar10 + iVar6;
    iVar9 = *piVar10;
    param_1[9] = iVar7;
    param_1[3] = iVar9;
    param_1[4] = iVar9 + 500;
    iVar6 = *(int *)((int)piVar10 + iVar6);
    param_1[7] = iVar6;
    param_1[8] = iVar6 + 500;
  }
  if (*piVar2 == 0) {
    FUN_2c4723c4();
    *piVar2 = 1;
  }
  uVar1 = FUN_2c47245c(0,500);
  *(undefined4 *)(iVar7 + 4) = uVar1;
  piVar3 = (int *)param_1[6];
  *piVar3 = 0;
  piVar3[1] = 0;
  piVar3[2] = 0;
  piVar3[3] = 0;
  iVar6 = param_2[1];
  param_2[1] = 0;
  piVar2 = (int *)piVar3[1];
  piVar3[1] = iVar6;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))();
  }
  iVar6 = *param_2;
  *param_2 = 0;
  piVar2 = (int *)*piVar3;
  *piVar3 = iVar6;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))();
  }
  iVar6 = param_2[2];
  param_2[2] = 0;
  piVar2 = (int *)piVar3[2];
  piVar3[2] = iVar6;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))();
  }
  iVar6 = param_2[3];
  if (iVar6 != 0) {
    param_2[3] = 0;
    piVar2 = (int *)piVar3[3];
    piVar3[3] = iVar6;
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
  }
  iVar6 = param_1[9];
  param_1[9] = iVar6 + 4;
  iVar6 = *(int *)(iVar6 + 4);
  param_1[6] = iVar6;
  param_1[7] = iVar6;
  param_1[8] = iVar6 + 500;
  return;
}

