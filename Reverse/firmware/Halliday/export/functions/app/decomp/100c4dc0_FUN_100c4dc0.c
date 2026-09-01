/* FUN_100c4dc0 @ 0x100c4dc0 */

int FUN_100c4dc0(uint param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 extraout_r1;
  int iVar1;
  
  iVar1 = param_4;
  if ((8 < param_1) || (iVar1 = (0x12aU >> (param_1 & 0xff)) << 0x1f, -1 < iVar1)) {
    FUN_10119dc2(PTR_s_ASSERTION_FAIL___s_____s__d_100c4e18,
                 PTR_s_type____BT_BUF_EVT____type____BT_100c4e14,
                 PTR_s_WEST_TOPDIR_framework_bluetooth__100c4e10,0x36,param_1,param_2);
    FUN_10119dc2(PTR_s_Invalid_buffer_type_requested_100c4e1c);
    FUN_1011a1f0(PTR_s_WEST_TOPDIR_framework_bluetooth__100c4e10,0x36,param_3,iVar1);
    param_2 = extraout_r1;
  }
  iVar1 = FUN_1013270a(DAT_100c4e20,param_2,param_3,param_4);
  if (iVar1 != 0) {
    FUN_100c1bc4(iVar1 + 8,0);
    *(char *)(iVar1 + 0x14) = (char)param_1;
  }
  return iVar1;
}

