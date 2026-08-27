/* FUN_2c5554d4 @ 0x2c5554d4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5554d4(int *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1 + *(int *)(*param_1 + -0x14);
  *(undefined4 *)((int)param_1 + *(int *)(*param_1 + -0x14)) = _LAB_2c555520;
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
                    /* WARNING: Subroutine does not return */
  FUN_2c472680(0,iVar1);
}

