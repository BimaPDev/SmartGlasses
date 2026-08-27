/* FUN_2c55e8cc @ 0x2c55e8cc */

void FUN_2c55e8cc(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x28) = param_2;
  switch(param_2) {
  case 0:
    (**(code **)(**(int **)(param_1 + 0x3c) + 8))();
    (**(code **)(**(int **)(param_1 + 0x38) + 8))();
    (**(code **)(**(int **)(param_1 + 0x2c) + 8))();
    (**(code **)(**(int **)(param_1 + 0x34) + 8))();
                    /* WARNING: Could not recover jumptable at 0x2c55e938. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 0x30) + 4))();
    return;
  case 1:
    (**(code **)(**(int **)(param_1 + 0x3c) + 8))();
    (**(code **)(**(int **)(param_1 + 0x38) + 8))();
    (**(code **)(**(int **)(param_1 + 0x34) + 8))();
    (**(code **)(**(int **)(param_1 + 0x30) + 8))();
                    /* WARNING: Could not recover jumptable at 0x2c55e964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 0x2c) + 4))();
    return;
  case 2:
    (**(code **)(**(int **)(param_1 + 0x3c) + 8))();
    (**(code **)(**(int **)(param_1 + 0x38) + 8))();
    (**(code **)(**(int **)(param_1 + 0x2c) + 8))();
    (**(code **)(**(int **)(param_1 + 0x30) + 8))();
                    /* WARNING: Could not recover jumptable at 0x2c55e990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 0x34) + 4))();
    return;
  case 3:
    (**(code **)(**(int **)(param_1 + 0x3c) + 8))();
    (**(code **)(**(int **)(param_1 + 0x2c) + 8))();
    (**(code **)(**(int **)(param_1 + 0x34) + 8))();
    (**(code **)(**(int **)(param_1 + 0x30) + 8))();
                    /* WARNING: Could not recover jumptable at 0x2c55e9bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 0x38) + 4))();
    return;
  case 4:
    (**(code **)(**(int **)(param_1 + 0x38) + 8))();
    (**(code **)(**(int **)(param_1 + 0x2c) + 8))();
    (**(code **)(**(int **)(param_1 + 0x34) + 8))();
    (**(code **)(**(int **)(param_1 + 0x30) + 8))();
                    /* WARNING: Could not recover jumptable at 0x2c55e9e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 0x3c) + 4))();
    return;
  case 5:
    (**(code **)(**(int **)(param_1 + 0x3c) + 8))();
    (**(code **)(**(int **)(param_1 + 0x38) + 8))();
    (**(code **)(**(int **)(param_1 + 0x2c) + 8))();
    (**(code **)(**(int **)(param_1 + 0x34) + 8))();
                    /* WARNING: Could not recover jumptable at 0x2c55e90c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 0x30) + 8))();
    return;
  default:
    return;
  }
}

