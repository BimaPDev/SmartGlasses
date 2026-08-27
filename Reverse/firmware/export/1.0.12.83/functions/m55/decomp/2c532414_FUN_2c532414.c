/* FUN_2c532414 @ 0x2c532414 */

void FUN_2c532414(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x1c);
  if (iVar2 == *(int *)(param_1 + 0x20)) {
    iVar2 = *(int *)(*(int *)(param_1 + 0x28) + -4) + 500;
  }
  piVar1 = *(int **)(iVar2 + -8);
  func_0x2c53d1d8();
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x2c53243a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*piVar1 + 0x1c))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,DAT_2c53c174,0x8c,DAT_2c53c170,DAT_2c53c16c);
}

