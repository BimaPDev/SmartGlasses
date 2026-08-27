/* FUN_2c5560a0 @ 0x2c5560a0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_2c5560a0(int *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1 + *(int *)(*param_1 + -0x14);
  *(undefined4 *)((int)param_1 + *(int *)(*param_1 + -0x14)) = _LAB_2c5560c4;
  if (*(int *)(iVar1 + 4) != iVar1 + 0xc) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  return iVar1;
}

