/* FUN_2c497d98 @ 0x2c497d98 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c497d98(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined1 auStack_28 [4];
  int iStack_24;
  
  iStack_24 = *_LAB_2c497e20;
  if (param_1 == 0) {
    FUN_2c4c01d0(0x21,param_2,param_3,0);
  }
  else {
    FUN_2c4c01d0(0x4f,param_2,param_3,0);
  }
  auStack_28[2] = (undefined1)param_2;
  auStack_28[0] = 0x81;
  auStack_28[3] = 0xff;
  auStack_28[1] = (undefined1)((uint)param_2 >> 8);
  iVar1 = -(param_4 + 0xbU & 0xfffffff8);
  FUN_2c6741b8(auStack_28,auStack_28 + iVar1,param_4 + 4);
  FUN_2c674668(param_3,(int)&iStack_24 + iVar1,param_4);
  if (param_1 == 0) {
    FUN_2c4c0158(0x21);
  }
  else {
    FUN_2c4c0158(0x4f);
  }
  if (*_LAB_2c497e20 == iStack_24) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

