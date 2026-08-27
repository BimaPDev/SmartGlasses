/* FUN_2c473930 @ 0x2c473930 */

undefined4 FUN_2c473930(undefined4 param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 local_24;
  uint local_20;
  uint uStack_1c;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  int local_c;
  
  local_c = *DAT_2c473990;
  if ((param_2 == 0) || (param_4 == (undefined4 *)0x0)) {
    uVar1 = 0;
  }
  else {
    local_24 = DAT_2c473994;
    local_20 = (uint)(param_4 == (undefined4 *)0x0);
    uStack_1c = (uint)(param_4 == (undefined4 *)0x0);
    local_18 = param_1;
    local_14 = param_3;
    local_10 = param_2;
    uVar1 = FUN_2c476e50(&local_24);
    *param_4 = uVar1;
    uVar1 = FUN_2c47245c(7);
    FUN_2c476e80(&local_24,uVar1);
  }
  if (*DAT_2c473990 == local_c) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

