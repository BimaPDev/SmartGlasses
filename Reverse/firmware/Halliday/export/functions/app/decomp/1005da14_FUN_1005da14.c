/* FUN_1005da14 @ 0x1005da14 */

undefined4 FUN_1005da14(undefined4 param_1,undefined4 param_2,uint param_3,uint param_4)

{
  bool bVar1;
  longlong lVar2;
  undefined4 uVar3;
  uint uVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  uint local_20;
  uint uStack_1c;
  
  iVar6 = *DAT_1005dac0;
  uVar4 = (uint)*(ushort *)(iVar6 + 8);
  iVar7 = uVar4 * 0x18 + iVar6;
  iVar8 = (uVar4 - 1) * 0x18 + iVar6;
  local_20 = param_3;
  uStack_1c = param_4;
  FUN_10119dc2(PTR_s__d_off_0x_x__size_0x_x__file_id__1005dac4,uVar4,*(undefined4 *)(iVar7 + 4),
               *(undefined4 *)(iVar8 + 0x20),*(undefined1 *)(iVar7 + 1),*(byte *)(iVar7 + 2) >> 4);
  bVar5 = *(byte *)(iVar8 + 0x1a) & 0xf0;
  if ((bVar5 == 0x40) || (bVar5 == 0x20)) {
    iVar7 = *(int *)(iVar7 + 4);
    iVar8 = *(int *)((uVar4 - 1) * 0x18 + iVar6 + 0x20);
    uVar3 = FUN_10112e84(PTR_s_spinand_1005dac8);
    iVar6 = FUN_10082450(uVar3,1,&local_20);
    uVar9 = FUN_10082450(uVar3,2,&uStack_1c);
    if (iVar6 != 0 || (int)uVar9 != 0) {
      FUN_10119dc2(PTR_s_err__nand_get_capacity_fail_1005dad4);
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    uVar4 = iVar7 + iVar8;
    lVar2 = (ulonglong)uStack_1c * (ulonglong)local_20;
    FUN_10119dc2(PTR_s_part_size_0x_llx__nand_size_0x_l_1005dacc,(int)((ulonglong)uVar9 >> 0x20),
                 uVar4,0,lVar2);
    if ((int)((ulonglong)lVar2 >> 0x20) == 0 && (uint)lVar2 < uVar4) {
      FUN_10119dc2(PTR_s____error_____part_size_over_nand_1005dad0);
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        setBasePriority(0);
      }
      software_interrupt(2);
    }
  }
  return 0;
}

