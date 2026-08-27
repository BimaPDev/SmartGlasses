/* FUN_2c472680 @ 0x2c472680 */

void FUN_2c472680(undefined4 param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  
  puVar2 = DAT_2c4726d4;
  piVar1 = DAT_2c4726d0;
  if (param_2 == 0) {
    return;
  }
  if (*DAT_2c4726d0 != 0) {
    FUN_2c644044(*DAT_2c4726d4,0xffffffff);
    FUN_2c47231c(*piVar1,DAT_2c4726d8,param_1,param_2);
    FUN_2c644080(*puVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x189,DAT_2c4726e8,DAT_2c4726e4,DAT_2c4726e0,DAT_2c4726dc);
}

