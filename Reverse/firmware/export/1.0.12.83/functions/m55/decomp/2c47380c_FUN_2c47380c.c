/* FUN_2c47380c @ 0x2c47380c */

undefined4
FUN_2c47380c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 *param_6)

{
  undefined4 uVar1;
  undefined4 local_34;
  uint local_30;
  uint uStack_2c;
  undefined4 local_28;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  
  local_14 = *DAT_2c473870;
  if ((param_1 == 0) || (param_6 == (undefined4 *)0x0)) {
    uVar1 = 0;
  }
  else {
    local_34 = DAT_2c473874;
    local_1c = param_5;
    local_30 = (uint)(param_6 == (undefined4 *)0x0);
    uStack_2c = (uint)(param_6 == (undefined4 *)0x0);
    local_28 = param_2;
    local_24 = param_1;
    local_20 = param_3;
    local_18 = param_4;
    uVar1 = FUN_2c476d00(&local_34);
    *param_6 = uVar1;
    uVar1 = FUN_2c47245c(7);
    FUN_2c476d30(&local_34,uVar1);
  }
  if (*DAT_2c473870 == local_14) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

