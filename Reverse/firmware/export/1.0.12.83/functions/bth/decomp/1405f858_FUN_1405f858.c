/* FUN_1405f858 @ 0x1405f858 */

void FUN_1405f858(int param_1)

{
  int *piVar1;
  
  piVar1 = DAT_1405f89c;
  if (param_1 != 1) {
    if (param_1 - 2U < 2) {
      if (*DAT_1405f89c != 0) {
        FUN_14074168();
      }
      if (piVar1[1] != 0) {
        FUN_14074168();
      }
      if (piVar1[2] != 0) {
        FUN_14074168();
      }
    }
    *piVar1 = 0;
    piVar1[1] = 0;
    piVar1[2] = 0;
    return;
  }
  FUN_140746c8(4,DAT_1405f8a0);
  piVar1 = DAT_1405f89c;
  *DAT_1405f89c = 0;
  piVar1[1] = 0;
  piVar1[2] = 0;
  return;
}

