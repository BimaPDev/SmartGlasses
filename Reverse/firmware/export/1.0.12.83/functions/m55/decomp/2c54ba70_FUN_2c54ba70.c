/* FUN_2c54ba70 @ 0x2c54ba70 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_2c54ba70(int *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1 + *(int *)(*param_1 + -0x14);
  *(undefined4 *)((int)param_1 + *(int *)(*param_1 + -0x14)) = _LAB_2c54bae4;
  if (*(int *)(iVar1 + 0x90) != iVar1 + 0x98) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (*(int *)(iVar1 + 0x78) != iVar1 + 0x80) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (*(int *)(iVar1 + 0x4c) != iVar1 + 0x54) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (*(int *)(iVar1 + 0x34) != iVar1 + 0x3c) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (*(int *)(iVar1 + 0x1c) != iVar1 + 0x24) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (*(int *)(iVar1 + 4) != iVar1 + 0xc) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  return iVar1;
}

