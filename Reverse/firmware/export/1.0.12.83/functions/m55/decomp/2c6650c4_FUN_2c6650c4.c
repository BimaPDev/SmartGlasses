/* FUN_2c6650c4 @ 0x2c6650c4 */

void FUN_2c6650c4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_2c664ee6();
  if (iVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x2c6650e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 8) + 0x18))(*(int **)(param_1 + 8),param_2,param_3,param_4);
    return;
  }
  return;
}

