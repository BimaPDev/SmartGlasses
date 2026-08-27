/* FUN_2c606fa8 @ 0x2c606fa8 */

void FUN_2c606fa8(undefined4 param_1,int param_2)

{
  int iVar1;
  int local_18;
  int local_14;
  
  local_14 = *DAT_2c606ff4;
  iVar1 = FUN_2c603c78(param_1,7,&local_18,0);
  if (iVar1 == 1) {
    if (local_18 == param_2) goto LAB_2c606fd4;
  }
  else if (iVar1 != 0) goto LAB_2c606fd4;
  FUN_2c606cc4(param_1,param_2,0);
LAB_2c606fd4:
  if (*DAT_2c606ff4 != local_14) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return;
}

