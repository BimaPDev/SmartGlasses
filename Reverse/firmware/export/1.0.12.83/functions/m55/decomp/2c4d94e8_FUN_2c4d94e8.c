/* FUN_2c4d94e8 @ 0x2c4d94e8 */

void FUN_2c4d94e8(int param_1,undefined4 param_2,int *param_3)

{
  if (param_1 == 0x20) {
    FUN_2c4d8848(param_2);
    *param_3 = *param_3 + 4;
    return;
  }
  if (param_1 != 0x40) {
    if (param_1 != 0x200) {
      return;
    }
    FUN_2c4d7718(param_2,9,DAT_2c4d9530);
    *param_3 = *param_3 + 8;
    return;
  }
  FUN_2c4d7718(param_2,6,DAT_2c4d9530,0x200);
  *param_3 = *param_3 + 5;
  return;
}

