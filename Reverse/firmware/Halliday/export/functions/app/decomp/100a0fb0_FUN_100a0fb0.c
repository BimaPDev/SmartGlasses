/* FUN_100a0fb0 @ 0x100a0fb0 */

int FUN_100a0fb0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x54);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_10117c88(PTR_s_WEST_TOPDIR_framework_base_utils_100a1010,0xcd,PTR_s_fstream_flush_100a100c,
                 DAT_100a1008);
  }
  iVar1 = FUN_1011dbf4(iVar2 + 0xc,0xffffffff);
  if (iVar1 < 0) {
    FUN_100a5b78(((int)PTR_DAT_100a1018 - (int)PTR_DAT_100a1014) * 0x20 & 0xff00U | 0xd10011,
                 PTR_s_fstream_flush_100a1020,PTR_s_lock_failed__d_100a101c,iVar1);
  }
  else {
    iVar1 = FUN_1006be14(iVar2);
    thunk_FUN_10113e2c(iVar2 + 0xc);
  }
  return iVar1;
}

