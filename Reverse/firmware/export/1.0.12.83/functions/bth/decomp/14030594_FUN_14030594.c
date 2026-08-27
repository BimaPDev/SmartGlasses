/* FUN_14030594 @ 0x14030594 */

/* WARNING: Removing unreachable block (ram,0x14030306) */
/* WARNING: Removing unreachable block (ram,0x140303b0) */
/* WARNING: Removing unreachable block (ram,0x14030324) */
/* WARNING: Removing unreachable block (ram,0x14030328) */
/* WARNING: Removing unreachable block (ram,0x1403032a) */
/* WARNING: Removing unreachable block (ram,0x1403032e) */
/* WARNING: Removing unreachable block (ram,0x14030540) */
/* WARNING: Removing unreachable block (ram,0x1403034e) */
/* WARNING: Removing unreachable block (ram,0x14030352) */
/* WARNING: Removing unreachable block (ram,0x14030354) */
/* WARNING: Removing unreachable block (ram,0x14030358) */
/* WARNING: Removing unreachable block (ram,0x1403053c) */
/* WARNING: Removing unreachable block (ram,0x14030364) */
/* WARNING: Removing unreachable block (ram,0x1403036c) */
/* WARNING: Removing unreachable block (ram,0x1403036e) */
/* WARNING: Removing unreachable block (ram,0x14030538) */
/* WARNING: Removing unreachable block (ram,0x14030388) */
/* WARNING: Removing unreachable block (ram,0x1403038c) */
/* WARNING: Removing unreachable block (ram,0x1403038e) */
/* WARNING: Removing unreachable block (ram,0x14030392) */

void FUN_14030594(void)

{
  byte bVar1;
  bool bVar2;
  longlong lVar3;
  byte *pbVar4;
  undefined4 *puVar5;
  ushort uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  short sVar10;
  undefined4 unaff_lr;
  ushort local_26;
  uint local_24;
  
  puVar5 = DAT_1403046c;
  pbVar4 = DAT_14030468;
  local_24 = *DAT_14030464;
  iVar9 = 0;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    iVar9 = getBasePriority();
  }
  if (iVar9 != 0x40) {
    bVar1 = *DAT_14030468;
    *DAT_1403046c = 0x14030168;
    puVar5[1] = unaff_lr;
    uVar7 = bVar1 + 1;
    *pbVar4 = (char)uVar7 + (char)(uint)((ulonglong)DAT_14030470 * (ulonglong)uVar7 >> 0x23) * -10;
    *(undefined4 *)(DAT_14030474 + (uint)bVar1 * 4) = unaff_lr;
  }
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(0x40);
  }
  FUN_1402a6e8(4,0x110f,DAT_14030484,DAT_14030480,DAT_1403047c,DAT_14030478);
  pbVar4 = DAT_14030488;
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
    FUN_1402e1fc(0x4b,&local_26);
    local_26 = local_26 & 0xfffc | 2;
    FUN_1402e37c(0x4b);
    FUN_1402e718(0);
  }
  else {
    FUN_1402e1fc(0x48,&local_26);
    if ((int)((uint)(byte)local_26 - (int)*DAT_14030490) < 0xad) {
      sVar10 = 5;
    }
    else {
      sVar10 = 6;
    }
    if (1 < *pbVar4 - 1) {
      FUN_1402e1fc(0xe,&local_26);
      local_26 = local_26 & 0xe0ff | sVar10 << 8;
      FUN_1402e37c(0xe);
      if (1 < *pbVar4 - 1) {
        FUN_1402e1fc(0xe,&local_26);
        local_26 = local_26 | 0x6000;
        FUN_1402e37c(0xe);
      }
    }
    FUN_140e5908(0x708);
    FUN_1402e1fc(0x4b,&local_26);
    local_26 = local_26 & 0xfffc | 2;
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
    FUN_1402e1fc(0x61,&local_26);
    local_26 = local_26 & 0xc01f | 0xe0;
    FUN_1402e37c(0x61);
  }
  FUN_14030034(3000);
  if (*DAT_140304a8 != 0) {
    FUN_1402ecbc();
  }
  if (*pbVar4 == 2) {
    FUN_1402e1fc(0x11,&local_26);
    local_26 = local_26 & 0xfffe;
    FUN_1402e37c(0x11);
  }
  FUN_1402e1fc(5,&local_26);
  local_26 = local_26 | 0x100;
  FUN_1402e37c(5);
  FUN_1402e1fc(0x44,&local_26);
  if (*pbVar4 == 0) {
    uVar6 = 0xbfff;
  }
  else if (*pbVar4 == 3) {
    uVar6 = 0xbfff;
  }
  else {
    uVar6 = 0xff7f;
  }
  local_26 = uVar6 & local_26;
  FUN_1402e37c(0x44);
  FUN_1402e1fc(0x4f,&local_26);
  if ((*pbVar4 - 1 < 2) && (*DAT_14030590 != '\0')) {
    local_26 = local_26 | 0x40;
  }
  else {
    local_26 = local_26 | 1;
  }
  iVar8 = 100;
  do {
    FUN_1402e37c(0x4f,local_26);
    FUN_140e5398(0x50);
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  FUN_140e5398(800);
  FUN_1402a6e8(4,0x1194,DAT_1403058c,DAT_14030588,DAT_14030584);
  FUN_140e5398(0x50);
  FUN_140280f8();
  if (iVar9 == 0) {
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
    setBasePriority(iVar9);
  }
  if ((*DAT_14030464 ^ local_24) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc((int)lVar3,pbVar4,*DAT_14030464 ^ local_24,0);
}

