/* FUN_2c5e41ac @ 0x2c5e41ac */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5e41ac(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  *(char *)(_LAB_2c5e41cc + 0xc) = (char)param_1;
  iVar1 = FUN_2c5e4128();
                    /* WARNING: Could not recover jumptable at 0x2c5e41ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 + 0x50))(param_1,param_2);
  return;
}

