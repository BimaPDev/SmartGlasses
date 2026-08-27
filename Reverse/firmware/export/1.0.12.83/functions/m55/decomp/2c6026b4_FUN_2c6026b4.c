/* FUN_2c6026b4 @ 0x2c6026b4 */

void FUN_2c6026b4(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if (param_1 == 0) {
    FUN_2c62a470();
  }
  else {
    FUN_2c604188();
  }
  puVar1 = (undefined4 *)FUN_2c5feea8();
  if (puVar1 != (undefined4 *)0x0) {
    FUN_2c603a04(param_1,0,DAT_2c602728);
    puVar2 = (undefined4 *)puVar1[1];
    if (puVar2 != (undefined4 *)0x0) {
      puVar3 = (undefined4 *)puVar2[1];
      if (puVar3 != (undefined4 *)0x0) {
        puVar4 = (undefined4 *)puVar3[1];
        if (puVar4 != (undefined4 *)0x0) {
          if (puVar4[1] != 0) {
            FUN_2c60265c(puVar4[1],param_1);
          }
          if ((code *)*puVar4 != (code *)0x0) {
            (*(code *)*puVar4)(puVar4,param_1);
          }
        }
        if ((code *)*puVar3 != (code *)0x0) {
          (*(code *)*puVar3)(puVar3,param_1);
        }
      }
      if ((code *)*puVar2 != (code *)0x0) {
        (*(code *)*puVar2)(puVar2,param_1);
      }
    }
    if ((code *)*puVar1 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x2c60271c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar1)(puVar1,param_1);
      return;
    }
  }
  return;
}

