/* FUN_2c473b0c @ 0x2c473b0c */

undefined4 FUN_2c473b0c(undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined4 local_14;
  undefined4 uStack_10;
  int local_c;
  
  local_c = *DAT_2c473b64;
  local_1c = DAT_2c473b60;
  uStack_18 = 0;
  local_14 = 0;
  uStack_10 = param_1;
  uVar1 = FUN_2c476fe8(&local_1c,0);
  *param_2 = uVar1;
  uVar1 = FUN_2c47245c(7,uVar1);
  FUN_2c477018(&local_1c,uVar1);
  if (*DAT_2c473b64 == local_c) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

