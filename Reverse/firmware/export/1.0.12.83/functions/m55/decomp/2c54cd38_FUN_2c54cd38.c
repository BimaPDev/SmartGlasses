/* FUN_2c54cd38 @ 0x2c54cd38 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c54cd38(int *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1 + *(int *)(*param_1 + -0x14);
  *(undefined4 *)((int)param_1 + *(int *)(*param_1 + -0x14)) = _LAB_2c54cd98;
  if (*(int *)(iVar1 + 0x74) != iVar1 + 0x7c) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  *(undefined4 *)(iVar1 + 4) = _LAB_2c54cd9c;
  if (*(int *)(iVar1 + 0x40) != iVar1 + 0x48) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (*(int *)(iVar1 + 0x28) != iVar1 + 0x30) {
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

