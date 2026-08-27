/* FUN_2c0095cc @ 0x2c0095cc */

void FUN_2c0095cc(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_1 < 0xf) {
    *(uint *)(DAT_2c0095ec + 4) = *(uint *)(DAT_2c0095ec + 4) & 0xfffff87f | param_1 << 7;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c00c25c(DAT_2c0095f0,param_1,param_3,param_4,param_4);
}

