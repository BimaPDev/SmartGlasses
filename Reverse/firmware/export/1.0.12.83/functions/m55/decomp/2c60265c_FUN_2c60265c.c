/* FUN_2c60265c @ 0x2c60265c */

void FUN_2c60265c(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar1 = (undefined4 *)param_1[1];
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)puVar1[1];
    if (puVar2 != (undefined4 *)0x0) {
      puVar3 = (undefined4 *)puVar2[1];
      if (puVar3 != (undefined4 *)0x0) {
        if (puVar3[1] != 0) {
          FUN_2c60265c();
        }
        if ((code *)*puVar3 != (code *)0x0) {
          (*(code *)*puVar3)(puVar3,param_2);
        }
      }
      if ((code *)*puVar2 != (code *)0x0) {
        (*(code *)*puVar2)(puVar2,param_2);
      }
    }
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)(puVar1,param_2);
    }
  }
  if ((code *)*param_1 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x2c6026ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*param_1)(param_1,param_2);
    return;
  }
  return;
}

