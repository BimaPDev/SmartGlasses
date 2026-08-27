/* FUN_2c60710c @ 0x2c60710c */

void FUN_2c60710c(undefined4 param_1,int param_2)

{
  int iVar1;
  int local_18;
  int local_14;
  
  local_14 = *DAT_2c607158;
  iVar1 = FUN_2c603c78(param_1,4,&local_18,0);
  if (iVar1 == 1) {
    if (local_18 == param_2) goto LAB_2c607138;
  }
  else if (iVar1 != 0) goto LAB_2c607138;
  FUN_2c606ca0(param_1,param_2,0);
LAB_2c607138:
  if (*DAT_2c607158 != local_14) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return;
}

