/* FUN_100a0c90 @ 0x100a0c90 */

int FUN_100a0c90(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0x54);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_10117c88(PTR_s_WEST_TOPDIR_framework_base_utils_100a0d54,0x3f,PTR_s_fstream_read_100a0d50,
                 DAT_100a0d4c);
  }
  iVar1 = FUN_1011dbf4(iVar4 + 0xc,0xffffffff,param_3,param_4,param_4);
  if (iVar1 < 0) {
    FUN_100a5b78(((int)PTR_DAT_100a0d5c - (int)PTR_DAT_100a0d58) * 0x20 & 0xff00U | 0x430011,
                 PTR_s_fstream_read_100a0d64,PTR_s_lock_failed__d_100a0d60,iVar1);
    return iVar1;
  }
  if (((*(byte *)(param_1 + 1) & 3) == 3) &&
     (iVar1 = FUN_1006bd24(iVar4,*(undefined4 *)(param_1 + 4),0), iVar1 != 0)) {
    uVar2 = ((int)PTR_DAT_100a0d5c - (int)PTR_DAT_100a0d58) * 0x20 & 0xff00U | 0x4a0000;
    puVar3 = PTR_s_seek_failed__d_100a0d68;
  }
  else {
    iVar1 = FUN_1006bc84(iVar4,param_2,param_3);
    if (-1 < iVar1) {
      *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + iVar1;
      goto LAB_100a0d16;
    }
    uVar2 = ((int)PTR_DAT_100a0d5c - (int)PTR_DAT_100a0d58) * 0x20 & 0xff00U | 0x510000;
    puVar3 = PTR_s_failed__d_1017c6ea_5_100a0d6c;
  }
  FUN_100a5b78(uVar2 | 0x11,PTR_s_fstream_read_100a0d64,puVar3,iVar1);
LAB_100a0d16:
  thunk_FUN_10113e2c(iVar4 + 0xc);
  return iVar1;
}

