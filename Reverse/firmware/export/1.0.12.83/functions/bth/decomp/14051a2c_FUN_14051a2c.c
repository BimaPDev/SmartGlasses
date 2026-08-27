/* FUN_14051a2c @ 0x14051a2c */

void FUN_14051a2c(int param_1)

{
  if (param_1 == 0) {
    return;
  }
  if (*(char *)(param_1 + 0x111) == '\0') {
    return;
  }
  FUN_1402a6e8(4,0x9b9,DAT_14051a7c,DAT_14051a78,DAT_14051a74);
  FUN_14050f9c(param_1);
  FUN_140e5718(*(undefined4 *)(param_1 + 0x114));
  FUN_140e5378(*(undefined4 *)(param_1 + 0x114),5000);
  return;
}

