/* FUN_2c54c9b8 @ 0x2c54c9b8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_2c54c9b8(int *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1 + *(int *)(*param_1 + -0x14);
  *(undefined4 *)((int)param_1 + *(int *)(*param_1 + -0x14)) = _LAB_2c54c9fc;
  if (*(int *)(iVar1 + 0x3c) != iVar1 + 0x44) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (*(int *)(iVar1 + 0x24) != iVar1 + 0x2c) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (*(int *)(iVar1 + 8) != iVar1 + 0x10) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  return iVar1;
}

