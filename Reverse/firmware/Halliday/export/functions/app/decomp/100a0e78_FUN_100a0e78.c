/* FUN_100a0e78 @ 0x100a0e78 */

int FUN_100a0e78(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x54);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_10117c88(PTR_s_WEST_TOPDIR_framework_base_utils_100a0efc,0xf5,PTR_s_fstream_destroy_100a0ef8
                 ,DAT_100a0ef4);
  }
  iVar1 = FUN_1011dbf4(iVar2 + 0xc,0xffffffff);
  if (iVar1 < 0) {
    FUN_100a5b78(((int)PTR_DAT_100a0f04 - (int)PTR_DAT_100a0f00) * 0x20 & 0xff00U | 0xf90011,
                 PTR_s_fstream_destroy_100a0f0c,PTR_s_lock_failed__d_100a0f08,iVar1);
  }
  else {
    iVar1 = FUN_1006bc30(iVar2);
    if (iVar1 != 0) {
      FUN_100a5b78(((int)PTR_DAT_100a0f04 - (int)PTR_DAT_100a0f00) * 0x20 & 0xff00U | 0xff0011,
                   PTR_s_fstream_destroy_100a0f0c,PTR_s_close_failed__d_100a0f10,iVar1);
    }
    thunk_FUN_10113e2c(iVar2 + 0xc);
    FUN_1012d1f4(iVar2);
  }
  return iVar1;
}

