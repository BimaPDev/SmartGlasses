/* FUN_2c568d3c @ 0x2c568d3c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_2c568d3c(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = _LAB_2c568d60;
  *param_1 = _LAB_2c568d5c;
  param_1[1] = uVar1;
  if ((undefined4 *)param_1[4] != param_1 + 6) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  return param_1;
}

