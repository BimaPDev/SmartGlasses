/* FUN_2c6072bc @ 0x2c6072bc */

void FUN_2c6072bc(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int local_18;
  int local_14;
  
  local_14 = *DAT_2c607334;
  FUN_2c606cdc(param_1,param_2,0);
  iVar1 = FUN_2c603c78(param_1,7,&local_18,0);
  if (iVar1 == 1) {
    if (local_18 != param_3) goto LAB_2c6072e8;
  }
  else if (iVar1 == 0) {
LAB_2c6072e8:
    FUN_2c606cc4(param_1,param_3,0);
  }
  iVar1 = FUN_2c603c78(param_1,8,&local_18,0);
  if (iVar1 == 1) {
    if (local_18 == param_4) goto LAB_2c60730e;
  }
  else if (iVar1 != 0) goto LAB_2c60730e;
  FUN_2c606cd0(param_1,param_4,0);
LAB_2c60730e:
  if (*DAT_2c607334 != local_14) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return;
}

