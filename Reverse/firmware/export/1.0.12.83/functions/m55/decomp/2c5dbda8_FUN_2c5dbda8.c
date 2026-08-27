/* FUN_2c5dbda8 @ 0x2c5dbda8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5dbda8(int param_1,uint param_2)

{
  int iVar1;
  uint extraout_r1;
  uint extraout_r1_00;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  undefined8 uVar6;
  
  if (param_2 == 0) {
    piVar3 = *(int **)(param_1 + 0x14);
    if (piVar3 != *(int **)(param_1 + 0x10)) {
      uVar2 = 0;
      piVar4 = *(int **)(param_1 + 0x10);
      do {
        piVar5 = piVar4 + 1;
        if (*piVar4 != 0) {
          uVar6 = FUN_2c5d8bdc(*piVar4,uVar2);
          uVar2 = (uint)((ulonglong)uVar6 >> 0x20);
          if ((int)uVar6 != 1) {
            iVar1 = FUN_2c5d8bdc(*piVar4);
            uVar2 = (uint)(iVar1 != 0x7fffffff);
            if (*piVar4 != 0) {
              FUN_2c5d8850();
              uVar2 = extraout_r1_00;
            }
          }
        }
        piVar4 = piVar5;
      } while (piVar3 != piVar5);
    }
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c5dbec4,399,_LAB_2c5dbec8,_LAB_2c5dbec0,2);
  }
  if (*(char *)(param_1 + 0x40) == '\0') {
    piVar3 = *(int **)(param_1 + 0x10);
    piVar5 = *(int **)(param_1 + 0x14);
    piVar4 = piVar5;
    if (piVar3 != piVar5) {
      do {
        piVar4 = piVar3 + 1;
        if (*piVar3 != 0) {
          uVar6 = FUN_2c5d8bdc(*piVar3,param_2);
          param_2 = (uint)((ulonglong)uVar6 >> 0x20);
          if ((int)uVar6 != 1) {
            iVar1 = FUN_2c5d8bdc(*piVar3);
            param_2 = (uint)(iVar1 == 0x7fffffff);
            if (*piVar3 != 0) {
              FUN_2c5d8850();
              param_2 = extraout_r1;
            }
          }
        }
        piVar3 = piVar4;
      } while (piVar5 != piVar4);
      piVar5 = *(int **)(param_1 + 0x10);
      piVar4 = *(int **)(param_1 + 0x14);
    }
    FUN_2c5da6a8(param_1,(int)piVar4 - (int)piVar5 >> 2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,_LAB_2c5dbec4,0x119,_LAB_2c5dbed0,_LAB_2c5dbecc);
}

