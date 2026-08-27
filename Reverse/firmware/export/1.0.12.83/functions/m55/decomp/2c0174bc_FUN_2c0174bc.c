/* FUN_2c0174bc @ 0x2c0174bc */

undefined4 FUN_2c0174bc(uint param_1,char *param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_2 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c00dfac(DAT_2c0174f4,DAT_2c0174f0,param_3,param_4,param_4);
  }
  if (*DAT_2c0174ec != '\0') {
    if (0x1a < param_1) {
      return 3;
    }
    if (DAT_2c0174ec[param_1 * 0x2c + 4] != '\0') {
      *param_2 = DAT_2c0174ec[param_1 * 0x2c + 5];
      return 0;
    }
  }
  return 7;
}

