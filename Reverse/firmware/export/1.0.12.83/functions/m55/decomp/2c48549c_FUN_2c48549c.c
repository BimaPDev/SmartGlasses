/* FUN_2c48549c @ 0x2c48549c */

void FUN_2c48549c(void)

{
  int iVar1;
  
  iVar1 = FUN_2c46db64();
  iVar1 = (**(code **)(iVar1 + 4))(DAT_2c485514);
  if (iVar1 != 0) {
    FUN_2c6741e8(0x711,DAT_2c48552c,DAT_2c485524);
    return;
  }
  iVar1 = FUN_2c46db90();
  iVar1 = (**(code **)(iVar1 + 4))(DAT_2c485518);
  if (iVar1 == 0) {
    FUN_2c47a798();
    FUN_2c47cdc8();
    FUN_2c481da0();
    iVar1 = FUN_2c64419c(DAT_2c48551c);
    *DAT_2c485520 = iVar1;
    if (iVar1 != 0) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    TRACE(4,0xe4,DAT_2c48553c,DAT_2c485538,DAT_2c485534,DAT_2c485530);
  }
  FUN_2c6741e8(0x711,DAT_2c485528,DAT_2c485524);
  return;
}

