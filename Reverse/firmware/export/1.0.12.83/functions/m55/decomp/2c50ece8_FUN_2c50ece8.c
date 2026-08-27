/* FUN_2c50ece8 @ 0x2c50ece8 */

void FUN_2c50ece8(undefined4 *param_1,undefined4 param_2)

{
  if (param_1[2] != 0) {
    FUN_2c62e838(param_1[2],DAT_2c50ed1c);
    if (param_1[2] != 0) {
      FUN_2c50e398(param_1[2],*(undefined1 *)(param_1[0x26] + 0x18),
                   *(undefined1 *)(param_1[0x26] + 9),0);
    }
  }
  param_1[2] = param_2;
  *param_1 = 0;
  FUN_2c62e8ec(param_1 + 0x14);
  return;
}

