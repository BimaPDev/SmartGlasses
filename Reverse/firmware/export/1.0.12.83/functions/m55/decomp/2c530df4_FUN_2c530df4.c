/* FUN_2c530df4 @ 0x2c530df4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_2c530df4(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar3;
  undefined4 uStack_18;
  int iStack_14;
  undefined4 *puVar2;
  
  puVar3 = (undefined4 *)param_1[1];
  iStack_14 = *_LAB_2c530e48;
  puVar1 = (undefined4 *)*param_1;
  if ((undefined4 *)*param_1 != puVar3) {
    do {
      puVar2 = puVar1 + 1;
      uStack_18 = *puVar1;
      FUN_2c5315e0(&uStack_18);
      puVar1 = puVar2;
    } while (puVar3 != puVar2);
    puVar3 = (undefined4 *)*param_1;
    if ((undefined4 *)param_1[1] != puVar3) {
      param_1[1] = puVar3;
    }
  }
  if (puVar3 != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0,puVar3);
  }
  if (*_LAB_2c530e48 == iStack_14) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

