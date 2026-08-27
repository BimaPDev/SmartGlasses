/* FUN_2c4ecc98 @ 0x2c4ecc98 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4ecc98(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = _LAB_2c4eccd4;
  if (*_LAB_2c4eccd4 != 0) {
    FUN_2c62be1c(*_LAB_2c4eccd4);
    *piVar1 = 0;
  }
  if (*_LAB_2c4eccd8 != '\0') {
    iVar2 = func_0x2c4e9434();
    (**(code **)(iVar2 + 0x14))();
    iVar2 = func_0x2c4e9434();
    (**(code **)(iVar2 + 4))();
  }
  iVar2 = func_0x2c4ee01c();
                    /* WARNING: Could not recover jumptable at 0x2c4eccc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar2 + 8))(param_1);
  return;
}

