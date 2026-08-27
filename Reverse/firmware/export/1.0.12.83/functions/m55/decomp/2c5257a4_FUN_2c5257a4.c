/* FUN_2c5257a4 @ 0x2c5257a4 */

undefined4 * FUN_2c5257a4(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  iVar1 = param_1[1];
  if (iVar1 != 0) {
    func_0x2c525fd4(iVar1);
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0,iVar1);
  }
  iVar1 = param_1[2];
  if (iVar1 != 0) {
    func_0x2c526da4(iVar1);
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0,iVar1);
  }
  iVar1 = param_1[3];
  if (iVar1 != 0) {
    func_0x2c526ffc(iVar1);
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0,iVar1);
  }
  piVar2 = param_1 + 7;
  do {
    piVar3 = piVar2 + 1;
    if (*piVar2 != 0) {
      FUN_2c620f94();
      *piVar2 = 0;
    }
    piVar2 = piVar3;
  } while (param_1 + 10 != piVar3);
  if ((int *)param_1[6] != (int *)0x0) {
    (**(code **)(*(int *)param_1[6] + 4))();
    param_1[6] = 0;
  }
  FUN_2c5eda50(*param_1);
  return param_1;
}

