/* FUN_100a0f3c @ 0x100a0f3c */

int FUN_100a0f3c(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x54) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_10117c88(PTR_s_WEST_TOPDIR_framework_base_utils_100a0f9c,0xe0,PTR_s_fstream_close_100a0f98,
                 DAT_100a0f94);
  }
  iVar2 = *(int *)(param_1 + 0x54) + 0xc;
  iVar1 = FUN_1011dbf4(iVar2,0xffffffff);
  if (iVar1 < 0) {
    FUN_100a5b78(((int)PTR_DAT_100a0fa4 - (int)PTR_DAT_100a0fa0) * 0x20 & 0xff00U | 0xe40011,
                 PTR_s_fstream_close_100a0fac,PTR_s_lock_failed__d_100a0fa8,iVar1);
  }
  else {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined1 *)(param_1 + 2) = 3;
    thunk_FUN_10113e2c(iVar2);
  }
  return iVar1;
}

