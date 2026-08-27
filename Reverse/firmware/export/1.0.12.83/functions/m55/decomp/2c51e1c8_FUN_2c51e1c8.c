/* FUN_2c51e1c8 @ 0x2c51e1c8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c51e1c8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  func_0x2c519820(*(undefined4 *)(param_1 + 0x24));
  iVar1 = (**(code **)(**(int **)(param_1 + 8) + 0x18))();
  if (iVar1 != 0) {
    uVar2 = FUN_2c5ef8d0(iVar1);
    uVar2 = FUN_2c5dc51c(uVar2,1);
    FUN_2c638730(*(undefined4 *)(param_1 + 0xc));
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(4,uVar2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(3,_LAB_2c51e278,0x11c,_LAB_2c51e274,_LAB_2c51e280,_LAB_2c51e27c);
}

