/* FUN_2c473be8 @ 0x2c473be8 */

undefined4
FUN_2c473be8(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10,undefined4 param_11,undefined4 param_12,undefined4 param_13,
            undefined4 param_14,undefined4 param_15,undefined4 param_16,undefined4 param_17,
            undefined4 param_18,undefined4 param_19,undefined4 param_20,undefined4 param_21,
            undefined4 param_22,undefined4 *param_23)

{
  undefined4 uVar1;
  undefined1 auStack_90 [12];
  undefined4 local_84;
  undefined4 uStack_80;
  int local_7c;
  undefined4 uStack_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  int local_2c;
  
  local_2c = *DAT_2c473cac;
  if ((param_3 == 0) || (param_23 == (undefined4 *)0x0)) {
    uVar1 = 0;
  }
  else {
    FUN_2c674668(auStack_90,DAT_2c473cb0,0x60,param_22,param_22,param_5);
    local_74 = param_6;
    local_6c = param_8;
    local_68 = param_7;
    local_64 = param_9;
    local_58 = param_13;
    local_60 = param_11;
    uStack_5c = param_12;
    local_50 = param_15;
    uStack_4c = param_16;
    local_48 = param_17;
    local_40 = param_19;
    uStack_3c = param_20;
    local_38 = param_21;
    local_84 = param_1;
    uStack_80 = param_2;
    local_7c = param_3;
    uStack_78 = param_4;
    local_70 = param_5;
    local_34 = param_22;
    uVar1 = FUN_2c4768f4(auStack_90);
    *param_23 = uVar1;
    uVar1 = FUN_2c47245c(7);
    FUN_2c476924(auStack_90,uVar1);
  }
  if (*DAT_2c473cac == local_2c) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

