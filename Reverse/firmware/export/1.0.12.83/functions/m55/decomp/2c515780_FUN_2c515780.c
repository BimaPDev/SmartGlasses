/* FUN_2c515780 @ 0x2c515780 */

void FUN_2c515780(int param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  
  if (*(char *)(*(int *)(param_1 + 0x10) + 5) == '\x02') {
    FUN_2c511a5c(*(undefined4 *)(param_1 + 0x14));
  }
  uVar2 = FUN_2c5115bc(*(undefined4 *)(param_1 + 0xc));
  uVar3 = FUN_2c511f90();
  iVar4 = FUN_2c512360(uVar3,uVar2);
  if (iVar4 == 0) {
    FUN_2c512548(uVar3,*(undefined4 *)(param_1 + 0x14));
  }
  FUN_2c511cf0(*(undefined4 *)(param_1 + 0x14));
  *(undefined1 *)(*(int *)(param_1 + 0x10) + 6) = 0;
  *(undefined1 *)(*(int *)(param_1 + 0x10) + 5) = 0;
  *(undefined1 *)(*(int *)(param_1 + 0x10) + 3) = 1;
  *(undefined1 *)(*(int *)(param_1 + 0x10) + 4) = 0x23;
  *(undefined1 *)(*(int *)(param_1 + 0x10) + 1) = 0;
  *(undefined1 *)(*(int *)(param_1 + 0x10) + 2) = 2;
  if (param_2 != 0) {
    FUN_2c510a74(*(undefined4 *)(param_1 + 0x1c));
  }
  FUN_2c512d04(*(undefined4 *)(param_1 + 0x10));
  FUN_2c5115ec(*(undefined4 *)(param_1 + 0xc));
  uVar5 = (uint)*(byte *)(*(int *)(param_1 + 0x10) + 6);
  if (uVar5 == 3) {
    if (*(char *)(*(int *)(param_1 + 0x14) + 4) == '\0') {
      piVar6 = (int *)(param_1 + 0x2c4);
      piVar1 = *(int **)(param_1 + 0x308);
      if (piVar6 == piVar1) {
        iVar4 = *(int *)(param_1 + 0x2c4);
        goto LAB_2c51514a;
      }
      goto LAB_2c515106;
    }
  }
  else {
    if (uVar5 < 4) {
      if (uVar5 - 1 < 2) {
        piVar6 = (int *)(param_1 + 700);
        piVar1 = *(int **)(param_1 + 0x308);
        if (piVar6 != piVar1) {
          if (piVar1 != (int *)0x0) {
            (**(code **)(*piVar1 + 4))();
          }
          *(int **)(param_1 + 0x308) = piVar6;
          uVar2 = FUN_2c513448(piVar6);
          goto LAB_2c5150b0;
        }
        iVar4 = *(int *)(param_1 + 700);
        goto LAB_2c51514a;
      }
    }
    else if (uVar5 == 4) {
      switch(*(undefined1 *)(*(int *)(param_1 + 0x10) + 3)) {
      case 1:
        piVar6 = (int *)(param_1 + 0x2d0);
        piVar1 = *(int **)(param_1 + 0x308);
        if (piVar6 != piVar1) {
          if (piVar1 != (int *)0x0) {
            (**(code **)(*piVar1 + 4))();
          }
          *(int **)(param_1 + 0x308) = piVar6;
          uVar2 = FUN_2c513458(piVar6);
LAB_2c5150b0:
                    /* WARNING: Subroutine does not return */
          FUN_2c62c82c(4,DAT_2c515244,0x4d1,DAT_2c515240,DAT_2c51523c,uVar2);
        }
        iVar4 = *(int *)(param_1 + 0x2d0);
        break;
      case 2:
        piVar6 = (int *)(param_1 + 0x2f8);
        piVar1 = *(int **)(param_1 + 0x308);
        if (piVar6 != piVar1) {
          if (piVar1 != (int *)0x0) {
            (**(code **)(*piVar1 + 4))();
          }
          *(int **)(param_1 + 0x308) = piVar6;
          FUN_2c513e40(piVar6);
          iVar4 = **(int **)(param_1 + 0x308);
LAB_2c5150d0:
                    /* WARNING: Could not recover jumptable at 0x2c5150d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(iVar4 + 8))();
          return;
        }
        iVar4 = *(int *)(param_1 + 0x2f8);
        break;
      case 3:
        piVar6 = (int *)(param_1 + 0x2d8);
        piVar1 = *(int **)(param_1 + 0x308);
        if (piVar6 != piVar1) {
          if (piVar1 != (int *)0x0) {
            (**(code **)(*piVar1 + 4))();
          }
          *(int **)(param_1 + 0x308) = piVar6;
          uVar2 = FUN_2c513460(piVar6);
          goto LAB_2c5150b0;
        }
        iVar4 = *(int *)(param_1 + 0x2d8);
        break;
      case 4:
        piVar6 = (int *)(param_1 + 0x2e8);
        piVar1 = *(int **)(param_1 + 0x308);
        if (piVar6 != piVar1) {
          if (piVar1 != (int *)0x0) {
            (**(code **)(*piVar1 + 4))();
          }
          *(int **)(param_1 + 0x308) = piVar6;
          FUN_2c515020(piVar6);
          iVar4 = **(int **)(param_1 + 0x308);
          goto LAB_2c5150d0;
        }
        iVar4 = *(int *)(param_1 + 0x2e8);
        break;
      case 5:
        piVar6 = (int *)(param_1 + 0x2e0);
        piVar1 = *(int **)(param_1 + 0x308);
        if (piVar6 != piVar1) {
          if (piVar1 != (int *)0x0) {
            (**(code **)(*piVar1 + 4))();
          }
          *(int **)(param_1 + 0x308) = piVar6;
          uVar2 = FUN_2c513468(piVar6);
          goto LAB_2c5150b0;
        }
        iVar4 = *(int *)(param_1 + 0x2e0);
        break;
      default:
        return;
      }
      goto LAB_2c51514a;
    }
    if (*(char *)(*(int *)(param_1 + 0x14) + 4) == '\0') {
      piVar6 = (int *)(param_1 + 0x2b0);
      piVar1 = *(int **)(param_1 + 0x308);
      if (piVar6 == piVar1) {
        iVar4 = *(int *)(param_1 + 0x2b0);
LAB_2c51514a:
                    /* WARNING: Could not recover jumptable at 0x2c515152. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(iVar4 + 8))(piVar6);
        return;
      }
LAB_2c515106:
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 4))();
      }
      *(int **)(param_1 + 0x308) = piVar6;
      FUN_2c513e8c(piVar6);
                    /* WARNING: Could not recover jumptable at 0x2c515126. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(int **)(param_1 + 0x308) + 8))();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,DAT_2c511d88,0xb5,DAT_2c511d80,DAT_2c511d84,DAT_2c511d80);
}

