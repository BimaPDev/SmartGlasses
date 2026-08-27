/* FUN_14064228 @ 0x14064228 */

short FUN_14064228(void)

{
  short sVar1;
  
  sVar1 = *(short *)(DAT_14064240 + 0x30) + 1;
  if (sVar1 != 0) {
    *(short *)(DAT_14064240 + 0x30) = sVar1;
    return sVar1;
  }
  *(undefined2 *)(DAT_14064240 + 0x30) = 1;
  return 1;
}

