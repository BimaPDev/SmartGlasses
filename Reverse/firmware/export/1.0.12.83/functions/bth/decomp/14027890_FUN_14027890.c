/* FUN_14027890 @ 0x14027890 */

void FUN_14027890(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_1 < 0xf) {
    *(uint *)(DAT_140278b0 + 4) = *(uint *)(DAT_140278b0 + 4) & 0xfffff87f | param_1 << 7;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402b0f8(DAT_140278b4,param_1,param_3,param_4,param_4);
}

