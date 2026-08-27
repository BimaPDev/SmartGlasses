/* FUN_1404e2b8 @ 0x1404e2b8 */

uint FUN_1404e2b8(uint param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    if (param_1 < 0xf) {
      return ((uint)((ulonglong)DAT_1404e2d8 * (ulonglong)((short)param_1 * 0x7f + 7) >> 0x20) &
             0x7ff) >> 3;
    }
    uVar1 = 0x7f;
  }
  return uVar1;
}

