/* FUN_100bb29c @ 0x100bb29c */

void FUN_100bb29c(void)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined2 uVar4;
  undefined1 uVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  byte *pbVar10;
  uint uVar11;
  undefined4 uVar12;
  byte abStack_6c [16];
  undefined4 local_5c;
  undefined1 auStack_44 [3];
  undefined2 local_41;
  char local_3f;
  
  FUN_1011ea48(abStack_6c,0,0xd);
  iVar6 = thunk_FUN_1009efa0(DAT_100bb488,abStack_6c);
  uVar11 = (DAT_100bb48c - DAT_100bb490) * 0x20 & 0xff00;
  if (iVar6 < 0xc) {
    FUN_100a5b78(uVar11 | 0xa60021,DAT_100bb498,DAT_100bb494,iVar6);
    local_5c = FUN_10131338();
    FUN_100bb168(auStack_44);
    local_41 = (undefined2)local_5c;
    uVar4 = local_41;
    local_3f = local_5c._2_1_;
    local_41._0_1_ = (char)local_5c;
    bVar1 = (char)local_41 == '\0';
    local_41 = uVar4;
    if (bVar1) {
      local_41._1_1_ = (char)((uint)local_5c >> 8);
      local_41 = CONCAT11(local_41._1_1_,1);
    }
    if (local_41._1_1_ == '\0') {
      local_41 = CONCAT11(1,(char)local_41);
    }
    if (local_5c._2_1_ == '\0') {
      local_3f = '\x01';
    }
    FUN_10119cd2(auStack_44,6,abStack_6c);
    thunk_FUN_1007375c(DAT_100bb488,abStack_6c);
  }
  else {
    FUN_10119d28(abStack_6c,0xc,auStack_44,6);
    FUN_100bb178(auStack_44);
  }
  uVar2 = DAT_100bb49c;
  FUN_100a5b78(uVar11 | 0xbe0031,DAT_100bb498,DAT_100bb4a0,abStack_6c);
  uVar3 = DAT_100bb4bc;
  uVar5 = 0;
  uVar12 = uVar2;
  do {
    FUN_1011ea48(auStack_44,0,0x21);
    iVar6 = thunk_FUN_1009efa0(uVar12,auStack_44,0x20);
    if (iVar6 < 0) {
      FUN_100a5b78(uVar11 | 0x7a0021,uVar3,DAT_100bb494);
      FUN_1011ea48(&local_5c,0,0x15);
      iVar6 = thunk_FUN_1009efa0(DAT_100bb4a4,&local_5c,0x14);
      if (0 < iVar6) {
        uVar5 = FUN_1011ea10(&local_5c);
        FUN_1013d03e(auStack_44,&local_5c,uVar5,0x21);
      }
      thunk_FUN_1007375c(uVar12,auStack_44,uVar5);
    }
    uVar7 = FUN_1011ea10(auStack_44);
    if ((5 < uVar7) && (iVar6 = FUN_1011ea30(auStack_44,DAT_100bb4a8,5), iVar6 == 0)) {
      uVar8 = FUN_1011ea10(DAT_100bb4ac);
      FUN_1013d03e(auStack_44,DAT_100bb4ac,uVar8,0x21);
      uVar8 = FUN_1011ea10(DAT_100bb4ac);
      thunk_FUN_1007375c(uVar12,auStack_44,uVar8);
    }
    uVar7 = FUN_1011ea10(auStack_44);
    if ((5 < uVar7) && (iVar6 = FUN_1011ea30(auStack_44,DAT_100bb4b0,0xc), iVar6 == 0)) {
      uVar8 = FUN_1011ea10(DAT_100bb4ac);
      FUN_1013d03e(auStack_44,DAT_100bb4ac,uVar8,0x21);
      uVar8 = FUN_1011ea10(DAT_100bb4ac);
      thunk_FUN_1007375c(uVar12,auStack_44,uVar8);
    }
    FUN_100a5b78(uVar11 | 0x930032,uVar3,DAT_100bb4b4,uVar12,auStack_44);
    uVar8 = FUN_1011ea10(uVar2);
    iVar6 = FUN_1011ea30(uVar12,uVar2,uVar8);
    uVar12 = DAT_100bb4b8;
  } while (iVar6 == 0);
  iVar9 = 0;
  iVar6 = 0;
  pbVar10 = abStack_6c;
  do {
    iVar9 = iVar9 + 1;
    iVar6 = iVar6 * 0x83 + (uint)*pbVar10;
    pbVar10 = pbVar10 + 1;
  } while (iVar9 != 0xd);
  FUN_100b9f30(iVar6);
  return;
}

