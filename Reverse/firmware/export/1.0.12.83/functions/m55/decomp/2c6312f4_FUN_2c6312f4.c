/* FUN_2c6312f4 @ 0x2c6312f4 */

void FUN_2c6312f4(int param_1)

{
  ushort local_14;
  ushort local_12;
  ushort local_10;
  ushort local_e;
  uint local_c;
  
  local_c = *DAT_2c631364;
  FUN_2c611f58(&local_14,(int)*(short *)(param_1 + 0x2c),(int)*(short *)(param_1 + 0x2e),
               (int)*(short *)(param_1 + 0x30),*(undefined2 *)(param_1 + 0x36),param_1 + 0x32,
               *(undefined1 *)(param_1 + 0x5c));
  if ((*DAT_2c631364 ^ local_c) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail((local_10 + 1) - (uint)local_14 & 0xffff |
                 ((local_e + 1) - (uint)local_12) * 0x10000,(uint)local_12,*DAT_2c631364 ^ local_c,0
                );
}

