/* FUN_1400153c @ 0x1400153c */

void FUN_1400153c(void)

{
  do {
  } while ((*(uint *)(DAT_14001550 + 0xc) & 1) != 0);
  *(uint *)(DAT_14001550 + 4) = *(uint *)(DAT_14001550 + 4) & 0xfdffffff;
  return;
}

