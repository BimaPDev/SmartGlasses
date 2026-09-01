/* FUN_100a0bf8 @ 0x100a0bf8 */

undefined4 FUN_100a0bf8(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x54);
  if (iVar3 != 0) {
    if (param_3 == 1) {
      uVar2 = 0;
      if ((*(byte *)(param_1 + 1) & 3) == 2) {
        iVar1 = *(int *)(param_1 + 8);
      }
      else {
        iVar1 = *(int *)(param_1 + 4);
      }
      param_2 = param_2 + iVar1;
    }
    else if (param_3 == 2) {
      uVar2 = 2;
    }
    else {
      uVar2 = 0;
    }
    iVar1 = FUN_1006bd24(iVar3,param_2,uVar2);
    if (iVar1 == 0) {
      uVar2 = FUN_1006bd74(iVar3);
      if ((*(byte *)(param_1 + 1) & 3) == 2) {
        *(undefined4 *)(param_1 + 8) = uVar2;
      }
      else {
        *(undefined4 *)(param_1 + 4) = uVar2;
      }
      uVar2 = 0;
    }
    else {
      FUN_100a5b78(((int)PTR_DAT_100a0c84 - (int)PTR_DAT_100a0c80) * 0x20 & 0xff00U | 0xb10011,
                   PTR_s_fstream_seek_100a0c8c,PTR_s_seek_failed__d_100a0c88,iVar1);
      uVar2 = 0xffffffff;
    }
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_10117c88(PTR_s_WEST_TOPDIR_framework_base_utils_100a0c7c,0x9d,PTR_s_fstream_seek_100a0c78,
               DAT_100a0c74);
}

