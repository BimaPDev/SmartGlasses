/* FUN_2c5c92e4 @ 0x2c5c92e4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5c92e4(int *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1 + *(int *)(*param_1 + -0x10);
  *(undefined4 *)((int)param_1 + *(int *)(*param_1 + -0x10)) = _LAB_2c5c9348;
  if (*(int *)(iVar1 + 0x54) != iVar1 + 0x5c) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (*(int *)(iVar1 + 0x3c) != iVar1 + 0x44) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (*(int *)(iVar1 + 0x24) != iVar1 + 0x2c) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (*(int *)(iVar1 + 4) != iVar1 + 0xc) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  func_0x2c5ce06c(iVar1,_LAB_2c5c934c);
                    /* WARNING: Subroutine does not return */
  FUN_2c472680(0,iVar1);
}

