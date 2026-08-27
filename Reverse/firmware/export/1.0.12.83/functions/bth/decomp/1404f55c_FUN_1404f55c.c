/* FUN_1404f55c @ 0x1404f55c */

uint FUN_1404f55c(uint param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    if (param_1 < 0xf) {
      return ((uint)((ulonglong)DAT_1404f57c * (ulonglong)((short)param_1 * 0xf + 7) >> 0x20) &
             0x7ff) >> 3;
    }
    uVar1 = 0xf;
  }
  return uVar1;
}

