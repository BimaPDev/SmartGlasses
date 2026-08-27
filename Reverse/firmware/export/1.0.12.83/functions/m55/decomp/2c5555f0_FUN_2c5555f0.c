/* FUN_2c5555f0 @ 0x2c5555f0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_2c5555f0(int *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1 + *(int *)(*param_1 + -0x14);
  *(undefined4 *)((int)param_1 + *(int *)(*param_1 + -0x14)) = _LAB_2c555624;
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

