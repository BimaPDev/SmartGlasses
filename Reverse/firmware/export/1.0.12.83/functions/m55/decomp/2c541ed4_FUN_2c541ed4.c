/* FUN_2c541ed4 @ 0x2c541ed4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 *
FUN_2c541ed4(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 extraout_r3;
  undefined4 uVar1;
  
  uVar1 = _LAB_2c541f40;
  *param_1 = _LAB_2c541f40;
  if ((int *)param_1[0x30] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x30] + 0xc))();
    uVar1 = extraout_r3;
  }
  if (param_1[0x2c] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (param_1[0xd] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0,param_1[0xd]);
  }
  FUN_2c674268(param_1[0xb],0,param_1[0xc] << 2,uVar1,param_4);
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  if ((undefined4 *)param_1[0xb] != param_1 + 0x11) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680();
  }
  FUN_2c541e5c(param_1 + 7);
  FUN_2c541e5c(param_1 + 4);
  FUN_2c541e5c(param_1 + 1);
  return param_1;
}

