/* FUN_2c518cb0 @ 0x2c518cb0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c518cb0(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_2c602414();
  piVar2 = *(int **)(iVar1 + 0x30);
  if (piVar2 != (int *)0x0) {
    if (*(code **)(*piVar2 + 8) != _LAB_2c518ce0) {
                    /* WARNING: Could not recover jumptable at 0x2c518cde. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*piVar2 + 8))(piVar2,param_1);
      return;
    }
    piVar2 = (int *)piVar2[3];
    if (piVar2 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x2c518cd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*piVar2 + 0x40))(piVar2,param_1);
      return;
    }
  }
  return;
}

