/* FUN_2c5da970 @ 0x2c5da970 */

int FUN_2c5da970(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  
  FUN_2c5da928();
  iVar2 = *(int *)(param_1 + 0x34);
  iVar3 = *(int *)(param_1 + 0x38);
  if (iVar2 != iVar3) {
    iVar1 = iVar2 + 8;
    do {
      iVar2 = iVar2 + 0x18;
      bVar4 = iVar1 != *(int *)(iVar1 + -8);
      iVar1 = iVar1 + 0x18;
      if (bVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_2c472680(0);
      }
    } while (iVar3 != iVar2);
    iVar3 = *(int *)(param_1 + 0x34);
  }
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0,iVar3);
  }
  if (*(int *)(param_1 + 0x10) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  return param_1;
}

