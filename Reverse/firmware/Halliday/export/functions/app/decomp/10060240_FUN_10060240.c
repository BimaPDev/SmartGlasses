/* FUN_10060240 @ 0x10060240 */

void FUN_10060240(void)

{
  byte bVar1;
  ushort uVar2;
  byte *pbVar3;
  int *piVar4;
  uint *puVar5;
  char *pcVar6;
  ushort *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  
  iVar10 = FUN_1011c05a();
  iVar12 = DAT_1006034c;
  puVar5 = DAT_10060348;
  piVar4 = DAT_10060344;
  pbVar3 = DAT_10060340;
  if ((int)((uint)*(byte *)(DAT_1006033c + 2) << 0x1e) < 0) {
    bVar1 = *DAT_10060340;
    if ((*(byte *)(DAT_1006033c + 6) & 0xe) == 0) {
      if (bVar1 != 0) {
        *DAT_10060340 = *(byte *)(DAT_1006033c + 6) & 0xe;
        iVar12 = DAT_10060350;
        uVar11 = *puVar5;
        iVar10 = FUN_1011c05a();
        pcVar6 = DAT_10060354;
        FUN_100a5b78(DAT_10060370 | (iVar12 - DAT_1006034c) * 0x20 & 0xff00U,DAT_10060368,
                     DAT_10060374,uVar11,iVar10 - *piVar4);
        if (*pcVar6 == '\0') {
          iVar12 = FUN_1005fb64(*puVar5,*DAT_10060358);
          *pcVar6 = (char)iVar12;
          if (iVar12 == 0) {
            FUN_10060db0(1,0);
          }
          FUN_1011c0c4();
        }
      }
    }
    else {
      uVar11 = (uint)*(ushort *)(DAT_1006033c + 8);
      *DAT_10060348 = uVar11;
      pcVar6 = DAT_10060354;
      iVar13 = *piVar4;
      uVar14 = (DAT_10060350 - iVar12) * 0x20 & 0xff00;
      if (bVar1 == 0) {
        *DAT_10060354 = '\0';
        *DAT_10060358 = uVar11;
        uVar8 = DAT_10060360;
        *DAT_1006035c = 0;
        uVar9 = DAT_10060368;
        uVar14 = DAT_10060364 | uVar14;
        *pbVar3 = 1;
        FUN_100a5b78(uVar14,uVar9,uVar8,iVar10 - iVar13,uVar11);
      }
      else {
        if (*DAT_10060354 == '\0') {
          iVar12 = FUN_1005fb64(uVar11,*DAT_10060358);
          *pcVar6 = (char)iVar12;
          puVar7 = DAT_1006035c;
          if (iVar12 == 0) {
            uVar2 = *DAT_1006035c;
            *DAT_1006035c = uVar2 + 1;
            if (0x96 < (ushort)(uVar2 + 1)) {
              *puVar7 = 0;
              *pcVar6 = '\x05';
              FUN_10060db0(5,1);
              FUN_1011c0c4();
            }
          }
        }
        FUN_100a5b78(uVar14 | 0x3f40031,DAT_10060368,DAT_1006036c);
      }
    }
    iVar12 = FUN_1011c05a();
    *piVar4 = iVar12;
  }
  return;
}

