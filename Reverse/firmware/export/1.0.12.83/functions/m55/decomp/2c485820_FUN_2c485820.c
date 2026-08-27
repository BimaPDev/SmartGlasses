/* FUN_2c485820 @ 0x2c485820 */

undefined4 FUN_2c485820(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  
  if ((param_1 == (int *)0x0) || (param_2 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_2c673ca8(DAT_2c48588c,DAT_2c485888);
  }
  if (param_1[2] == 0) {
    return 0;
  }
  piVar5 = (int *)*param_1;
  if (piVar5[1] != param_2) {
    piVar1 = (int *)*piVar5;
    if ((int *)*piVar5 == (int *)0x0) {
      return 0;
    }
    do {
      piVar4 = piVar1;
      if (piVar4[1] == param_2) {
        iVar2 = FUN_2c485624(param_1,piVar4);
        *piVar5 = iVar2;
        if ((int *)param_1[1] != piVar4) {
          return 1;
        }
        param_1[1] = (int)piVar5;
        return 1;
      }
      piVar1 = (int *)*piVar4;
      piVar5 = piVar4;
    } while ((int *)*piVar4 != (int *)0x0);
    return 0;
  }
  iVar2 = FUN_2c485624(param_1,piVar5);
  iVar3 = *param_1;
  *param_1 = iVar2;
  if (param_1[1] == iVar3) {
    param_1[1] = iVar2;
  }
  return 1;
}

