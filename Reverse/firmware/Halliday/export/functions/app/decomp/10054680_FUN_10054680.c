/* FUN_10054680 @ 0x10054680 */

int FUN_10054680(int param_1,int param_2)

{
  if ((param_2 << 0x1c < 0) && ((*(byte *)(param_1 + DAT_10054694) & 3) == 1)) {
    param_1 = param_1 + 0x20;
  }
  return param_1;
}

