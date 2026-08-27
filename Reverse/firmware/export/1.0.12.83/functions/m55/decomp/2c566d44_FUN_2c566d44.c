/* FUN_2c566d44 @ 0x2c566d44 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 *
FUN_2c566d44(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  *param_1 = _LAB_2c566dd0;
  uVar1 = _LAB_2c566dd4;
  if ((undefined4 *)param_1[0x14] != param_1 + 0x16) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  puVar2 = (undefined4 *)param_1[0x13];
  if (puVar2 == (undefined4 *)0x0) {
    if ((undefined4 *)param_1[0xd] != param_1 + 0xf) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
    if ((undefined4 *)param_1[7] != param_1 + 9) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
    if ((undefined4 *)param_1[1] != param_1 + 3) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
    return param_1;
  }
  *puVar2 = _LAB_2c566dd4;
  if ((undefined4 *)puVar2[0xd] != puVar2 + 0xf) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if ((undefined4 *)puVar2[7] != puVar2 + 9) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if ((undefined4 *)puVar2[1] != puVar2 + 3) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c472680(0,puVar2,uVar1,puVar2 + 3,param_4);
}

