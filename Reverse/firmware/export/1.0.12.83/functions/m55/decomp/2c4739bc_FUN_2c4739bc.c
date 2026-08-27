/* FUN_2c4739bc @ 0x2c4739bc */

undefined4
FUN_2c4739bc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 *param_8)

{
  undefined4 uVar1;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int local_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined4 local_28;
  int local_24;
  
  local_24 = *DAT_2c473a4c;
  if ((param_1 == 0) || (param_8 == (undefined4 *)0x0)) {
    uVar1 = 0;
  }
  else {
    local_4c = *DAT_2c473a50;
    uStack_48 = DAT_2c473a50[1];
    uStack_44 = DAT_2c473a50[2];
    local_2c = param_6;
    uStack_30 = param_5;
    local_28 = param_7;
    local_40 = param_1;
    local_3c = param_2;
    uStack_38 = param_3;
    local_34 = param_4;
    uVar1 = FUN_2c476ef8(&local_4c);
    *param_8 = uVar1;
    uVar1 = FUN_2c47245c(7);
    FUN_2c476f28(&local_4c,uVar1);
  }
  if (*DAT_2c473a4c == local_24) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

