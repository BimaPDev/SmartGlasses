/* FUN_2c5dca80 @ 0x2c5dca80 */

int * FUN_2c5dca80(undefined4 param_1,undefined4 param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  undefined8 uVar4;
  
  uVar4 = FUN_2c5dc828();
  piVar3 = (int *)((ulonglong)uVar4 >> 0x20);
  piVar2 = (int *)uVar4;
  piVar1 = piVar2;
  if (piVar3 != piVar2) {
    while (piVar2 = piVar2 + 1, piVar3 != piVar2) {
      if (*piVar2 != *param_3) {
        *piVar1 = *piVar2;
        piVar1 = piVar1 + 1;
      }
    }
    return piVar1;
  }
  return piVar3;
}

