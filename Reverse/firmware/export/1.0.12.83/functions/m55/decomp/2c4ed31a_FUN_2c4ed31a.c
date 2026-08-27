/* FUN_2c4ed31a @ 0x2c4ed31a */

void FUN_2c4ed31a(undefined4 param_1,undefined4 param_2,undefined4 param_3,char *param_4)

{
  int iVar1;
  
  if (*param_4 != '\0') {
    FUN_2c4910d8();
  }
  iVar1 = func_0x2c4ee01c();
                    /* WARNING: Could not recover jumptable at 0x2c4ed330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 + 8))(param_1);
  return;
}

