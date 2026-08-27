/* FUN_2c50ec60 @ 0x2c50ec60 */

void FUN_2c50ec60(undefined4 *param_1,undefined4 param_2)

{
  if (param_1[1] != 0) {
    FUN_2c62e838(param_1[1],DAT_2c50ec94);
    if (param_1[1] != 0) {
      FUN_2c50e398(param_1[1],*(undefined1 *)(param_1[0x25] + 0x18),
                   *(undefined1 *)(param_1[0x25] + 8),1);
    }
  }
  param_1[1] = param_2;
  *param_1 = 0;
  FUN_2c62e8ec(param_1 + 3);
  return;
}

