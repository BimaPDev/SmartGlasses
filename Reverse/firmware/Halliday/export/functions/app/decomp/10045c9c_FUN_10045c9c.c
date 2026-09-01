/* FUN_10045c9c @ 0x10045c9c */

/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_10045c9c(void)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 local_120;
  ushort *local_11c;
  uint3 local_118;
  undefined1 uStack_115;
  undefined4 local_114;
  undefined1 auStack_110 [36];
  ushort local_ec;
  undefined1 auStack_ea [2];
  undefined1 auStack_e8 [196];
  int local_24;
  
  puVar1 = DAT_10045e98;
  local_24 = *(int *)PTR_DAT_10045e7c;
  *DAT_10045e98 = 0;
  iVar2 = FUN_10043548();
  _local_ec = 0;
  FUN_1011ea48(auStack_e8,0,0xc4);
  local_120 = 0;
  local_11c = (ushort *)0x0;
  _local_118 = 0;
  uVar3 = FUN_1011ea10(PTR_s_1000101001_10045e80);
  uVar6 = uVar3 & 0xffff;
  _local_ec = CONCAT22(auStack_ea,(ushort)((uVar3 & 0xff) << 8) | (ushort)(uVar3 >> 8) & 0xff);
  FUN_1011e9f0(auStack_ea,PTR_s_1000101001_10045e80);
  uVar3 = FUN_1011ea10(PTR_s_P343001000000_10045e84);
  auStack_e8[(uVar6 + 2 & 0xffff) - 4] = (char)(uVar3 >> 8);
  uVar7 = uVar6 + 4 & 0xffff;
  auStack_e8[(uVar6 + 3 & 0xffff) - 4] = (char)uVar3;
  FUN_1011e9f0((int)&local_ec + uVar7,PTR_s_P343001000000_10045e84);
  uVar6 = FUN_1011ea10(PTR_s_1_00_20_03_10045e88);
  uVar3 = (uVar3 & 0xffff) + uVar7 & 0xffff;
  auStack_e8[uVar3 - 4] = (char)(uVar6 >> 8);
  uVar7 = uVar3 + 2 & 0xffff;
  auStack_e8[(uVar3 + 1 & 0xffff) - 4] = (char)uVar6;
  FUN_1011e9f0((int)&local_ec + uVar7,PTR_s_1_00_20_03_10045e88);
  uVar3 = FUN_1011ea10(PTR_DAT_10045e8c);
  uVar6 = (uVar6 & 0xffff) + uVar7 & 0xffff;
  auStack_e8[uVar6 - 4] = (char)(uVar3 >> 8);
  uVar7 = uVar6 + 2 & 0xffff;
  auStack_e8[(uVar6 + 1 & 0xffff) - 4] = (char)uVar3;
  FUN_1011e9f0((int)&local_ec + uVar7,PTR_DAT_10045e8c);
  uVar3 = (uVar3 & 0xffff) + uVar7 & 0xffff;
  auStack_e8[uVar3 - 4] = 0xc;
  thunk_FUN_1009efa0(PTR_s_BT_MAC_101887e7_0xe_10045e90,(uVar3 + 1 & 0xffff) + (int)&local_ec);
  local_114 = 0;
  FUN_1011ea48(auStack_110,0,0x24);
  uVar4 = FUN_1001c2a0(&local_114);
  auStack_e8[(uVar3 + 0xd & 0xffff) - 4] = (char)uVar4;
  FUN_1011ea40((int)&local_ec + (uVar3 + 0xe & 0xffff),&local_114,uVar4);
  local_120 = CONCAT22(local_120._2_2_,0xe02);
  local_118 = (uint3)(ushort)((short)(uVar3 + 0xe) + (short)uVar4);
  local_11c = &local_ec;
  FUN_100506fc(&local_120);
  FUN_10045438();
  FUN_10047ebc();
  FUN_10048cd8();
  FUN_10048794();
  FUN_10048728();
  FUN_100486d0();
  FUN_1003f6f0();
  FUN_10047f50();
  FUN_100454dc(0);
  FUN_10044258();
  FUN_10045644();
  FUN_10044c70();
  FUN_100456a0();
  FUN_1004574c();
  FUN_10045808();
  FUN_10045490();
  FUN_100458c4();
  FUN_10044cc8();
  FUN_10045a1c();
  FUN_1004823c();
  FUN_10045c0c();
  FUN_10044bdc();
  FUN_10052f48();
  *puVar1 = 1;
  iVar5 = FUN_10043548();
  FUN_10119dc2(PTR_s_sync_info_time__d_ms_10045e94,iVar5 - iVar2);
  if (*(int *)PTR_DAT_10045e7c != local_24) {
    FUN_1013cdc0();
  }
  return 1;
}

