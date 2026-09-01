/* FUN_10060378 @ 0x10060378 */

void FUN_10060378(void)

{
  byte bVar1;
  undefined1 *puVar2;
  byte *pbVar3;
  byte *pbVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined1 uVar14;
  uint uVar15;
  uint uVar16;
  
  iVar6 = FUN_10060e18();
  pbVar4 = DAT_100604f8;
  pbVar3 = DAT_100604f0;
  puVar2 = DAT_100604c8;
  if (iVar6 != 0) {
    return;
  }
  switch(*DAT_100604c8) {
  case 0:
    uVar16 = ((int)PTR_DAT_100604d0 - (int)PTR_DAT_100604cc) * 0x20 & 0xff00;
    FUN_100a5b78(uVar16 | 0x4900031,PTR_s_IQS7222C_PROCESS__By_Using_WorkS_100604d8,
                 PTR_s_Step1__IQS7222C_Reset_Occur__Con_100604d4);
    FUN_1005ffe4();
    if (*DAT_100604dc != 0x35f) {
      return;
    }
    FUN_100a5b78(DAT_100604e0 | uVar16,PTR_s_IQS7222C_PROCESS__By_Using_WorkS_100604d8,DAT_100604e4,
                 0x35f,DAT_100604dc[1],DAT_100604dc[2]);
    uVar14 = 1;
    goto LAB_100603d6;
  case 1:
    FUN_100a5b78(DAT_100604e8 | ((int)PTR_DAT_100604d0 - (int)PTR_DAT_100604cc) * 0x20 & 0xff00U,
                 PTR_s_IQS7222C_PROCESS__By_Using_WorkS_100604d8,DAT_100604ec);
    FUN_1005fbf8();
    FUN_10060e18();
    FUN_101153fc(2,0);
    FUN_100600ac();
    *DAT_100604f0 = 0;
    uVar14 = 3;
LAB_100603d6:
    *puVar2 = uVar14;
    break;
  case 3:
    uVar16 = ((int)PTR_DAT_100604d0 - (int)PTR_DAT_100604cc) * 0x20 & 0xff00;
    FUN_100a5b78(DAT_100604f4 | uVar16,PTR_s_IQS7222C_PROCESS__By_Using_WorkS_100604d8,DAT_100604fc,
                 *DAT_100604f0);
    FUN_100601c4();
    if ((int)((uint)*pbVar4 << 0x1c) < 0) {
      FUN_10060128();
    }
    bVar1 = *pbVar3;
    if (99 < bVar1) {
LAB_100604be:
      FUN_10060090();
      return;
    }
    uVar7 = (uint)pbVar4[1];
    *pbVar3 = bVar1 + 1;
    uVar15 = (uint)*pbVar4;
    uVar8 = (uint)(*pbVar4 >> 7);
    uVar9 = (uVar15 & 0x7f) >> 6;
    uVar10 = (uVar15 & 0x3f) >> 4;
    uVar11 = (uVar15 & 0xf) >> 3;
    uVar12 = (uVar15 & 7) >> 2;
    uVar13 = (uVar15 & 3) >> 1;
    FUN_100a5b78(DAT_10060500 | uVar16,PTR_s_IQS7222C_PROCESS__By_Using_WorkS_100604d8,DAT_10060504,
                 uVar15 & 1,uVar13,uVar12,uVar11,uVar10,uVar9,uVar8,uVar7);
    if ((*pbVar4 & 0xb) == 0) {
      FUN_100a5b78(uVar16 | 0x4c80031,PTR_s_IQS7222C_PROCESS__By_Using_WorkS_100604d8,DAT_10060508,
                   *pbVar4,uVar13,uVar12,uVar11,uVar10,uVar9,uVar8,uVar7);
      FUN_10060178(3);
      puVar5 = DAT_1006050c;
      *puVar2 = 4;
      *puVar5 = *(undefined4 *)pbVar4;
      puVar5[1] = *(undefined4 *)(pbVar4 + 4);
      puVar5[2] = *(undefined4 *)(pbVar4 + 8);
    }
    break;
  case 4:
    FUN_100601e8();
    if ((int)((uint)*DAT_100604f8 << 0x1c) < 0) goto LAB_100604be;
  }
  return;
}

