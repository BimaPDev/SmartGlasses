/* FUN_2c497684 @ 0x2c497684 */

void FUN_2c497684(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined1 auStack_20 [4];
  int local_1c;
  
  local_1c = *DAT_2c497724;
  auStack_20[3] = (char)param_2;
  if (param_1 == 0) {
    FUN_2c4c01d0(0x21,param_2,param_3,0);
    iVar1 = -(param_4 + 8U & 0xfffffff8);
    FUN_2c6741b8(auStack_20 + 3,auStack_20 + iVar1,param_4 + 1);
    FUN_2c674668(param_3,auStack_20 + iVar1 + 1,param_4);
    FUN_2c4c0158(0x21);
  }
  else {
    FUN_2c4c01d0(0x4f,param_2,param_3,0);
    iVar1 = -(param_4 + 8U & 0xfffffff8);
    FUN_2c6741b8(auStack_20 + 3,auStack_20 + iVar1,param_4 + 1);
    FUN_2c674668(param_3,auStack_20 + iVar1 + 1,param_4);
    FUN_2c4c0158(0x4f);
  }
  if (*DAT_2c497724 == local_1c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

