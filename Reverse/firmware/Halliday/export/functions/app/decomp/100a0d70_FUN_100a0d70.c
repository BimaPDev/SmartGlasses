/* FUN_100a0d70 @ 0x100a0d70 */

int FUN_100a0d70(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  byte bVar4;
  int iVar5;
  
  iVar5 = *(int *)(param_1 + 0x54);
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_10117c88(PTR_s_WEST_TOPDIR_framework_base_utils_100a0e5c,0x62,PTR_s_fstream_write_100a0e58,
                 DAT_100a0e54);
  }
  bVar4 = *(byte *)(param_1 + 1) & 3;
  if ((bVar4 == 3) && (param_3 == 0)) {
    *(byte *)(param_1 + 0xc) = *(byte *)(param_1 + 0xc) | 2;
    return 0;
  }
  iVar1 = FUN_1011dbf4(iVar5 + 0xc,0xffffffff,param_3,bVar4,param_4);
  if (iVar1 < 0) {
    FUN_100a5b78(((int)PTR_DAT_100a0e64 - (int)PTR_DAT_100a0e60) * 0x20 & 0xff00U | 0x720011,
                 PTR_s_fstream_write_100a0e6c,PTR_s_lock_failed__d_100a0e68,iVar1);
    return iVar1;
  }
  if (((*(byte *)(param_1 + 1) & 3) == 3) &&
     (iVar1 = FUN_1006bd24(iVar5,*(undefined4 *)(param_1 + 8),0), iVar1 != 0)) {
    uVar2 = ((int)PTR_DAT_100a0e64 - (int)PTR_DAT_100a0e60) * 0x20 & 0xff00U | 0x790000;
    puVar3 = PTR_s_seek_failed__d_100a0e70;
  }
  else {
    iVar1 = FUN_1006bcd4(iVar5,param_2,param_3);
    if (-1 < iVar1) {
      uVar2 = *(int *)(param_1 + 8) + iVar1;
      *(uint *)(param_1 + 8) = uVar2;
      if (*(uint *)(param_1 + 0x14) < uVar2) {
        *(uint *)(param_1 + 0x14) = uVar2;
      }
      goto LAB_100a0e14;
    }
    uVar2 = ((int)PTR_DAT_100a0e64 - (int)PTR_DAT_100a0e60) * 0x20 & 0xff00U | 0x800000;
    puVar3 = PTR_s_write__d_100a0e74;
  }
  FUN_100a5b78(uVar2 | 0x11,PTR_s_fstream_write_100a0e6c,puVar3,iVar1);
LAB_100a0e14:
  thunk_FUN_10113e2c(iVar5 + 0xc);
  return iVar1;
}

