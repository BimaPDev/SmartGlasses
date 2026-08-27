/* FUN_2c5fef64 @ 0x2c5fef64 */

void FUN_2c5fef64(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar2 = (undefined4 *)*param_1;
  puVar3 = (undefined4 *)*puVar2;
  if (puVar3 != (undefined4 *)0x0) {
    *param_1 = (int)puVar3;
    puVar4 = (undefined4 *)*puVar3;
    if (puVar4 != (undefined4 *)0x0) {
      *param_1 = (int)puVar4;
      piVar1 = (int *)*puVar4;
      if (piVar1 != (int *)0x0) {
        *param_1 = (int)piVar1;
        if (*piVar1 != 0) {
          *param_1 = *piVar1;
          FUN_2c5fef64();
        }
        *param_1 = (int)piVar1;
        if ((code *)piVar1[1] != (code *)0x0) {
          (*(code *)piVar1[1])(piVar1,param_1);
        }
      }
      *param_1 = (int)puVar4;
      if ((code *)puVar4[1] != (code *)0x0) {
        (*(code *)puVar4[1])(puVar4,param_1);
      }
    }
    *param_1 = (int)puVar3;
    if ((code *)puVar3[1] != (code *)0x0) {
      (*(code *)puVar3[1])(puVar3,param_1);
    }
  }
  *param_1 = (int)puVar2;
  if ((code *)puVar2[1] != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x2c5fefc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)puVar2[1])(puVar2,param_1);
    return;
  }
  return;
}

