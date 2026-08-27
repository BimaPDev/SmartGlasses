/* FUN_2c6442a4 @ 0x2c6442a4 */

int * FUN_2c6442a4(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  
  if ((param_1 != (undefined4 *)0x0) && (piVar2 = (int *)param_1[2], piVar2 != (int *)0x0)) {
    iVar1 = FUN_2c647778(*param_1,param_1[1],param_1 + 3,param_4,param_4);
    *piVar2 = iVar1;
    iVar1 = FUN_2c6450ac(*param_1,4,param_1 + 9);
    piVar2[1] = iVar1;
    if (*piVar2 != 0) {
      if (iVar1 != 0) {
        return piVar2;
      }
      FUN_2c6478dc(*piVar2);
      iVar1 = piVar2[1];
    }
    if (iVar1 != 0) {
      FUN_2c64529c();
      return (int *)0x0;
    }
  }
  return (int *)0x0;
}

