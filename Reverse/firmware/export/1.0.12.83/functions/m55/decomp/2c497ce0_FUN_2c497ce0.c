/* FUN_2c497ce0 @ 0x2c497ce0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c497ce0(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined1 auStack_28 [4];
  int iStack_24;
  
  iStack_24 = *_LAB_2c497d94;
  auStack_28[1] = (char)param_2;
  if (param_1 == 0) {
    FUN_2c4c01d0(0x21,param_2,param_3,0);
    auStack_28[0] = 0x26;
    iVar1 = -(param_4 + 0xbU & 0xfffffff8);
    auStack_28[2] = 0;
    auStack_28[3] = 0;
    FUN_2c6741b8(auStack_28,auStack_28 + iVar1,param_4 + 4);
    FUN_2c674668(param_3,(int)&iStack_24 + iVar1,param_4);
    FUN_2c4c0158(0x21);
  }
  else {
    FUN_2c4c01d0(0x4f,param_2,param_3,0);
    auStack_28[0] = 0x26;
    iVar1 = -(param_4 + 0xbU & 0xfffffff8);
    auStack_28[2] = 0;
    auStack_28[3] = 0;
    FUN_2c6741b8(auStack_28,auStack_28 + iVar1,param_4 + 4);
    FUN_2c674668(param_3,(int)&iStack_24 + iVar1,param_4);
    FUN_2c4c0158(0x4f);
  }
  if (*_LAB_2c497d94 == iStack_24) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

