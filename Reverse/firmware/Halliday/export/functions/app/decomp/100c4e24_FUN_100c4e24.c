/* FUN_100c4e24 @ 0x100c4e24 */

int FUN_100c4e24(uint param_1,undefined4 param_2,undefined4 param_3,int param_4,uint param_5)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((int)param_5 < 0x388) {
    iVar1 = param_4;
    if ((8 < param_1) || (iVar1 = (0x12aU >> (param_1 & 0xff)) << 0x1f, -1 < iVar1)) {
      uVar2 = param_3;
      FUN_10119dc2(PTR_s_ASSERTION_FAIL___s_____s__d_100c4ec4,
                   PTR_s_type____BT_BUF_EVT____type____BT_100c4ec0,
                   PTR_s_WEST_TOPDIR_framework_bluetooth__100c4ebc,0x5c,param_1,param_2,param_3,
                   iVar1,param_1,param_2,param_3);
      FUN_10119dc2(PTR_s_Invalid_buffer_type_requested_100c4ec8);
      FUN_1011a1f0(PTR_s_WEST_TOPDIR_framework_bluetooth__100c4ebc,0x5c,uVar2,iVar1);
    }
    iVar1 = FUN_100c19e4(DAT_100c4ecc,param_5 & 0xffff,param_3,param_4);
    if (iVar1 != 0) {
      FUN_100c1bc4(iVar1 + 8,0);
      *(char *)(iVar1 + 0x14) = (char)param_1;
    }
  }
  else {
    FUN_100a5b78(((int)PTR_DAT_100c4eb0 - (int)PTR_DAT_100c4eac) * 0x20 & 0xff00U | 0x560012,
                 PTR_s_bt_buf_get_rx_len_100c4eb8,PTR_s_Too_length__d__d__100c4eb4,param_5,0x387);
    iVar1 = 0;
  }
  return iVar1;
}

