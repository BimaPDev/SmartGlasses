/* FUN_2c606f34 @ 0x2c606f34 */

void FUN_2c606f34(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  int local_18;
  int local_14;
  
  local_14 = *DAT_2c606fa4;
  iVar1 = FUN_2c603c78(param_1,7,&local_18,0);
  if (iVar1 == 1) {
    if (local_18 != param_2) goto LAB_2c606f58;
  }
  else if (iVar1 == 0) {
LAB_2c606f58:
    FUN_2c606cc4(param_1,param_2,0);
  }
  iVar1 = FUN_2c603c78(param_1,8,&local_18,0);
  if (iVar1 == 1) {
    if (local_18 == param_3) goto LAB_2c606f7e;
  }
  else if (iVar1 != 0) goto LAB_2c606f7e;
  FUN_2c606cd0(param_1,param_3,0);
LAB_2c606f7e:
  if (*DAT_2c606fa4 != local_14) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return;
}

