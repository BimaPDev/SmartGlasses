/* FUN_2c5de958 @ 0x2c5de958 */

undefined4 FUN_2c5de958(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int local_18;
  int local_14;
  
  iVar2 = *(int *)(param_1 + 0x24);
  local_14 = *DAT_2c5de9f4;
  if (iVar2 != *(int *)(param_1 + 0x14)) {
    if (iVar2 == *(int *)(param_1 + 0x28)) {
      local_18 = *(int *)(*(int *)(*(int *)(param_1 + 0x30) + -4) + 0x1fc);
      if (local_18 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_2c472680(0);
      }
    }
    else {
      local_18 = *(int *)(iVar2 + -4);
      if (local_18 != 0) {
        *(int *)(param_1 + 0x24) = iVar2 + -4;
        uVar1 = FUN_2c5dd304(param_1);
        if (*(int **)(param_1 + 0x24) == (int *)(*(int *)(param_1 + 0x2c) + -4)) {
          FUN_2c5de330(param_1 + 0xc,&local_18);
        }
        else {
          **(int **)(param_1 + 0x24) = local_18;
          *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 4;
        }
        goto LAB_2c5de99e;
      }
    }
  }
  uVar1 = 0;
LAB_2c5de99e:
  if (*DAT_2c5de9f4 == local_14) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

