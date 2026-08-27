/* FUN_2c47389c @ 0x2c47389c */

undefined4
FUN_2c47389c(int param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 local_30;
  uint local_2c;
  uint uStack_28;
  undefined4 local_24;
  int local_20;
  undefined4 local_1c;
  int local_18;
  int local_14;
  
  local_14 = *DAT_2c473904;
  if ((param_5 == (undefined4 *)0x0 || param_3 == 0) || (param_1 == 0)) {
    uVar1 = 0;
  }
  else {
    local_30 = DAT_2c473908;
    local_2c = (uint)(param_1 == 0);
    uStack_28 = (uint)(param_1 == 0);
    local_24 = param_2;
    local_20 = param_1;
    local_1c = param_4;
    local_18 = param_3;
    uVar1 = FUN_2c476da8(&local_30);
    *param_5 = uVar1;
    uVar1 = FUN_2c47245c(7);
    FUN_2c476dd8(&local_30,uVar1);
  }
  if (*DAT_2c473904 == local_14) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

