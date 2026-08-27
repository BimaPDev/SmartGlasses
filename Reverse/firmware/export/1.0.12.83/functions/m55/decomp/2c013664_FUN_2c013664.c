/* FUN_2c013664 @ 0x2c013664 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c013664(uint param_1)

{
  bool bVar1;
  
  if ((int)param_1 < 0) {
    param_1 = param_1 & 0x7fffffff;
    *_DAT_2c013690 = 0;
    func_0x2c013a9c();
  }
  if (param_1 == 0) {
    *_DAT_2c01368c = 0xffffffff;
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(param_1);
  }
  return;
}

