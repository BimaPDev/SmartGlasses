/* FUN_100a793c @ 0x100a793c */

uint FUN_100a793c(void)

{
  if (*DAT_100a7950 != 0) {
    return (uint)*(byte *)(*DAT_100a7950 + 0x27);
  }
  return 0xfffffffd;
}

