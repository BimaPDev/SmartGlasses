/* FUN_2c47cb26 @ 0x2c47cb26 */

void FUN_2c47cb26(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  
  puVar2 = DAT_2c4726d4;
  piVar1 = DAT_2c4726d0;
  if (*param_1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(3);
  }
  if (param_1 != (int *)0x0) {
    if (*DAT_2c4726d0 != 0) {
      FUN_2c644044(*DAT_2c4726d4,0xffffffff);
      FUN_2c47231c(*piVar1,DAT_2c4726d8,3,param_1);
      FUN_2c644080(*puVar2);
      return;
    }
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x189,DAT_2c4726e8,DAT_2c4726e4,DAT_2c4726e0,DAT_2c4726dc);
  }
  return;
}

