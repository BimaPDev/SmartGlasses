/* FUN_2c5d8cf8 @ 0x2c5d8cf8 */

void FUN_2c5d8cf8(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 local_18;
  int local_14;
  
  local_14 = *DAT_2c5d8d78;
  uVar1 = FUN_2c6313f4(*(undefined4 *)(param_1 + 4),param_2,param_3,0);
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  FUN_2c63140c(uVar1,param_2);
  FUN_2c6072bc(*(undefined4 *)(param_1 + 0xc),9,0);
  if (param_3 != 0) {
    FUN_2c602454(*(undefined4 *)(param_1 + 0xc),DAT_2c5d8d80,*DAT_2c5d8d7c,0);
    local_18 = FUN_2c620f3c(param_3,*(undefined4 *)(param_1 + 0xc),0);
    puVar2 = *(undefined4 **)(param_1 + 0x38);
    if (puVar2 == *(undefined4 **)(param_1 + 0x3c)) {
      FUN_2c5d8c2c(param_1 + 0x34,puVar2,&local_18);
    }
    else {
      *puVar2 = local_18;
      *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 4;
    }
  }
  if (*DAT_2c5d8d78 == local_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

