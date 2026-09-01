/* FUN_10056678 @ 0x10056678 */

void FUN_10056678(int param_1)

{
  if (param_1 - 600U < 0x321) {
    *DAT_100566a0 = *DAT_100566a0 & 0xfffff0ff | (param_1 - 600U) / 0x32 << 8;
    thunk_FUN_1011598c(0x21);
    return;
  }
  return;
}

