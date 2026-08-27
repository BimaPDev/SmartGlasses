/* FUN_2c4de6ae @ 0x2c4de6ae */

void FUN_2c4de6ae(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  
  piVar1 = (int *)(**(code **)(*param_1 + 0x14))();
                    /* WARNING: Could not recover jumptable at 0x2c4de6c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar1 + 0x18))(piVar1,param_2,param_3);
  return;
}

