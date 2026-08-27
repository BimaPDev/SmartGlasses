/* FUN_2c4a09bc @ 0x2c4a09bc */

undefined4 FUN_2c4a09bc(undefined4 param_1,uint *param_2,undefined4 param_3)

{
  int iVar1;
  uint local_18;
  int local_14;
  
  local_14 = *DAT_2c4a0a24;
  iVar1 = FUN_2c4a0640(param_1,&local_18,param_3,0);
  if (iVar1 == 0) {
    *param_2 = local_18 << 0x18 | (local_18 >> 8 & 0xff) << 0x10 | (local_18 >> 0x10 & 0xff) << 8 |
               local_18 >> 0x18;
  }
  else {
    iVar1 = FUN_2c4a0640(param_1,&local_18);
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x225,DAT_2c4a0a30,DAT_2c4a0a2c,DAT_2c4a0a28);
    }
    *param_2 = local_18 << 0x18 | (local_18 >> 8 & 0xff) << 0x10 | (local_18 >> 0x10 & 0xff) << 8 |
               local_18 >> 0x18;
  }
  if (*DAT_2c4a0a24 == local_14) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

