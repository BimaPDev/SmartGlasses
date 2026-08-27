/* FUN_2c604204 @ 0x2c604204 */

uint FUN_2c604204(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  
  uVar3 = 0;
  if (param_1 != 0) {
    uVar3 = 0;
    if (*(int *)(param_1 + 4) != 0) {
      piVar4 = *(int **)(*(int *)(param_1 + 4) + 8);
      if (piVar4 != (int *)0x0) {
        uVar2 = piVar4[1];
        uVar3 = uVar2;
        for (uVar1 = 0; uVar2 != uVar1; uVar1 = uVar1 + 1) {
          uVar5 = uVar1;
          if ((((-1 < (int)uVar1) || (uVar5 = uVar3, -1 < (int)uVar3)) && (uVar5 < uVar2)) &&
             (param_1 == *(int *)(*piVar4 + uVar5 * 4))) {
            return uVar1;
          }
          uVar3 = uVar3 + 1;
        }
      }
      uVar3 = 0xffffffff;
    }
  }
  return uVar3;
}

