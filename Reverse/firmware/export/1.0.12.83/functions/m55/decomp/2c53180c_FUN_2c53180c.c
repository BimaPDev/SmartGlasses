/* FUN_2c53180c @ 0x2c53180c */

void FUN_2c53180c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  
  local_14 = *DAT_2c531888;
  local_20 = DAT_2c53188c;
  local_2c = DAT_2c531894;
  local_1c = DAT_2c531898;
  local_28 = DAT_2c531890;
  uStack_24 = DAT_2c531890;
  uVar1 = FUN_2c48e738();
  FUN_2c48e5b4(uVar1,DAT_2c53189c,param_1);
  uVar2 = FUN_2c6729ec(param_5,param_6);
  FUN_2c48e518(uVar2,uVar1,DAT_2c5318a0);
  uVar2 = FUN_2c6729ec(param_3,param_4);
  FUN_2c48e518(uVar2,uVar1,DAT_2c5318a4);
  local_18 = uVar1;
  FUN_2c4861f4(&local_2c);
  if (*DAT_2c531888 == local_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

