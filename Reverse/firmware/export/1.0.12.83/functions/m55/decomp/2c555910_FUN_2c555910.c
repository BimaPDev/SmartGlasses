/* FUN_2c555910 @ 0x2c555910 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_2c555910(int *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1 + *(int *)(*param_1 + -0x14);
  *(undefined4 *)((int)param_1 + *(int *)(*param_1 + -0x14)) = _LAB_2c555944;
  if (*(int *)(iVar1 + 0x20) != iVar1 + 0x28) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (*(int *)(iVar1 + 4) != iVar1 + 0xc) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  return iVar1;
}

