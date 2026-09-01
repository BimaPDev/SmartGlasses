/* FUN_1002cdd8 @ 0x1002cdd8 */

uint FUN_1002cdd8(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 local_144;
  undefined4 uStack_140;
  undefined4 local_13c;
  char local_138 [276];
  int local_24;
  
  uVar7 = 0;
  local_24 = *(int *)PTR_DAT_1002cea8;
  local_144 = 0;
  uStack_140 = 0;
  local_13c = 0;
  iVar3 = FUN_1006ba84(&local_144,PTR_s__NAND__SYSTEM_REMIND_remind_lib_1002ceac,3,0);
  uVar6 = ((int)PTR_DAT_1002ceb0 - (int)PTR_DAT_1002ceb4) * 0x20 & 0xff00;
  if (-1 < iVar3) goto LAB_1002ce28;
  FUN_100a5b78(DAT_1002ceb8 | uVar6,DAT_1002cec0,DAT_1002cebc);
  while (*(int *)PTR_DAT_1002cea8 != local_24) {
    FUN_1013cdc0();
LAB_1002ce28:
    uVar2 = DAT_1002cecc;
    uVar1 = DAT_1002cec0;
    uVar9 = DAT_1002cec4 | uVar6;
    uVar6 = uVar6 | 0x1420011;
    uVar8 = uVar7;
    do {
      FUN_1011ea48(local_138,0,0x114);
      iVar3 = FUN_1006bd24(&local_144,uVar8,0);
      uVar4 = uVar6;
      uVar5 = DAT_1002cec8;
      if ((iVar3 < 0) ||
         (iVar3 = FUN_1006bc84(&local_144,local_138,0x114), uVar4 = uVar9, uVar5 = uVar2,
         iVar3 != 0x114)) {
        FUN_100a5b78(uVar4,uVar1,uVar5);
      }
      else if (local_138[0] != '\0') {
        uVar7 = uVar7 + 1 & 0xff;
      }
      uVar8 = uVar8 + 0x114;
    } while (uVar8 != 0x1590);
    FUN_1006bc30(&local_144);
  }
  return uVar7;
}

