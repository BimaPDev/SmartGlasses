/* FUN_140e45b0 @ 0x140e45b0 */

void FUN_140e45b0(int param_1)

{
  if (*DAT_140e45c8 != 0) {
    *DAT_140e45c8 = param_1 + *DAT_140e45c8;
    return;
  }
  *DAT_140e45c8 = param_1 + DAT_140e45cc;
  return;
}

