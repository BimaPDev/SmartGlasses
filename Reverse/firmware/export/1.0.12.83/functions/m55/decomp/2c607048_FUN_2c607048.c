/* FUN_2c607048 @ 0x2c607048 */

void FUN_2c607048(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  int local_18;
  int local_14;
  
  local_14 = *DAT_2c6070b8;
  iVar1 = FUN_2c603c78(param_1,1,&local_18,0);
  if (iVar1 == 1) {
    if (local_18 != param_2) goto LAB_2c60706c;
  }
  else if (iVar1 == 0) {
LAB_2c60706c:
    FUN_2c606c7c(param_1,param_2,0);
  }
  iVar1 = FUN_2c603c78(param_1,4,&local_18,0);
  if (iVar1 == 1) {
    if (local_18 == param_3) goto LAB_2c607092;
  }
  else if (iVar1 != 0) goto LAB_2c607092;
  FUN_2c606ca0(param_1,param_3,0);
LAB_2c607092:
  if (*DAT_2c6070b8 != local_14) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return;
}

