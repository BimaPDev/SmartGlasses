/* FUN_100c1ecc @ 0x100c1ecc */

int FUN_100c1ecc(int *param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  ushort uVar1;
  uint uVar2;
  
  uVar2 = (uint)*(ushort *)(param_1 + 1);
  if (uVar2 < param_2) {
    FUN_10119dc2(PTR_s_ASSERTION_FAIL___s_____s__d_100c1f0c,PTR_s_buf_>len_>__len_100c1f08,
                 PTR_s_WEST_TOPDIR_framework_bluetooth__100c1f04,0x3a5,param_1,param_2,param_3,uVar2
                 ,param_4);
    FUN_1011a1f0(PTR_s_WEST_TOPDIR_framework_bluetooth__100c1f04,0x3a5,param_3,uVar2);
  }
  uVar1 = *(ushort *)(param_1 + 1);
  *(short *)(param_1 + 1) = (short)(uVar1 - param_2);
  return *param_1 + (uVar1 - param_2 & 0xffff);
}

