/* FUN_100648c4 @ 0x100648c4 */

undefined4 FUN_100648c4(int param_1,uint param_2,uint param_3)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  piVar1 = DAT_100649a4;
  if ((param_1 == 0) || (iVar5 = *(int *)(param_1 + 0x10), iVar5 == 0)) {
    return 0xffffffea;
  }
  if ((*DAT_100649a4 == 0) || (*DAT_100649a4 != param_1)) {
    param_3 = param_3 & 0xff;
    goto LAB_10064930;
  }
  if (param_3 == 1) {
    iVar4 = DAT_100649a4[3];
LAB_100648f4:
    uVar3 = iVar4 + param_2;
  }
  else {
    if (param_3 == 2) {
      iVar4 = *(int *)(iVar5 + 0x14);
      goto LAB_100648f4;
    }
    uVar3 = param_2;
    if (param_3 != 0) {
      FUN_100a5b78(((int)PTR_DAT_100649ac - (int)PTR_DAT_100649a8) * 0x20 & 0xff00U | 0x6e0011,
                   PTR_s__storage_stream_seek_100649b4,PTR_s_mode_not_support_0x_x_100649b8,param_3,
                   param_1,param_2);
      return 0xffffffff;
    }
  }
  if ((int)uVar3 < 0) {
    FUN_100a5b78(((int)PTR_DAT_100649ac - (int)PTR_DAT_100649a8) * 0x20 & 0xff00U | 0x730023,
                 PTR_s__storage_stream_seek_100649b4,PTR_s_err_offset__d___d___d_100649b0,param_2,
                 param_3,uVar3);
    uVar3 = 0;
  }
  else if (*(uint *)(iVar5 + 0x14) < uVar3) {
    FUN_100a5b78(((int)PTR_DAT_100649ac - (int)PTR_DAT_100649a8) * 0x20 & 0xff00U | 0x760023,
                 PTR_s__storage_stream_seek_100649b4,PTR_s_err_offset__d___d___d_100649b0,param_2,
                 param_3,uVar3);
    uVar3 = *(uint *)(iVar5 + 0x14);
  }
  param_3 = 0;
  param_2 = uVar3 & 0xfffff800;
  piVar1[2] = param_2;
  piVar1[3] = uVar3;
  iVar5 = *(int *)(param_1 + 0x10);
  piVar1[1] = 0;
LAB_10064930:
  uVar2 = FUN_100a0490(iVar5,param_2,param_3);
  return uVar2;
}

