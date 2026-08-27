/* FUN_2c6737fc @ 0x2c6737fc */

void FUN_2c6737fc(int param_1)

{
  byte bVar1;
  
  if (param_1 != 0) {
    if (*(int *)(param_1 + 4) == 0) {
      FUN_2c6741e8(DAT_2c67386c,DAT_2c673880,param_1,*(undefined4 *)(param_1 + 0x18));
    }
    else {
      FUN_2c6741e8(DAT_2c673864,DAT_2c673860);
    }
    if (*(byte *)(param_1 + 1) < 3) {
      FUN_2c6741e8(DAT_2c673864,DAT_2c673874,
                   *(undefined4 *)(DAT_2c673870 + (uint)*(byte *)(param_1 + 1) * 4));
      bVar1 = *(byte *)(param_1 + 3);
    }
    else {
      bVar1 = *(byte *)(param_1 + 3);
    }
    if (bVar1 < 2) {
      FUN_2c6741e8(DAT_2c673864,DAT_2c67387c,*(undefined4 *)(DAT_2c673878 + (uint)bVar1 * 4));
    }
    FUN_2c6741e8(DAT_2c67386c,DAT_2c673868,*(undefined4 *)(param_1 + 0x10),
                 *(undefined4 *)(param_1 + 0x14));
    return;
  }
  return;
}

