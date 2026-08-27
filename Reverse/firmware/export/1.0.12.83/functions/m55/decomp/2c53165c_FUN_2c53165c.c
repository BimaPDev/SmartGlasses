/* FUN_2c53165c @ 0x2c53165c */

void FUN_2c53165c(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 == 0) {
    return;
  }
  if (*(int *)(iVar1 + 0x1c) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  *(undefined4 *)(iVar1 + 0x1c) = 0;
  *(undefined1 *)(iVar1 + 0x20) = 0;
  *(undefined1 *)(iVar1 + 4) = 0;
  *(undefined4 *)(iVar1 + 5) = 0;
  *(undefined4 *)(iVar1 + 9) = 0;
  *(undefined4 *)(iVar1 + 0xd) = 0;
  *(undefined4 *)(iVar1 + 0x11) = 0;
  *(undefined4 *)(iVar1 + 0x15) = 0;
                    /* WARNING: Subroutine does not return */
  FUN_2c472680(0,iVar1);
}

