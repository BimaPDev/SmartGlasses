/* FUN_2c519e84 @ 0x2c519e84 */

void FUN_2c519e84(int param_1)

{
  int *piVar1;
  undefined1 local_1c [4];
  undefined4 local_18;
  int local_14;
  
  local_14 = *DAT_2c519ed0;
  FUN_2c62be40();
  *DAT_2c519ed4 = 0;
  FUN_2c5ee008();
  piVar1 = *(int **)(*(int *)(param_1 + 0xc) + 0xc);
  if (piVar1 != (int *)0x0) {
    local_18 = 0;
    local_1c[0] = 1;
    (**(code **)(*piVar1 + 0x3c))(piVar1,local_1c);
  }
  if (*DAT_2c519ed0 == local_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

