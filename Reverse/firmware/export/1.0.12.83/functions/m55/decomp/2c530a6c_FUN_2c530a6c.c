/* FUN_2c530a6c @ 0x2c530a6c */

void FUN_2c530a6c(int *param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (*param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,DAT_2c530c60,399,DAT_2c530c5c,DAT_2c530c6c);
  }
  if (*(char *)(*param_2 + 4) == '\x13') {
    uVar1 = 0x197;
    uVar2 = DAT_2c530c74;
  }
  else {
    if (param_1[2] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(4,DAT_2c530c60,0x19c,DAT_2c530c5c,DAT_2c530c64);
    }
    uVar1 = 0x1a6;
    uVar2 = DAT_2c530c58;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,DAT_2c530c60,uVar1,DAT_2c530c5c,uVar2);
}

