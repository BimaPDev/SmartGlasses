/* FUN_2c644324 @ 0x2c644324 */

int * FUN_2c644324(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int unaff_r5;
  int local_18;
  int local_14;
  
  local_14 = *DAT_2c644384;
  if (param_2 == 0) {
    *param_1 = -4;
    param_1[1] = 0;
  }
  else {
    iVar1 = FUN_2c645190(*(undefined4 *)(param_2 + 4),&local_18,0,param_3);
    if (iVar1 == -2) {
      iVar1 = 0x40;
    }
    else if (iVar1 == 0) {
      iVar1 = 0x20;
      unaff_r5 = local_18;
    }
    else if (iVar1 == -3) {
      iVar1 = 0;
    }
    *param_1 = iVar1;
    param_1[1] = unaff_r5;
  }
  if (*DAT_2c644384 == local_14) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

