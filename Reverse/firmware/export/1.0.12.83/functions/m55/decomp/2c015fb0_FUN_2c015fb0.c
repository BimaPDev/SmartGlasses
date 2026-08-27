/* FUN_2c015fb0 @ 0x2c015fb0 */

void FUN_2c015fb0(int param_1,undefined1 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  
  if (param_1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c00dfac(DAT_2c016000,DAT_2c015ffc,param_1,param_4,param_4);
  }
  puVar1 = DAT_2c015ff0;
  do {
    if (param_2 == puVar1 + 4) {
      *puVar1 = 0;
      return;
    }
    puVar1 = puVar1 + 0x24;
  } while (puVar1 != DAT_2c015ff0 + 0xd8);
  if (param_2 == DAT_2c015ff4) {
    param_2[-1] = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c00dfac(DAT_2c015ff8,DAT_2c015ffc,param_2,DAT_2c015ff4,param_4);
}

