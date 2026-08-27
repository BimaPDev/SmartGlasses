/* FUN_2c531704 @ 0x2c531704 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c531704(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  int local_14;
  
  local_14 = *_LAB_2c5317e0;
  switch(param_1) {
  case 0:
    uStack_1c = DAT_2c5317f8;
    break;
  case 1:
    local_24 = _LAB_2c5317e4;
    local_2c = DAT_2c5317e8;
    uStack_28 = _LAB_2c5317e4;
    local_20 = DAT_2c5317ec;
    uStack_1c = DAT_2c5317fc;
    uVar1 = FUN_2c48e738();
    uVar3 = FUN_2c6729ec(param_3,param_4);
    FUN_2c48e518(uVar3,uVar1,DAT_2c5317f4);
    uVar2 = FUN_2c6729ec(param_5,param_6);
    uVar3 = DAT_2c531800;
    goto LAB_2c53174c;
  case 2:
    uStack_1c = DAT_2c531804;
    break;
  case 3:
    uStack_1c = DAT_2c531808;
    break;
  case 4:
    uStack_1c = DAT_2c5317f0;
    break;
  default:
    goto switchD_2c53171a_default;
  }
  uStack_28 = _LAB_2c5317e4;
  local_2c = DAT_2c5317e8;
  local_20 = DAT_2c5317ec;
  local_24 = uStack_28;
  uVar1 = FUN_2c48e738();
  uVar2 = FUN_2c6729ec(param_3,param_4);
  uVar3 = DAT_2c5317f4;
LAB_2c53174c:
  FUN_2c48e518(uVar2,uVar1,uVar3);
  local_18 = uVar1;
  FUN_2c4861f4(&local_2c);
switchD_2c53171a_default:
  if (*_LAB_2c5317e0 != local_14) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return;
}

