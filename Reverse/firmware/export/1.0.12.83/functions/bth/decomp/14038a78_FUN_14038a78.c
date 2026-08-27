/* FUN_14038a78 @ 0x14038a78 */

void FUN_14038a78(uint param_1)

{
  if ((int)(param_1 << 0x1f) < 0) {
    FUN_140bd09c(1);
  }
  if ((int)(param_1 << 0x1e) < 0) {
    FUN_140388e4(3);
  }
  if ((int)(param_1 << 0x1d) < 0) {
    FUN_14038a5c();
  }
  if ((int)(param_1 << 0x1c) < 0) {
    FUN_140bd0a8();
  }
  if ((int)(param_1 << 0x1b) < 0) {
    FUN_140bd0c0(0);
  }
  if ((int)(param_1 << 0x19) < 0) {
    FUN_140bd0b4();
  }
  *(bool *)DAT_140bd0d4 = (param_1 & 0x80) != 0;
  return;
}

