/* FUN_2c4eb680 @ 0x2c4eb680 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4eb680(void)

{
  int *piVar1;
  
  piVar1 = _LAB_2c4eb6b4;
  if (*_LAB_2c4eb6b4 != 0) {
    FUN_2c60251c(*_LAB_2c4eb6b4,_DAT_2c4eb6b8);
    FUN_2c60251c(*piVar1,_DAT_2c4eb6bc);
    FUN_2c606abc(*piVar1,2);
    FUN_2c606abc(*piVar1,4);
    FUN_2c606b80(*piVar1,0x2e);
    *piVar1 = 0;
  }
  return;
}

