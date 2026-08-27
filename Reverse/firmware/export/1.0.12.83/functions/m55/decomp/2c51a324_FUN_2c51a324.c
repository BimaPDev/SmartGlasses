/* FUN_2c51a324 @ 0x2c51a324 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c51a324(int param_1)

{
  int iVar1;
  undefined4 unaff_r4;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0xc);
  iVar1 = FUN_2c602410();
  if ((iVar1 == _LAB_2c51a34c) &&
     (iVar1 = FUN_2c606bb4(*(undefined4 *)(iVar2 + 0x20),2), iVar1 != 0)) {
    FUN_2c5210a8();
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c521988,0x1b1,_LAB_2c521984,_LAB_2c521980,_LAB_2c521984,unaff_r4);
  }
  return;
}

