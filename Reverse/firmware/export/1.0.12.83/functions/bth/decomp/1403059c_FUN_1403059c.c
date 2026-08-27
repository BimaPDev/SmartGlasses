/* FUN_1403059c @ 0x1403059c */

/* WARNING: Removing unreachable block (ram,0x1403019a) */
/* WARNING: Removing unreachable block (ram,0x140303e0) */
/* WARNING: Removing unreachable block (ram,0x140303f0) */
/* WARNING: Removing unreachable block (ram,0x140303f4) */
/* WARNING: Removing unreachable block (ram,0x14030562) */
/* WARNING: Removing unreachable block (ram,0x140303fc) */
/* WARNING: Removing unreachable block (ram,0x14030544) */
/* WARNING: Removing unreachable block (ram,0x14030426) */
/* WARNING: Removing unreachable block (ram,0x1403042a) */
/* WARNING: Removing unreachable block (ram,0x1403042e) */
/* WARNING: Removing unreachable block (ram,0x14030432) */
/* WARNING: Removing unreachable block (ram,0x14030552) */
/* WARNING: Removing unreachable block (ram,0x14030456) */
/* WARNING: Removing unreachable block (ram,0x1403055c) */
/* WARNING: Removing unreachable block (ram,0x1403045a) */
/* WARNING: Removing unreachable block (ram,0x140304b0) */
/* WARNING: Removing unreachable block (ram,0x140304c0) */
/* WARNING: Removing unreachable block (ram,0x140304ac) */

void FUN_1403059c(void)

{
  byte bVar1;
  bool bVar2;
  longlong lVar3;
  byte *pbVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  short sVar9;
  undefined4 unaff_lr;
  ushort uStack_26;
  uint uStack_24;
  
  puVar5 = DAT_1403046c;
  pbVar4 = DAT_14030468;
  uStack_24 = *DAT_14030464;
  iVar8 = 0;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    iVar8 = getBasePriority();
  }
  if (iVar8 != 0x40) {
    bVar1 = *DAT_14030468;
    *DAT_1403046c = 0x14030168;
    puVar5[1] = unaff_lr;
    uVar7 = bVar1 + 1;
    *pbVar4 = (char)uVar7 + (char)(uint)((ulonglong)DAT_14030470 * (ulonglong)uVar7 >> 0x23) * -10;
    *(undefined4 *)(DAT_14030474 + (uint)bVar1 * 4) = unaff_lr;
  }
  pbVar4 = DAT_14030488;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(0x40);
  }
  FUN_1402a6e8(4,0x110f,DAT_14030484,DAT_14030480,DAT_1403047c,DAT_140304a0);
  if (*pbVar4 == 0) {
    uVar6 = 0x6b;
  }
  else if (*pbVar4 == 3) {
    uVar6 = 0x6b;
  }
  else {
    uVar6 = 0x10c;
  }
  FUN_1402e1fc(uVar6,&uStack_26);
  uStack_26 = uStack_26 & 0xfe7f;
  if (*pbVar4 == 0) {
    uVar6 = 0x6b;
  }
  else if (*pbVar4 == 3) {
    uVar6 = 0x6b;
  }
  else {
    uVar6 = 0x10c;
  }
  FUN_1402e37c(uVar6);
  if (*pbVar4 == 0) {
    uVar6 = 0x6a;
  }
  else {
    uVar6 = 0x10b;
    if (*pbVar4 == 3) {
      uVar6 = 0x6a;
    }
  }
  FUN_1402e37c(uVar6,4);
  uStack_26 = uStack_26 | 0x180;
  if (*pbVar4 == 0) {
    uVar6 = 0x6b;
  }
  else if (*pbVar4 == 3) {
    uVar6 = 0x6b;
  }
  else {
    uVar6 = 0x10c;
  }
  FUN_1402e37c(uVar6);
  FUN_140e5398(0x80);
  FUN_1402a6e8(4,0x1123,DAT_14030484,DAT_14030480,DAT_140304a4);
  FUN_1402dc78(6);
  bVar1 = *pbVar4;
  *DAT_1403048c = *DAT_1403048c | 0x8000;
  if (bVar1 - 1 < 2) {
    FUN_1402e718(1);
    FUN_1402f130(3,6);
    FUN_1402ee18(3,1,1,1,1);
    FUN_140e5908(0x708);
    if (*pbVar4 - 1 < 2) {
      FUN_140e5398(0x50);
    }
    FUN_1402e1fc(0x4b,&uStack_26);
    uStack_26 = uStack_26 & 0xfffc | 2;
    FUN_1402e37c(0x4b);
    FUN_1402e718(0);
  }
  else {
    FUN_1402e1fc(0x48,&uStack_26);
    if ((int)((uint)(byte)uStack_26 - (int)*DAT_14030490) < 0xad) {
      sVar9 = 5;
    }
    else {
      sVar9 = 6;
    }
    if (1 < *pbVar4 - 1) {
      FUN_1402e1fc(0xe,&uStack_26);
      uStack_26 = uStack_26 & 0xe0ff | sVar9 << 8;
      FUN_1402e37c(0xe);
      if (1 < *pbVar4 - 1) {
        FUN_1402e1fc(0xe,&uStack_26);
        uStack_26 = uStack_26 | 0x6000;
        FUN_1402e37c(0xe);
      }
    }
    FUN_140e5908(0x708);
    FUN_1402e1fc(0x4b,&uStack_26);
    uStack_26 = uStack_26 & 0xfffc | 2;
    FUN_1402e37c(0x4b);
  }
  if (*DAT_14030494 != '\x01') {
    FUN_1402f7ec(1);
  }
  FUN_140e5398(0x10);
  FUN_1402e37c(0,0xcafe);
  FUN_1402e37c(0,0x5fee);
  FUN_140e5398(9);
  FUN_1402e37c(0x8000,0xcafe);
  FUN_1402e37c(0x8000,0x5fee);
  FUN_140e5398(9);
  if (*pbVar4 == 2) {
    FUN_1402e1fc(0x61,&uStack_26);
    uStack_26 = uStack_26 & 0xc01f | 0xe0;
    FUN_1402e37c(0x61);
  }
  FUN_140280f8();
  if (iVar8 == 0) {
    *DAT_1403046c = 0xffffffff;
  }
  pbVar4 = DAT_14030498;
  bVar1 = *DAT_14030498;
  *(undefined4 *)(DAT_1403049c + (uint)bVar1 * 4) = unaff_lr;
  uVar7 = bVar1 + 1;
  lVar3 = (ulonglong)DAT_14030470 * (ulonglong)uVar7;
  *pbVar4 = (char)uVar7 + (char)(uint)((ulonglong)lVar3 >> 0x23) * -10;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(iVar8);
  }
  if ((*DAT_14030464 ^ uStack_24) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc((int)lVar3,pbVar4,*DAT_14030464 ^ uStack_24,0);
}

