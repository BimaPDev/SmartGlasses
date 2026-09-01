/* FUN_1003eb38 @ 0x1003eb38 */

bool FUN_1003eb38(void)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  iVar5 = *(int *)PTR_DAT_1003ebb0;
  iVar2 = FUN_100bed9c();
  iVar6 = (int)PTR_DAT_1003ebb4 - (int)PTR_DAT_1003ebb8;
  bVar1 = FUN_100bed9c();
  puVar7 = PTR_s_UNKNOWN_STATUS_1003ebc0;
  if (bVar1 < 4) {
    puVar7 = *(undefined **)(PTR_PTR_1003ebbc + (uint)bVar1 * 4);
  }
  uVar3 = FUN_100ba310();
  puVar8 = PTR_s_UNKNOWN_LINK_STATUS_1003ebc8;
  if ((uVar3 & 0xff) < 8) {
    puVar8 = *(undefined **)(PTR_PTR_1003ebc4 + (uVar3 & 0xff) * 4);
  }
  uVar4 = FUN_1004b9fc();
  FUN_100a5b78(iVar6 * 0x20 & 0xff00U | 0x800033,PTR_s_ble_is_connected_1003ebd0,
               PTR_s_>>>ble__s_bt__s_ring__d_1003ebcc,puVar7,puVar8,uVar4);
  if (*(int *)PTR_DAT_1003ebb0 != iVar5) {
    FUN_1013cdc0();
  }
  return iVar2 == 2;
}

