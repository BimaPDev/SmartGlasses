/* FUN_2c5e43d4 @ 0x2c5e43d4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c5e43d4(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  *(char *)(_LAB_2c5e4498 + 0x10) = (char)param_2;
  iVar1 = FUN_2c5e4128();
  (**(code **)(iVar1 + 0x2c))(param_1,param_2);
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,_DAT_2c5e44a4,0xbe,_LAB_2c5e44a0,_DAT_2c5e449c,param_1,param_2);
}

