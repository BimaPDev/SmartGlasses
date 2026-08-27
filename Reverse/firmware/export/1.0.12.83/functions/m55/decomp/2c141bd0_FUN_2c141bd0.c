/* FUN_2c141bd0 @ 0x2c141bd0 */

int FUN_2c141bd0(int param_1)

{
  bool bVar1;
  int *piVar2;
  int *piVar3;
  
  if (param_1 == 0) {
    FUN_2c13edac(0,0);
    piVar2 = (int *)0x0;
  }
  else {
    piVar3 = (int *)(param_1 + 0x14);
    do {
      ExclusiveAccess(piVar3);
      piVar2 = (int *)*piVar3;
      if (piVar2 == (int *)0x0) {
        ClearExclusiveLocal();
        goto LAB_2c141bf0;
      }
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = *piVar2;
LAB_2c141bf0:
    if (piVar2 != (int *)0x0) {
      piVar3 = (int *)(param_1 + 4);
      do {
        ExclusiveAccess(piVar3);
        bVar1 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar1);
      *piVar3 = *piVar3 + 1;
    }
    FUN_2c13edac(param_1);
  }
  return (int)piVar2;
}

