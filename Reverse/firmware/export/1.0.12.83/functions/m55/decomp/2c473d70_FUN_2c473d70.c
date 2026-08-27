/* FUN_2c473d70 @ 0x2c473d70 */

undefined4
FUN_2c473d70(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
            undefined4 *param_13)

{
  undefined4 uVar1;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 uStack_30;
  int local_2c;
  
  local_2c = *DAT_2c473e18;
  uVar1 = 0;
  if (param_13 != (undefined4 *)0x0) {
    local_68 = *DAT_2c473e1c;
    uStack_64 = DAT_2c473e1c[1];
    uStack_60 = DAT_2c473e1c[2];
    uStack_50 = param_5;
    local_48 = param_6;
    local_4c = param_7;
    local_44 = param_8;
    local_40 = param_9;
    local_3c = param_10;
    local_38 = param_11;
    local_34 = param_12;
    local_5c = param_1;
    local_58 = param_2;
    local_54 = param_4;
    uStack_30 = param_3;
    uVar1 = FUN_2c476b28(&local_68);
    *param_13 = uVar1;
    uVar1 = FUN_2c47245c(7);
    FUN_2c476b58(&local_68,uVar1);
  }
  if (*DAT_2c473e18 == local_2c) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

