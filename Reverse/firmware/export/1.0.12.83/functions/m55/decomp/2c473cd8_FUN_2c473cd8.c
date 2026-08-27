/* FUN_2c473cd8 @ 0x2c473cd8 */

undefined4 FUN_2c473cd8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int local_28;
  undefined4 local_24;
  undefined4 uStack_20;
  int local_1c;
  
  local_1c = *DAT_2c473d44;
  if ((param_1 == 0) || (param_4 == (undefined4 *)0x0)) {
    uVar1 = 0;
  }
  else {
    local_34 = *DAT_2c473d48;
    uStack_30 = DAT_2c473d48[1];
    uStack_2c = DAT_2c473d48[2];
    local_28 = param_1;
    local_24 = param_3;
    uStack_20 = param_2;
    uVar1 = FUN_2c47699c(&local_34);
    *param_4 = uVar1;
    uVar1 = FUN_2c47245c(7);
    FUN_2c4769cc(&local_34,uVar1);
  }
  if (*DAT_2c473d44 == local_1c) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

