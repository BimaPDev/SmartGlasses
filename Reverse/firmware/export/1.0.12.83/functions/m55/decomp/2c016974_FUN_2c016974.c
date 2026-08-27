/* FUN_2c016974 @ 0x2c016974 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c016974(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (((param_1 & 0x2c000000) != 0x2c000000) && ((param_1 & 0x28000000) != 0x28000000)) {
                    /* WARNING: Subroutine does not return */
    FUN_2c00dfac(_DAT_2c016998,param_1,param_3,param_1 & 0x28000000,param_4);
  }
  return 0;
}

