/* FUN_1405c284 @ 0x1405c284 */

undefined4 FUN_1405c284(uint param_1)

{
  undefined4 uVar1;
  
  if ((*DAT_1405c2ac != 0) && (*(ushort *)(*DAT_1405c2ac + 0x40) == param_1)) {
    return 0;
  }
  if (DAT_1405c2ac[1] == 0) {
    return 0xff;
  }
  if (*(ushort *)(DAT_1405c2ac[1] + 0x40) == param_1) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0xff;
  }
  return uVar1;
}

