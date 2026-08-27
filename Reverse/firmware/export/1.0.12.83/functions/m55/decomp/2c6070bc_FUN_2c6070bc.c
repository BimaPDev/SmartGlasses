/* FUN_2c6070bc @ 0x2c6070bc */

void FUN_2c6070bc(undefined4 param_1,int param_2)

{
  int iVar1;
  int local_18;
  int local_14;
  
  local_14 = *DAT_2c607108;
  iVar1 = FUN_2c603c78(param_1,1,&local_18,0);
  if (iVar1 == 1) {
    if (local_18 == param_2) goto LAB_2c6070e8;
  }
  else if (iVar1 != 0) goto LAB_2c6070e8;
  FUN_2c606c7c(param_1,param_2,0);
LAB_2c6070e8:
  if (*DAT_2c607108 != local_14) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return;
}

