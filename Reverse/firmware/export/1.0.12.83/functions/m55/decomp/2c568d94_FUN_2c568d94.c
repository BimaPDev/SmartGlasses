/* FUN_2c568d94 @ 0x2c568d94 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c568d94(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = _LAB_2c568dc0;
  *param_1 = _LAB_2c568dbc;
  param_1[1] = uVar1;
  if ((undefined4 *)param_1[4] != param_1 + 6) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c472680(0,param_1,uVar1,param_1 + 6,param_4);
}

