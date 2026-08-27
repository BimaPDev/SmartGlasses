/* FUN_14028a0c @ 0x14028a0c */

bool FUN_14028a0c(uint param_1)

{
  if (param_1 >> 4 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1402b0f8(DAT_14028a40);
  }
  if (-1 < (int)(param_1 << 0x1c)) {
    return (1 << (param_1 & 0xf) & *(uint *)(DAT_14028a3c + 0x1c) & 0xff) != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402b0f8(DAT_14028a44);
}

