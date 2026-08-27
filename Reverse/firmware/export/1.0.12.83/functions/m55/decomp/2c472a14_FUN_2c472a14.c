/* FUN_2c472a14 @ 0x2c472a14 */

void FUN_2c472a14(void)

{
  int *piVar1;
  undefined4 *puVar2;
  
  puVar2 = DAT_2c472a5c;
  piVar1 = DAT_2c472a58;
  if (*DAT_2c472a58 != 0) {
    FUN_2c644044(*DAT_2c472a5c,0xffffffff);
    FUN_2c4721a8(*piVar1,DAT_2c472a60);
    FUN_2c644080(*puVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x232,DAT_2c472a70,DAT_2c472a6c,DAT_2c472a68,DAT_2c472a64);
}

