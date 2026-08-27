/* FUN_2c48472c @ 0x2c48472c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c48472c(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if (param_1 != 0) {
    if (param_1 == 1) {
      FUN_2c483e0c();
      FUN_2c4839d4(1,param_2);
      FUN_2c4832f0(1,param_2);
      iVar1 = func_0x2c483574(param_2);
      if (iVar1 == 0) {
        func_0x2c47849c();
      }
      else {
        FUN_2c4778e8();
      }
    }
    FUN_2c484e14(_LAB_2c484788,param_1);
    return;
  }
  FUN_2c483e0c(2);
  FUN_2c4832f0(2,param_2);
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x24,DAT_2c484e8c,LAB_2c484e88,_LAB_2c484e80,DAT_2c484e84,_LAB_2c484788,0);
}

