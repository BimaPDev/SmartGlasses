/* FUN_2c51f9c8 @ 0x2c51f9c8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c51f9c8(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  FUN_2c606abc(*(undefined4 *)(param_1 + 0xc),1);
  FUN_2c606abc(*(undefined4 *)(param_1 + 0x10),1);
  if (*(int *)(param_1 + 0x1e4) != 0) {
    FUN_2c51f69c();
  }
  if (*(int *)(param_1 + 0x1f0) != 0) {
    FUN_2c51f660();
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    FUN_2c51f660();
  }
  if (*(int *)(param_1 + 0x38) != 0) {
    FUN_2c51f660();
  }
  FUN_2c606abc(*(undefined4 *)(param_1 + 0x1e4),1);
  FUN_2c606abc(*(undefined4 *)(param_1 + 0x1f0),1);
  FUN_2c606abc(*(undefined4 *)(param_1 + 0x28),1);
  FUN_2c606abc(*(undefined4 *)(param_1 + 0x38),1);
  iVar1 = (**(code **)(**(int **)(param_1 + 8) + 0x18))();
  if (iVar1 != 0) {
    iVar2 = (**(code **)(**(int **)(param_1 + 8) + 0x38))();
    uVar4 = *(undefined4 *)(param_1 + 500);
    if (iVar2 == 0) {
      uVar3 = FUN_2c5e2e4c(_LAB_2c51fb68);
      FUN_2c63140c(uVar4,uVar3);
    }
    else {
      uVar3 = FUN_2c5e2e4c(_LAB_2c51fb7c);
      FUN_2c63140c(uVar4,uVar3);
    }
    uVar4 = FUN_2c5ef8d0(iVar1);
    uVar4 = FUN_2c5dc51c(uVar4,1);
    FUN_2c638730(*(undefined4 *)(param_1 + 0xc));
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(4,uVar4);
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(3,_LAB_2c51fb98,0x2a0,_LAB_2c51fb94,_LAB_2c51fb90,_LAB_2c51fb8c);
}

