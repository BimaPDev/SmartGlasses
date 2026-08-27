/* FUN_2c503f24 @ 0x2c503f24 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c503f24(int param_1)

{
  int *piVar1;
  
  FUN_2c503ed8();
  piVar1 = (int *)*_LAB_2c503f58;
  if (piVar1 != (int *)0x0) {
    if (*(code **)(*piVar1 + 0x3c) == _LAB_2c503f5c) {
      piVar1 = (int *)piVar1[3];
    }
    else {
      piVar1 = (int *)(**(code **)(*piVar1 + 0x3c))();
    }
    if (*(code **)(*piVar1 + 8) != _LAB_2c503f60) {
                    /* WARNING: Could not recover jumptable at 0x2c503f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*piVar1 + 8))(piVar1,*(undefined1 *)(param_1 + 4));
      return;
    }
  }
  return;
}

