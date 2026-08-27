/* FUN_2c5f79a4 @ 0x2c5f79a4 */

void FUN_2c5f79a4(undefined4 param_1,int *param_2)

{
  int iVar1;
  char *pcVar2;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined4 local_14;
  undefined4 uStack_10;
  int local_c;
  
  local_c = *DAT_2c5f7a40;
  uStack_18 = DAT_2c5f7a3c;
  local_14 = 0;
  uStack_10 = 0;
  local_1c = param_1;
  if (param_2[1] == 0) {
    pcVar2 = (char *)*param_2;
  }
  else {
    pcVar2 = (char *)*param_2;
    do {
      iVar1 = FUN_2c5fb998((int)*pcVar2);
      if (iVar1 == 0) {
        iVar1 = param_2[1];
        goto joined_r0x2c5f79e8;
      }
      iVar1 = param_2[1];
      pcVar2 = (char *)(*param_2 + 1);
      *param_2 = (int)pcVar2;
      param_2[1] = iVar1 + -1;
    } while (iVar1 + -1 != 0);
  }
  iVar1 = 0;
LAB_2c5f7a0a:
  FUN_2c5f50c4(&local_1c,pcVar2,iVar1);
  FUN_2c5f6cec(&local_1c);
  FUN_2c5f6ba8(&local_1c);
  if (*DAT_2c5f7a40 == local_c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
joined_r0x2c5f79e8:
  if (iVar1 < 1) goto LAB_2c5f7a2e;
  iVar1 = FUN_2c5fb998((int)*(char *)(iVar1 + *param_2 + -1));
  if (iVar1 == 0) {
    pcVar2 = (char *)*param_2;
    iVar1 = param_2[1];
    goto LAB_2c5f7a0a;
  }
  iVar1 = param_2[1] + -1;
  param_2[1] = iVar1;
  goto joined_r0x2c5f79e8;
LAB_2c5f7a2e:
  pcVar2 = (char *)*param_2;
  goto LAB_2c5f7a0a;
}

