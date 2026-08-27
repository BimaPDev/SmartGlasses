/* FUN_2c4e4508 @ 0x2c4e4508 */

int FUN_2c4e4508(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int local_18;
  int local_14;
  int iStack_10;
  
  local_14 = *DAT_2c4e4554;
  local_18 = 0;
  iStack_10 = param_3;
  iVar1 = FUN_2c4e4498(param_1,&local_18);
  if (iVar1 == 0) {
    param_3 = 0;
  }
  else {
    if (local_18 <= param_3) {
      param_3 = local_18;
    }
    FUN_2c674668(param_2,iVar1,param_3);
  }
  if (*DAT_2c4e4554 != local_14) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return param_3;
}

