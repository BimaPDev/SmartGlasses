/* FUN_2c54f2f8 @ 0x2c54f2f8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c54f2f8(int *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1 + *(int *)(*param_1 + -0x14);
  *(undefined4 *)((int)param_1 + *(int *)(*param_1 + -0x14)) = _LAB_2c54f334;
  if (*(int *)(iVar1 + 0x24) != iVar1 + 0x2c) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (*(int *)(iVar1 + 0xc) != iVar1 + 0x14) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c472680(0,iVar1);
}

