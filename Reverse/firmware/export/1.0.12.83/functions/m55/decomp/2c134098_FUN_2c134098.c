/* FUN_2c134098 @ 0x2c134098 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c134098(undefined4 param_1)

{
  if (*_DAT_2c1340b0 == '\0') {
    if (_DAT_2c1340b4 != 0) {
      param_1 = _DAT_2c1340b8;
    }
    *_DAT_2c1340b0 = '\x01';
  }
  return param_1;
}

