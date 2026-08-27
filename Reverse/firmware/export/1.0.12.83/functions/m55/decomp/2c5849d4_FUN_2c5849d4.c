/* FUN_2c5849d4 @ 0x2c5849d4 */

void FUN_2c5849d4(undefined4 param_1,int *param_2,int *param_3,int param_4,int param_5)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  uint uVar10;
  int iVar11;
  
  iVar6 = param_5 * (param_4 + -1);
  if ((-1 < iVar6) && (iVar8 = param_2[1] - *param_2 >> 2, iVar6 < iVar8)) {
    if (param_5 + iVar6 <= iVar8) {
      iVar8 = param_5 + iVar6;
    }
    piVar7 = (int *)*param_3;
    piVar9 = (int *)param_3[1];
    if (piVar9 != piVar7) {
      do {
        piVar3 = piVar7 + 1;
        if ((int *)*piVar7 != (int *)0x0) {
          (**(code **)(*(int *)*piVar7 + 8))();
        }
        piVar7 = piVar3;
      } while (piVar9 != piVar3);
      piVar7 = (int *)*param_3;
      if ((int *)param_3[1] != piVar7) {
        param_3[1] = (int)piVar7;
      }
    }
    piVar9 = DAT_2c584af0;
    uVar10 = iVar8 - iVar6;
    if (0x1fffffff < uVar10) {
                    /* WARNING: Subroutine does not return */
      FUN_2c658680(DAT_2c584aec);
    }
    if ((uint)(param_3[2] - (int)piVar7 >> 2) < uVar10) {
      piVar3 = (int *)param_3[1];
      iVar2 = (int)piVar3 - (int)piVar7;
      if (uVar10 == 0) {
        iVar11 = 0;
        piVar9 = (int *)0x0;
      }
      else {
        if (*DAT_2c584af0 == 0) {
          FUN_2c4723c4();
          *piVar9 = 1;
        }
        iVar11 = uVar10 * 4;
        piVar9 = (int *)FUN_2c47245c(0,iVar11);
      }
      if (piVar3 != piVar7) {
        piVar7 = piVar7 + -1;
        piVar3 = piVar9;
        do {
          piVar7 = piVar7 + 1;
          piVar4 = piVar3 + 1;
          *piVar3 = *piVar7;
          piVar3 = piVar4;
        } while ((int *)((int)piVar9 + iVar2) != piVar4);
      }
      if (*param_3 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_2c472680(0);
      }
      *param_3 = (int)piVar9;
      param_3[1] = (int)piVar9 + iVar2;
      param_3[2] = (int)piVar9 + iVar11;
    }
    if (iVar6 < iVar8) {
      iVar6 = iVar6 * 4;
      do {
        while( true ) {
          puVar5 = (undefined4 *)param_3[1];
          iVar2 = *param_2 + iVar6;
          if (puVar5 != (undefined4 *)param_3[2]) break;
          iVar6 = iVar6 + 4;
          FUN_2c584908(param_3,puVar5,iVar2);
          if (iVar6 == iVar8 * 4) {
            return;
          }
        }
        puVar1 = (undefined4 *)(*param_2 + iVar6);
        iVar6 = iVar6 + 4;
        *puVar5 = *puVar1;
        param_3[1] = param_3[1] + 4;
      } while (iVar6 != iVar8 * 4);
    }
  }
  return;
}

