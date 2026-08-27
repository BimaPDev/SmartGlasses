/* FUN_2c473e44 @ 0x2c473e44 */

undefined4
FUN_2c473e44(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
            undefined4 param_13,undefined4 param_14,undefined4 param_15,undefined4 param_16,
            undefined4 param_17,undefined4 param_18,undefined4 param_19,undefined4 param_20,
            undefined4 param_21,undefined4 param_22,undefined4 param_23,undefined4 param_24,
            undefined4 param_25,undefined4 param_26,undefined4 param_27,undefined4 param_28,
            undefined4 param_29,undefined4 param_30,undefined4 param_31,undefined4 param_32,
            undefined4 *param_33)

{
  undefined4 uVar1;
  undefined1 auStack_b8 [12];
  undefined4 local_ac;
  undefined4 uStack_a8;
  undefined4 local_a4;
  undefined4 uStack_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  int local_2c;
  
  local_2c = *DAT_2c473f2c;
  uVar1 = 0;
  if (param_33 != (undefined4 *)0x0) {
    FUN_2c674668(auStack_b8,DAT_2c473f30,0x88);
    local_9c = param_5;
    local_6c = param_17;
    local_80 = param_12;
    local_70 = param_18;
    local_94 = param_7;
    local_8c = param_9;
    local_84 = param_11;
    local_68 = param_19;
    uStack_64 = param_20;
    local_98 = param_6;
    local_60 = param_21;
    local_90 = param_8;
    local_88 = param_10;
    local_58 = param_23;
    uStack_54 = param_24;
    local_7c = param_13;
    local_78 = param_15;
    uStack_74 = param_16;
    local_50 = param_25;
    uStack_4c = param_26;
    local_48 = param_27;
    local_40 = param_29;
    local_44 = param_28;
    local_38 = param_31;
    uStack_34 = param_32;
    local_ac = param_1;
    uStack_a8 = param_2;
    local_a4 = param_3;
    uStack_a0 = param_4;
    uVar1 = FUN_2c476a54(auStack_b8);
    *param_33 = uVar1;
    uVar1 = FUN_2c47245c(7);
    FUN_2c476a84(auStack_b8,uVar1);
  }
  if (*DAT_2c473f2c == local_2c) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

