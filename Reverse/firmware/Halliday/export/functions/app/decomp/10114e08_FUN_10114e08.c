/* FUN_10114e08 @ 0x10114e08 */

void FUN_10114e08(int param_1)

{
  if (*(char *)(param_1 + 0xd) < '\0') {
    *(byte *)(param_1 + 0xd) = *(byte *)(param_1 + 0xd) & 0x7f;
    FUN_10114ac0(DAT_10114e38,param_1);
  }
  FUN_10114b50(*(int *)(DAT_10114e3c + 8) == param_1);
  return;
}

