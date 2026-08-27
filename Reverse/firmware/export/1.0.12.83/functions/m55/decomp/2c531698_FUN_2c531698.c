/* FUN_2c531698 @ 0x2c531698 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_2c531698(undefined4 *param_1,undefined4 param_2,undefined1 param_3)

{
  int *piVar1;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined1 uStack_18;
  int iStack_14;
  
  iStack_14 = *_LAB_2c531700;
  uStack_2c._1_3_ = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_1c = 0;
  uStack_18 = 0;
  FUN_2c6435c4((int)&uStack_2c + 1,param_2,0);
  uStack_2c = CONCAT31(uStack_2c._1_3_,param_3);
  *param_1 = uStack_2c;
  param_1[1] = uStack_28;
  param_1[3] = uStack_20;
  piVar1 = _LAB_2c531700;
  param_1[2] = uStack_24;
  param_1[4] = uStack_1c;
  *(undefined1 *)(param_1 + 5) = uStack_18;
  if (*piVar1 == iStack_14) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

