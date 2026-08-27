/* FUN_2c4de67a @ 0x2c4de67a */

void FUN_2c4de67a(int *param_1,undefined4 param_2)

{
  int *piVar1;
  
  piVar1 = (int *)(**(code **)(*param_1 + 0x14))();
                    /* WARNING: Could not recover jumptable at 0x2c4de690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar1 + 0xc))(piVar1,param_2);
  return;
}

