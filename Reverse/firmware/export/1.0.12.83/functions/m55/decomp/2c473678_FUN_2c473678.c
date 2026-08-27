/* FUN_2c473678 @ 0x2c473678 */

undefined4
FUN_2c473678(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 *param_9)

{
  undefined4 uVar1;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  int iStack_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  int local_2c;
  
  local_2c = *DAT_2c47371c;
  if ((param_3 == 0) || (param_9 == (undefined4 *)0x0)) {
    uVar1 = 0;
  }
  else {
    local_60 = *DAT_2c473720;
    uStack_5c = DAT_2c473720[1];
    uStack_58 = DAT_2c473720[2];
    uStack_34 = DAT_2c473720[0xb];
    local_30 = DAT_2c473720[0xc];
    local_44 = param_5;
    local_40 = param_6;
    local_3c = param_7;
    local_38 = param_8;
    local_54 = param_1;
    local_50 = param_2;
    local_4c = param_4;
    iStack_48 = param_3;
    uVar1 = FUN_2c4771e4(&local_60);
    *param_9 = uVar1;
    uVar1 = FUN_2c47245c(7);
    FUN_2c477214(&local_60,uVar1);
  }
  if (*DAT_2c47371c == local_2c) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

