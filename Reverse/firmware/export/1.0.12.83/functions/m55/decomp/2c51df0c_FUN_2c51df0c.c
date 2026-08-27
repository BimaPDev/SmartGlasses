/* FUN_2c51df0c @ 0x2c51df0c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c51df0c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_2c606abc(*(undefined4 *)(param_1 + 0xc),1);
  FUN_2c606abc(*(undefined4 *)(param_1 + 0x10),1);
  FUN_2c606abc(*(undefined4 *)(param_1 + 0x28),1);
  FUN_2c606abc(*(undefined4 *)(param_1 + 0x14),1);
  iVar1 = (**(code **)(**(int **)(param_1 + 8) + 0x18))();
  if (iVar1 != 0) {
    uVar2 = FUN_2c5ef8d0(iVar1);
    uVar2 = FUN_2c5dc51c(uVar2,1);
    FUN_2c638730(*(undefined4 *)(param_1 + 0xc),uVar2);
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c51e018,0x90,_LAB_2c51e014,_LAB_2c51e010,uVar2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(3,_LAB_2c51e018,0x8d,_LAB_2c51e014,_LAB_2c51e024,_LAB_2c51e020);
}

