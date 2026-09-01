/* FUN_1007a878 @ 0x1007a878 */

void FUN_1007a878(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  undefined4 extraout_r1;
  undefined4 uVar8;
  int iVar9;
  undefined4 uVar10;
  code *UNRECOVERED_JUMPTABLE;
  byte bVar11;
  uint uVar12;
  uint uVar13;
  
  uVar5 = FUN_1007c388();
  iVar2 = DAT_1007a99c;
  if (uVar5 != 0xff) {
    if (*(char *)(DAT_1007a99c + 0x13f) != '\x02') {
      bVar1 = true;
      uVar13 = *(ushort *)(DAT_1007a99c + 0x40) / 200;
      pbVar7 = (byte *)(DAT_1007a99c + 0xd8);
      for (iVar9 = 0; iVar9 < (int)uVar13; iVar9 = iVar9 + 1) {
        if (*pbVar7 != uVar5) {
          bVar1 = false;
        }
        bVar11 = (byte)uVar5;
        if (iVar9 < (int)(uVar13 - 1)) {
          bVar11 = pbVar7[1];
        }
        *pbVar7 = bVar11;
        pbVar7 = pbVar7 + 1;
      }
      if (!bVar1) {
        return;
      }
    }
    puVar4 = PTR_s_DC5V_state_change__last___s__new_1007a9b4;
    puVar3 = PTR_s_bat_charge_dc5v_detect_1007a9b0;
    uVar13 = (uint)*(byte *)(iVar2 + 0x13f);
    if (uVar13 != uVar5) {
      uVar8 = *(undefined4 *)(PTR_DAT_1007a9ac + uVar5 * 4);
      uVar12 = (DAT_1007a9a4 - DAT_1007a9a0) * 0x20 & 0xff00;
      uVar10 = *(undefined4 *)(PTR_DAT_1007a9ac + uVar13 * 4);
      uVar6 = DAT_1007a9a8 | uVar12;
      *(byte *)(iVar2 + 0x13f) = (byte)uVar5;
      FUN_100a5b78(uVar6,puVar3,puVar4,uVar10,uVar8,param_2,param_3);
      uVar10 = DAT_1007a9bc;
      puVar3 = PTR_s_bat_charge_dc5v_detect_1007a9b0;
      if (*(char *)(iVar2 + 0x1e0) != '\0') {
        uVar6 = DAT_1007a9b8 | uVar12;
        *(undefined1 *)(iVar2 + 0x1e1) = 1;
        FUN_100a5b78(uVar6,puVar3,uVar10,1,uVar8,param_2,param_3);
      }
      if (uVar5 == 1) {
        if (uVar13 != 1) {
          FUN_1007c15c(0);
          FUN_1013cbaa(DAT_1007a9c0,extraout_r1,500,0);
        }
        if (*(code **)(iVar2 + 0x164) != (code *)0x0) {
          (**(code **)(iVar2 + 0x164))(1,0);
        }
        *(byte *)(iVar2 + 0x13c) = *(byte *)(iVar2 + 0x13c) & 0x1f;
      }
      else if (uVar5 == 0) {
        if ((uVar13 == 1) || (uVar13 == 0xff)) {
          FUN_1007c15c(1);
          FUN_1007c2bc();
          FUN_100a5b78(DAT_1007a9c4 | uVar12,PTR_s_bat_charge_dc5v_detect_1007a9b0,DAT_1007a9c8);
          FUN_1011fee0(*(undefined1 *)(iVar2 + 0x144));
          if (uVar13 == 0xff) {
            return;
          }
        }
        UNRECOVERED_JUMPTABLE = *(code **)(iVar2 + 0x164);
        if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
          uVar10 = 2;
LAB_1007a994:
                    /* WARNING: Could not recover jumptable at 0x1007a99a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)(uVar10,0);
          return;
        }
      }
      else if ((uVar5 == 3) &&
              (UNRECOVERED_JUMPTABLE = *(code **)(iVar2 + 0x164),
              UNRECOVERED_JUMPTABLE != (code *)0x0)) {
        uVar10 = 3;
        goto LAB_1007a994;
      }
    }
  }
  return;
}

