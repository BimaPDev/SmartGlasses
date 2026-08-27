/* FUN_2c4e0504 @ 0x2c4e0504 */

void FUN_2c4e0504(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *local_18;
  int local_14;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  local_18 = &uStack_8;
  local_14 = *DAT_2c4e053c;
  uStack_8 = param_3;
  uStack_4 = param_4;
  FUN_2c4e0438(param_1,param_2,&local_18);
  if (*DAT_2c4e053c != local_14) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return;
}

