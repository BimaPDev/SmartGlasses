/* FUN_2c5de330 @ 0x2c5de330 */

void FUN_2c5de330(int *param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  
  piVar10 = DAT_2c5de484;
  iVar5 = param_1[9];
  piVar3 = (int *)param_1[5];
  iVar7 = iVar5 - (int)piVar3;
  if (((iVar7 >> 2) + -1) * 0x80 + (param_1[6] - param_1[7] >> 2) + (param_1[4] - param_1[2] >> 2)
      == 0x3fffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_2c658680(DAT_2c5de480);
  }
  uVar1 = param_1[1];
  if (uVar1 - (iVar5 - *param_1 >> 2) < 2) {
    iVar8 = (iVar7 >> 2) + 2;
    if (uVar1 <= (uint)(iVar8 * 2)) {
      iVar5 = uVar1 * 2 + 2;
      if (uVar1 == 0) {
        iVar5 = 3;
      }
      if (*DAT_2c5de484 == 0) {
        FUN_2c4723c4();
        *piVar10 = 1;
      }
      iVar7 = FUN_2c47245c(0,iVar5 << 2);
      iVar4 = param_1[5];
      if (iVar4 != param_1[9] + 4) {
        FUN_2c673eb8(iVar7 + ((uint)(iVar5 - iVar8) >> 1) * 4,iVar4,(param_1[9] + 4) - iVar4);
      }
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0,*param_1);
    }
    piVar6 = (int *)(iVar5 + 4);
    piVar9 = (int *)(*param_1 + (uVar1 - iVar8 >> 1) * 4);
    if (piVar9 < piVar3) {
      if (piVar3 != piVar6) {
        FUN_2c673eb8(piVar9,piVar3,(int)piVar6 - (int)piVar3);
      }
    }
    else if (piVar3 != piVar6) {
      FUN_2c673eb8(((iVar7 + 4) - ((int)piVar6 - (int)piVar3)) + (int)piVar9);
      piVar10 = DAT_2c5de484;
    }
    param_1[5] = (int)piVar9;
    iVar5 = (int)piVar9 + iVar7;
    iVar8 = *piVar9;
    param_1[9] = iVar5;
    param_1[3] = iVar8;
    param_1[4] = iVar8 + 0x200;
    iVar7 = *(int *)((int)piVar9 + iVar7);
    param_1[7] = iVar7;
    param_1[8] = iVar7 + 0x200;
    iVar7 = *piVar10;
  }
  else {
    iVar7 = *DAT_2c5de484;
  }
  if (iVar7 == 0) {
    FUN_2c4723c4();
    *piVar10 = 1;
  }
  uVar2 = FUN_2c47245c(0,0x200);
  *(undefined4 *)(iVar5 + 4) = uVar2;
  *(undefined4 *)param_1[6] = *param_2;
  iVar5 = param_1[9];
  param_1[9] = iVar5 + 4;
  iVar5 = *(int *)(iVar5 + 4);
  param_1[6] = iVar5;
  param_1[7] = iVar5;
  param_1[8] = iVar5 + 0x200;
  return;
}

