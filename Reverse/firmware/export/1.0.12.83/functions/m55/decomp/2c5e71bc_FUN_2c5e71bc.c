/* FUN_2c5e71bc @ 0x2c5e71bc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5e71bc(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  iVar1 = FUN_2c5e697c();
  puVar2 = (undefined4 *)(**(code **)(iVar1 + 0x34))(param_2);
  if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,_LAB_2c5e7218,0x22e,_LAB_2c5e7214,_LAB_2c5e7210,param_1);
  }
  puVar3 = (undefined4 *)*puVar2;
  if (puVar3 != (undefined4 *)0x0) {
    *puVar2 = *puVar3;
    iVar1 = FUN_2c5e697c(param_1);
    (**(code **)(iVar1 + 0x38))(param_2,puVar3[2]);
    if ((puVar3 != DAT_2c62beb8) && (puVar3 != (undefined4 *)0x0)) {
      FUN_2c4726f0();
      return;
    }
    return;
  }
  return;
}

