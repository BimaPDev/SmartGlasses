/* FUN_2c4b3d9c @ 0x2c4b3d9c */

undefined4 FUN_2c4b3d9c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  
  local_c = *DAT_2c4b3de8;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0x3f800000;
  local_30 = param_1;
  local_20 = param_2;
  FUN_2c4b3c80(param_3,&local_30);
  if (*DAT_2c4b3de8 == local_c) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

