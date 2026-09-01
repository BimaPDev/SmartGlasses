/* FUN_1007bc4c @ 0x1007bc4c */

void FUN_1007bc4c(void)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  undefined2 uVar4;
  int iVar5;
  int iVar6;
  undefined4 in_r3;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  uVar3 = DAT_1007bd58;
  iVar2 = DAT_1007bd54;
  puVar1 = PTR_s_bat_extremely_low_power_charge_1007bd30;
  uVar8 = 0;
  uVar7 = (DAT_1007bd18 - DAT_1007bd1c) * 0x20 & 0xff00;
  uVar9 = DAT_1007bd20 | uVar7;
  uVar10 = DAT_1007bd24 | uVar7;
  while( true ) {
    iVar5 = FUN_1011a86a();
    if (iVar5 == 0) {
      FUN_100a5b78(DAT_1007bd28 | uVar7,PTR_s_bat_extremely_low_power_charge_1007bd30,
                   PTR_s_bat_extremely_low__power_on__no_d_1007bd2c);
      do {
        FUN_10056794();
      } while( true );
    }
    FUN_1005530c();
    uVar4 = FUN_1011fe22();
    *(undefined2 *)(iVar2 + 0x15e) = uVar4;
    FUN_1011fe70(uVar4);
    FUN_100a5b78(uVar9,PTR_s_bat_extremely_low_power_charge_1007bd30,
                 PTR_s_extremely_lowpower_charge__bat_m_1007bd34,*(undefined2 *)(iVar2 + 0x15e));
    if (3000 < *(ushort *)(iVar2 + 0x15e)) break;
    iVar5 = FUN_10061948();
    do {
      iVar6 = FUN_10061948();
    } while ((uint)(iVar6 - iVar5) < DAT_1007bd40);
    uVar8 = uVar8 + 1000;
    if (uVar8 % 5000 == 0) {
      FUN_100a5b78(uVar10,puVar1,DAT_1007bd44,uVar8 / 1000);
    }
    if (uVar8 == uVar3) {
      FUN_100a5b78(DAT_1007bd48 | uVar7,PTR_s_bat_extremely_low_power_charge_1007bd30,DAT_1007bd4c);
      *DAT_1007bd50 = 0x5f;
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
  }
  FUN_100a5b78(DAT_1007bd38 | uVar7,PTR_s_bat_extremely_low_power_charge_1007bd30,DAT_1007bd3c,in_r3
              );
  return;
}

