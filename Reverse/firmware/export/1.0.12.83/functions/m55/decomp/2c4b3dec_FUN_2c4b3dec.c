/* FUN_2c4b3dec @ 0x2c4b3dec */

undefined4 FUN_2c4b3dec(float param_1,undefined4 param_2)

{
  undefined4 uVar1;
  float fVar2;
  undefined4 local_38;
  float local_34;
  undefined4 local_30;
  float local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  
  local_14 = *DAT_2c4b3e78;
  fVar2 = (param_1 / DAT_2c4b3e70) * DAT_2c4b3e74;
  uVar1 = FUN_2c666230();
  local_2c = (float)FUN_2c6670a0(fVar2);
  local_34 = -local_2c;
  local_30 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0x3f800000;
  local_38 = uVar1;
  local_28 = uVar1;
  FUN_2c4b3c80(param_2,&local_38);
  if (*DAT_2c4b3e78 == local_14) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

