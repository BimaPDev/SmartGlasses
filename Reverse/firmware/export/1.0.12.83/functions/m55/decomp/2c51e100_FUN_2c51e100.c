/* FUN_2c51e100 @ 0x2c51e100 */

void FUN_2c51e100(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_2c519834(*(undefined4 *)(param_1 + 0x24));
  iVar1 = (**(code **)(**(int **)(param_1 + 8) + 0x18))();
  if (iVar1 != 0) {
    uVar2 = FUN_2c5ef8d0(iVar1);
    uVar2 = FUN_2c5dc51c(uVar2,1);
    FUN_2c638730(*(undefined4 *)(param_1 + 0xc));
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(4,uVar2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(3,DAT_2c51e1bc,0x10a,DAT_2c51e1b8,DAT_2c51e1c4,DAT_2c51e1c0);
}

