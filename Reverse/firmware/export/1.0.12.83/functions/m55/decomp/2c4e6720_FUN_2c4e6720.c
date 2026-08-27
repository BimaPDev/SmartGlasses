/* FUN_2c4e6720 @ 0x2c4e6720 */

undefined4 FUN_2c4e6720(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  if (param_1 < 3) {
    return 0;
  }
  piVar1 = *(int **)(DAT_2c4e6740 + (param_1 + -3) * 4);
  if (piVar1 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x2c4e6732. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*piVar1 + 0x10))();
    return uVar2;
  }
  return 0xffffffff;
}

