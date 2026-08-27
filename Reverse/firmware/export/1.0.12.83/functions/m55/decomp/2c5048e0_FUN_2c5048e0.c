/* FUN_2c5048e0 @ 0x2c5048e0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5048e0(undefined4 param_1,int param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  code *pcVar3;
  int *piVar4;
  int *piVar5;
  
  pcVar1 = _LAB_2c50492c;
  piVar4 = *(int **)(param_2 + 8);
  if (piVar4 != *(int **)(param_2 + 0xc)) {
    do {
      piVar5 = piVar4 + 1;
      if (*piVar4 != 0) {
        FUN_2c5ee748();
        uVar2 = FUN_2c5ef8d0();
        uVar2 = FUN_2c5dc51c(uVar2,1);
        pcVar3 = *(code **)(*(int *)*piVar4 + 0x18);
        if (pcVar3 != pcVar1) {
          (*pcVar3)((int *)*piVar4,uVar2);
        }
                    /* WARNING: Subroutine does not return */
        FUN_2c472680(4,uVar2);
      }
      piVar4 = piVar5;
    } while (*(int **)(param_2 + 0xc) != piVar5);
  }
  return;
}

