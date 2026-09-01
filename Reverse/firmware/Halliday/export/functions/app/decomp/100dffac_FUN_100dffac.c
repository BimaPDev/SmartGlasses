/* FUN_100dffac @ 0x100dffac */

void FUN_100dffac(char param_1)

{
  if ((byte)(param_1 - 10U) < 0x14) {
    *DAT_100dffc8 = *DAT_100dffc8 & ~(1 << (uint)(byte)(param_1 - 10U));
  }
  return;
}

