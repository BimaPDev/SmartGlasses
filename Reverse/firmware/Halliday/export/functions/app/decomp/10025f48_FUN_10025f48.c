/* FUN_10025f48 @ 0x10025f48 */

uint FUN_10025f48(void)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  
  if (*DAT_10025f6c != *DAT_10025f6c) {
    FUN_1013cdc0();
  }
  uVar2 = DAT_10025f44;
  piVar1 = DAT_10025f38;
  iVar5 = *DAT_10025f3c;
  uVar6 = 0;
  if (*DAT_10025f38 != 0) {
    uVar7 = 0;
    do {
      uVar6 = uVar7 & 0xff;
      iVar8 = uVar7 * 0x19e + *piVar1;
      uVar3 = FUN_1011ea10(iVar8 + 0x38);
      uVar4 = FUN_1011ea10(iVar8 + 0x14);
      FUN_101188d0(uVar2,uVar7,uVar3,uVar4);
      iVar8 = FUN_10025db8(iVar8);
      if (iVar8 == 0) goto LAB_10025f1a;
      uVar7 = uVar7 + 1;
    } while (uVar7 != 10);
    uVar6 = 10;
LAB_10025f1a:
    FUN_101188d0(DAT_10025f40,uVar6);
  }
  if (*DAT_10025f3c != iVar5) {
    FUN_1013cdc0();
  }
  return uVar6;
}

