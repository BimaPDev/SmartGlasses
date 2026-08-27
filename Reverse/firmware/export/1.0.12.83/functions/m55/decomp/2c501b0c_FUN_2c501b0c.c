/* FUN_2c501b0c @ 0x2c501b0c */

void FUN_2c501b0c(int param_1)

{
  FUN_2c62e838(param_1,DAT_2c501b3c);
  *(undefined1 *)(param_1 + 0x61) = 1;
  if (*(char *)(param_1 + 0x60) != '\0') {
    FUN_2c63140c(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 8));
    return;
  }
  FUN_2c63140c(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0xc));
  return;
}

