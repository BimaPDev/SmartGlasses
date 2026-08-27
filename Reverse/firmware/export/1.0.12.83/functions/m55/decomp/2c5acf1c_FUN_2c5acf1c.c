/* FUN_2c5acf1c @ 0x2c5acf1c */

void FUN_2c5acf1c(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x1a4) != 0) {
    FUN_2c5d5cd0();
    iVar1 = *(int *)(param_1 + 0x1a4);
    if (iVar1 != 0) {
      FUN_2c5d5ccc(iVar1);
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0,iVar1);
    }
    *(undefined4 *)(param_1 + 0x1a4) = 0;
  }
  return;
}

