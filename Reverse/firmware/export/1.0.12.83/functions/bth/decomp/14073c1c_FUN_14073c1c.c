/* FUN_14073c1c @ 0x14073c1c */

undefined4 FUN_14073c1c(uint param_1,undefined4 param_2)

{
  if (param_1 < 7) {
    *(undefined4 *)(DAT_14073c4c + param_1 * 4 + 4) = param_2;
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402a64c(0x44,DAT_14073c54,0x65,DAT_14073c50,param_1,param_2);
}

