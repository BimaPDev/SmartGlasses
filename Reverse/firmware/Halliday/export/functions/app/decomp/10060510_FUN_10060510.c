/* FUN_10060510 @ 0x10060510 */

undefined4 FUN_10060510(void)

{
  char *pcVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar6 = (DAT_100605a4 - DAT_100605a0) * 0x20 & 0xff00;
  FUN_100a5b78(DAT_100605a8 | uVar6,DAT_100605b0,DAT_100605ac);
  uVar7 = 0;
  FUN_10060090();
  FUN_1011c05a();
  pcVar1 = DAT_100605cc;
  uVar8 = DAT_100605b4 | uVar6;
  do {
    uVar5 = uVar7 & 0xff;
    if (*pcVar1 == '\x04') goto LAB_10060548;
    iVar3 = FUN_1011c05a();
    FUN_10060378();
    FUN_101153fc(2,0);
    iVar4 = FUN_1011c05a();
    uVar7 = uVar7 + 1;
    FUN_100a5b78(uVar8,DAT_100605b0,DAT_100605c0,iVar4 - iVar3);
  } while (uVar7 != 100);
  if (*pcVar1 == '\x04') {
    uVar5 = 100;
LAB_10060548:
    FUN_100a5b78(DAT_100605b8 | uVar6,DAT_100605b0,DAT_100605bc,uVar5);
    uVar2 = 1;
  }
  else {
    FUN_100a5b78(DAT_100605c4 | uVar6,DAT_100605b0,DAT_100605c8);
    uVar2 = 0;
  }
  return uVar2;
}

