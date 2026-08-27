/* FUN_2c4a5988 @ 0x2c4a5988 */

void FUN_2c4a5988(undefined4 param_1,uint *param_2,undefined4 param_3)

{
  int iVar1;
  uint local_18;
  int local_14;
  
  local_14 = *DAT_2c4a59d0;
  iVar1 = FUN_2c4a5808(param_1,&local_18,param_3,0);
  if ((iVar1 == 0) || (iVar1 = FUN_2c4a5808(param_1,&local_18), iVar1 == 0)) {
    *param_2 = local_18 << 0x18 | (local_18 >> 8 & 0xff) << 0x10 | (local_18 >> 0x10 & 0xff) << 8 |
               local_18 >> 0x18;
  }
  else {
    *DAT_2c4a59d4 = 1;
  }
  if (*DAT_2c4a59d0 == local_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

