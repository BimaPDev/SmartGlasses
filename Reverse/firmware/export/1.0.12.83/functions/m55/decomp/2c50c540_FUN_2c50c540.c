/* FUN_2c50c540 @ 0x2c50c540 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_2c50c540(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  
  *param_1 = _DAT_2c50c580;
  piVar1 = param_1 + 0xc;
  do {
    piVar2 = piVar1 + 1;
    if (*piVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
    piVar1 = piVar2;
  } while (piVar2 != param_1 + 0x11);
  FUN_2c62ae04(param_1 + 6);
  FUN_2c62ae04(param_1 + 4);
  FUN_2c5068ac(param_1);
  return param_1;
}

