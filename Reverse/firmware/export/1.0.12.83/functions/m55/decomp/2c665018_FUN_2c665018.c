/* FUN_2c665018 @ 0x2c665018 */

undefined4 FUN_2c665018(int param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_5 == param_3) {
    iVar2 = FUN_2c6650f4(param_1,param_4,param_3,param_4,param_1,param_4,param_3);
    if (iVar2 != 0) {
      return 6;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x2c66503a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(**(int **)(param_1 + 8) + 0x20))
                    (*(int **)(param_1 + 8),param_2,param_3,param_4);
  return uVar1;
}

