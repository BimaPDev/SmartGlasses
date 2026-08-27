/* FUN_2c5d7834 @ 0x2c5d7834 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_2c5d7834(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)param_1[3];
  *param_1 = _LAB_2c5d788c;
  if ((undefined4 *)param_1[4] != puVar1) {
    do {
      puVar2 = puVar1 + 1;
      puVar1 = (undefined4 *)*puVar1;
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = _LAB_2c5d7890;
        if ((undefined4 *)puVar1[1] == puVar1 + 3) {
                    /* WARNING: Subroutine does not return */
          FUN_2c472680(0,puVar1);
        }
                    /* WARNING: Subroutine does not return */
        FUN_2c472680(0);
      }
      puVar1 = puVar2;
    } while ((undefined4 *)param_1[4] != puVar2);
    puVar1 = (undefined4 *)param_1[3];
    if ((undefined4 *)param_1[4] != puVar1) {
      param_1[4] = puVar1;
    }
  }
  if (puVar1 == (undefined4 *)0x0) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c472680(0);
}

