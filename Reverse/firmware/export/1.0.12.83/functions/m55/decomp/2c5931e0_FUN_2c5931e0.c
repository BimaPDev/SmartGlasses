/* FUN_2c5931e0 @ 0x2c5931e0 */

void FUN_2c5931e0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_38;
  undefined4 local_34;
  undefined4 *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  int local_14;
  
  local_34 = *(undefined4 *)(param_2 + 4);
  local_14 = *DAT_2c593244;
  local_2c = 1;
  local_20 = 0x3f800000;
  local_38 = DAT_2c593248;
  local_28 = 0;
  uStack_24 = 0;
  local_1c = 0;
  uStack_18 = 0;
  local_30 = &uStack_18;
  FUN_2c592b00(param_1,&local_38,&local_30,param_3,param_4);
  FUN_2c5561f0(&local_30);
  if (local_30 != &uStack_18) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (*DAT_2c593244 == local_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

