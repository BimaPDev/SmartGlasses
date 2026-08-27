/* FUN_2c49b35c @ 0x2c49b35c */

void FUN_2c49b35c(undefined4 param_1,uint param_2,uint param_3)

{
  int iVar1;
  byte local_15;
  int local_14;
  
  local_14 = *DAT_2c49b3b4;
  iVar1 = FUN_2c49b318(param_1,&local_15,param_3,0);
  if (iVar1 == 0) {
    if ((param_2 & (local_15 ^ param_3)) != 0) {
      local_15 = local_15 & ~(byte)param_2 | (byte)param_3 & (byte)param_2;
      FUN_2c49b2c0(param_1);
    }
  }
  if (*DAT_2c49b3b4 == local_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

