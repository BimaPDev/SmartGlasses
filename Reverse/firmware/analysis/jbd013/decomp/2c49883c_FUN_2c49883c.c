/* FUN_2c49883c @ 0x2c49883c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c49883c(undefined4 param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  
  piVar1 = _LAB_2c49888c;
  if (*_LAB_2c498888 == 1) {
    return 0xffffffff;
  }
  if (*_LAB_2c49888c == 1) {
    thunk_FUN_2c4975bc(0x71);
    *piVar1 = 0;
  }
  if (*_LAB_2c497ed8 != 0) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x40,_LAB_2c497ee4,_LAB_2c497ee0,_LAB_2c497edc,param_1);
  }
  FUN_2c497684(param_1,param_2,param_3,param_4);
  return 0;
}

