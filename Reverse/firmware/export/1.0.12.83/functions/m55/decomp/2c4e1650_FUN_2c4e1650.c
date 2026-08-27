/* FUN_2c4e1650 @ 0x2c4e1650 */

undefined4 FUN_2c4e1650(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  int local_c;
  
  local_c = *DAT_2c4e1694;
  iStack_18 = param_1;
  uStack_14 = param_2;
  uStack_10 = param_3;
  FUN_2c4e2788(&iStack_18,param_1 + 0x10c,param_3,0);
  uVar1 = (**(code **)(**(int **)(param_1 + 0x104) + 0x28))();
  FUN_2c4e279e(&iStack_18);
  if (*DAT_2c4e1694 != local_c) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return uVar1;
}

