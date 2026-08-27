/* FUN_2c606ff8 @ 0x2c606ff8 */

void FUN_2c606ff8(undefined4 param_1,int param_2)

{
  int iVar1;
  int local_18;
  int local_14;
  
  local_14 = *DAT_2c607044;
  iVar1 = FUN_2c603c78(param_1,8,&local_18,0);
  if (iVar1 == 1) {
    if (local_18 == param_2) goto LAB_2c607024;
  }
  else if (iVar1 != 0) goto LAB_2c607024;
  FUN_2c606cd0(param_1,param_2,0);
LAB_2c607024:
  if (*DAT_2c607044 != local_14) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return;
}

