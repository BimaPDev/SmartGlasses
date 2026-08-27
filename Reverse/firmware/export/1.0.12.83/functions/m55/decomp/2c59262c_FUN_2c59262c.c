/* FUN_2c59262c @ 0x2c59262c */

void FUN_2c59262c(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(*(int *)(param_1 + 8) + 0x10);
                    /* WARNING: Could not recover jumptable at 0x2c58ed3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar1 + 0x20))(piVar1,1);
  return;
}

