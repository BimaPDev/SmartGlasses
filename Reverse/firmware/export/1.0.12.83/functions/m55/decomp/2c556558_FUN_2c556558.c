/* FUN_2c556558 @ 0x2c556558 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_2c556558(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = _LAB_2c556628;
  iVar2 = (int)param_1 + *(int *)(*param_1 + -0x14);
  *(undefined4 *)((int)param_1 + *(int *)(*param_1 + -0x14)) = _LAB_2c556624;
  *(undefined4 *)(iVar2 + 0x5c) = uVar1;
  if (*(int *)(iVar2 + 0xf8) != iVar2 + 0x100) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  FUN_2c5561f0(iVar2 + 0xd8);
  if (*(int *)(iVar2 + 0xd8) != iVar2 + 0xf0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (*(int *)(iVar2 + 0xc0) != iVar2 + 200) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (*(int *)(iVar2 + 0xa8) != iVar2 + 0xb0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (*(int *)(iVar2 + 0x90) != iVar2 + 0x98) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (*(int *)(iVar2 + 0x78) != iVar2 + 0x80) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (*(int *)(iVar2 + 0x60) != iVar2 + 0x68) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  *(undefined4 *)(iVar2 + 0x20) = _LAB_2c55662c;
  if (*(int *)(iVar2 + 0x44) != iVar2 + 0x4c) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (*(int *)(iVar2 + 0x28) != iVar2 + 0x30) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (*(int *)(iVar2 + 4) != iVar2 + 0xc) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  return iVar2;
}

