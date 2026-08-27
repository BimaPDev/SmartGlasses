/* FUN_2c51e8f8 @ 0x2c51e8f8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_2c51e8f8(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_2c602618(param_2);
  if (iVar1 == 0xd2) {
    FUN_2c51e898(param_1);
    return 1;
  }
  if (iVar1 == 0xce) {
    iVar2 = (**(code **)(**(int **)(param_1 + 8) + 0x24))();
    if (iVar2 == 0) {
      return 1;
    }
    FUN_2c51e1c8(param_1);
  }
  else if (iVar1 == 0xcf) {
    iVar2 = (**(code **)(**(int **)(param_1 + 8) + 0x1c))();
    if (iVar2 == 0) {
      return 1;
    }
    FUN_2c51e100(param_1);
  }
  else {
    if (iVar1 == 0xd4 || iVar1 == 0xe3) {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(4,_LAB_2c51e9e8,0xee,_LAB_2c51e9e4,_LAB_2c51e9e0);
    }
    iVar2 = 0;
    if (iVar1 == 0xd3) {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(4,_LAB_2c51e9e8,0xf4,_LAB_2c51e9e4,_LAB_2c51e9e0);
    }
  }
  return iVar2;
}

