/* FUN_2c4dd5ca @ 0x2c4dd5ca */

void FUN_2c4dd5ca(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + 0x34);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_2,param_3,param_4,pcVar1,param_1,param_3,param_3);
  }
  if (*(code **)(param_1 + 0x30) != (code *)0x0) {
    (**(code **)(param_1 + 0x30))(param_2,param_3);
  }
  if (*(code **)(param_1 + 0x2c) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x2c4dd5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x2c))(param_2);
    return;
  }
  return;
}

