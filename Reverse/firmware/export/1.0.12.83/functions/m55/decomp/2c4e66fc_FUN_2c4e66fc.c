/* FUN_2c4e66fc @ 0x2c4e66fc */

undefined4 FUN_2c4e66fc(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  if (param_1 < 3) {
    return 1;
  }
  piVar1 = *(int **)(DAT_2c4e671c + (param_1 + -3) * 4);
  if (piVar1 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x2c4e670e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*piVar1 + 0xc))();
    return uVar2;
  }
  return 0xffffffff;
}

