/* FUN_2c5a241c @ 0x2c5a241c */

void FUN_2c5a241c(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x60);
  if (iVar1 != 0) {
    func_0x2c5a422c(iVar1);
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0,iVar1);
  }
  if (*(int **)(param_1 + 0x68) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x68) + 4))();
    *(undefined4 *)(param_1 + 0x68) = 0;
  }
  return;
}

