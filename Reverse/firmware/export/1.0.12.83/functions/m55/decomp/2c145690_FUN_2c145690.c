/* FUN_2c145690 @ 0x2c145690 */

void FUN_2c145690(int param_1)

{
  byte bVar1;
  
  if (param_1 != 0) {
    if (*(int *)(param_1 + 4) == 0) {
      FUN_2c135940(DAT_2c145700,DAT_2c145714,param_1,*(undefined4 *)(param_1 + 0x18));
    }
    else {
      FUN_2c135940(DAT_2c1456f8,DAT_2c1456f4);
    }
    if (*(byte *)(param_1 + 1) < 3) {
      FUN_2c135940(DAT_2c1456f8,DAT_2c145708,
                   *(undefined4 *)(DAT_2c145704 + (uint)*(byte *)(param_1 + 1) * 4));
      bVar1 = *(byte *)(param_1 + 3);
    }
    else {
      bVar1 = *(byte *)(param_1 + 3);
    }
    if (bVar1 < 2) {
      FUN_2c135940(DAT_2c1456f8,DAT_2c145710,*(undefined4 *)(DAT_2c14570c + (uint)bVar1 * 4));
    }
    FUN_2c135940(DAT_2c145700,DAT_2c1456fc,*(undefined4 *)(param_1 + 0x10),
                 *(undefined4 *)(param_1 + 0x14));
    return;
  }
  return;
}

