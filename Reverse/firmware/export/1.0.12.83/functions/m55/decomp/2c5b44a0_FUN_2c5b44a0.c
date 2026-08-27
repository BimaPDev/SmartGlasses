/* FUN_2c5b44a0 @ 0x2c5b44a0 */

void FUN_2c5b44a0(uint param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  
  if (param_1 < 0xe10) {
    if (param_1 < 0x3c) {
      *param_2 = 0;
      *param_3 = 0;
      return;
    }
    uVar2 = (uint)((ulonglong)DAT_2c5b4524 * (ulonglong)param_1 >> 0x25);
    uVar1 = 0;
    if (param_1 + uVar2 * -0x3c == 0) goto LAB_2c5b44e2;
    uVar1 = 0;
LAB_2c5b44d4:
    uVar2 = uVar2 + 1;
    if (uVar2 == 0x3c) {
      uVar1 = uVar1 + 1;
      uVar2 = 0;
    }
  }
  else {
    uVar1 = (uint)((ulonglong)DAT_2c5b4520 * (ulonglong)param_1 >> 0x2b);
    param_1 = param_1 + uVar1 * -0xe10;
    uVar2 = 0;
    if (param_1 != 0) {
      uVar2 = (uint)((ulonglong)DAT_2c5b4524 * (ulonglong)param_1 >> 0x25);
      if (param_1 == uVar2 * 0x3c) {
        if (0x62 < uVar1) {
          uVar1 = 99;
        }
        goto LAB_2c5b44e2;
      }
      goto LAB_2c5b44d4;
    }
  }
  if (0x62 < uVar1) {
    uVar1 = 99;
  }
LAB_2c5b44e2:
  *param_2 = uVar1;
  *param_3 = uVar2;
  return;
}

