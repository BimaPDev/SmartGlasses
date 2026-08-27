/* FUN_2c5bcf0c @ 0x2c5bcf0c */

void FUN_2c5bcf0c(int *param_1,uint *param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  uint uVar10;
  int iVar11;
  undefined4 *puVar12;
  
  uVar10 = *param_2;
  iVar11 = *param_1;
  uVar2 = param_1[1];
  iVar6 = uVar10 - uVar2 * (uVar10 / uVar2);
  piVar9 = *(int **)(iVar11 + iVar6 * 4);
  puVar12 = (undefined4 *)(iVar11 + iVar6 * 4);
  if (piVar9 != (int *)0x0) {
    uVar4 = ((int *)*piVar9)[1];
    piVar7 = (int *)*piVar9;
    piVar8 = piVar9;
    do {
      piVar1 = piVar7;
      if (uVar10 == uVar4) {
        piVar7 = (int *)*piVar8;
        if (piVar9 == piVar8) {
          iVar5 = *piVar7;
          piVar9 = piVar8;
          if (iVar5 != 0) {
            iVar3 = *(uint *)(iVar5 + 4) - uVar2 * (*(uint *)(iVar5 + 4) / uVar2);
            if (iVar6 == iVar3) goto LAB_2c5bcf72;
            *(int **)(iVar11 + iVar3 * 4) = piVar8;
            puVar12 = (undefined4 *)(*param_1 + iVar6 * 4);
            piVar9 = *(int **)(*param_1 + iVar6 * 4);
          }
          if (piVar9 == param_1 + 2) {
            param_1[2] = iVar5;
          }
          *puVar12 = 0;
          iVar5 = *piVar7;
        }
        else {
          iVar5 = *piVar7;
          if ((iVar5 != 0) &&
             (iVar3 = *(uint *)(iVar5 + 4) - uVar2 * (*(uint *)(iVar5 + 4) / uVar2), iVar6 != iVar3)
             ) {
            *(int **)(iVar11 + iVar3 * 4) = piVar8;
            iVar5 = *piVar7;
          }
        }
LAB_2c5bcf72:
        *piVar8 = iVar5;
        if ((int *)piVar7[0x15] != piVar7 + 0x17) {
                    /* WARNING: Subroutine does not return */
          FUN_2c472680(0);
        }
        if ((int *)piVar7[0xf] != piVar7 + 0x11) {
                    /* WARNING: Subroutine does not return */
          FUN_2c472680(0);
        }
        if ((int *)piVar7[9] != piVar7 + 0xb) {
                    /* WARNING: Subroutine does not return */
          FUN_2c472680(0);
        }
        if ((int *)piVar7[3] == piVar7 + 5) {
                    /* WARNING: Subroutine does not return */
          FUN_2c472680(0,piVar7,iVar5,piVar7 + 5,param_4);
        }
                    /* WARNING: Subroutine does not return */
        FUN_2c472680(0);
      }
      piVar7 = (int *)*piVar1;
    } while ((piVar7 != (int *)0x0) &&
            (uVar4 = piVar7[1], piVar8 = piVar1, iVar6 == uVar4 - uVar2 * (uVar4 / uVar2)));
  }
  return;
}

