/* FUN_2c4e6674 @ 0x2c4e6674 */

undefined4 FUN_2c4e6674(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  
  FUN_2c4e67ec();
  piVar2 = *(int **)(DAT_2c4e66a4 + (param_1 + -3) * 4);
  *(undefined4 *)(DAT_2c4e66a4 + (param_1 + -3) * 4) = 0;
  FUN_2c4e6800();
  if (piVar2 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x2c4e669a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*piVar2 + 4))(piVar2);
    return uVar1;
  }
  return 0xffffffff;
}

