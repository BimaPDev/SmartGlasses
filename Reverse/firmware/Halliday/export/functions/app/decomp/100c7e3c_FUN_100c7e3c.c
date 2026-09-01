/* FUN_100c7e3c @ 0x100c7e3c */

void FUN_100c7e3c(int param_1)

{
  ushort uVar1;
  bool bVar2;
  uint uVar3;
  undefined1 *puVar4;
  int iVar5;
  
  uVar3 = FUN_10132788(param_1 + 8);
  uVar1 = *(ushort *)(param_1 + 0xc);
  if (uVar1 < 2) {
    FUN_10119dc2(PTR_s_ASSERTION_FAIL___s_____s__d_100c7ed4,PTR_s_buf_>len_>__sizeof__hdr__100c7ed0,
                 PTR_s_WEST_TOPDIR_framework_bluetooth__100c7ecc,0x1ab7);
    bVar2 = (bool)isCurrentModePrivileged();
    if (bVar2) {
      setBasePriority(0);
    }
    software_interrupt(2);
  }
  puVar4 = (undefined1 *)FUN_100c1f9c(param_1 + 8,2);
  iVar5 = FUN_10132d4c(*puVar4);
  if (-1 < iVar5 << 0x1f) {
    FUN_10119dc2(PTR_s_ASSERTION_FAIL___s_____s__d_100c7ed4,PTR_s_evt_flags____1UL_<<_(0))_100c7ed8,
                 PTR_s_WEST_TOPDIR_framework_bluetooth__100c7ecc,0x1abb);
    bVar2 = (bool)isCurrentModePrivileged();
    if (bVar2) {
      setBasePriority(0);
    }
    software_interrupt(2);
  }
  FUN_100c5858(*puVar4,param_1,PTR_DAT_100c7edc,5);
  if (iVar5 << 0x1e < 0) {
    *(uint *)(param_1 + 8) = (uVar3 & 0xffff) + *(int *)(param_1 + 0x10);
    *(ushort *)(param_1 + 0xc) = uVar1;
    return;
  }
  FUN_100c1c90(param_1);
  return;
}

