/* FUN_2c5c5f34 @ 0x2c5c5f34 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c5c5f34(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_2c66b624(_LAB_2c5c5fb0);
  if (iVar1 == 0) {
    return 2;
  }
  iVar1 = FUN_2c66b624(_LAB_2c5c5fb4,param_2);
  if (iVar1 != 0) {
    iVar1 = FUN_2c66b624(_LAB_2c5c5fb8,param_2);
    if (iVar1 == 0) {
      return 5;
    }
    iVar1 = FUN_2c66b624(_LAB_2c5c5fbc,param_2);
    if (iVar1 == 0) {
      uVar2 = 7;
    }
    else {
      iVar1 = FUN_2c66b624(_LAB_2c5c5fc0,param_2);
      if (iVar1 == 0) {
        uVar2 = 8;
      }
      else {
        iVar1 = FUN_2c66b624(_LAB_2c5c5fc4,param_2);
        if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_2c62c82c(3,_LAB_2c5c5fd0,0x25f,_LAB_2c5c5fcc,_LAB_2c5c5fc8,param_2);
        }
        uVar2 = 6;
      }
    }
    return uVar2;
  }
  return 1;
}

