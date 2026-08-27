/* FUN_2c01747c @ 0x2c01747c */

undefined4 FUN_2c01747c(uint param_1,undefined4 *param_2)

{
  char *pcVar1;
  
  pcVar1 = DAT_2c0174b0;
  if (param_2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c00dfac(DAT_2c0174b8,DAT_2c0174b4);
  }
  *param_2 = 0;
  if (*pcVar1 != '\0') {
    if (0x1a < param_1) {
      return 3;
    }
    if (pcVar1[param_1 * 0x2c + 4] != '\0') {
      *param_2 = *(undefined4 *)(pcVar1 + param_1 * 0x2c + 8);
      return 0;
    }
  }
  return 7;
}

