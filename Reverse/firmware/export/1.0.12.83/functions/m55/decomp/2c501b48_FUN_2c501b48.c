/* FUN_2c501b48 @ 0x2c501b48 */

void FUN_2c501b48(undefined4 *param_1)

{
  FUN_2c62e838(param_1,DAT_2c501b78);
  *(undefined1 *)((int)param_1 + 0x61) = 0;
  if (*(char *)(param_1 + 0x18) != '\0') {
    FUN_2c63140c(param_1[6],*param_1);
    return;
  }
  FUN_2c63140c(param_1[6],param_1[1]);
  return;
}

