/* FUN_2c5dc240 @ 0x2c5dc240 */

uint FUN_2c5dc240(char *param_1)

{
  uint uVar1;
  uint uVar2;
  char *pcVar3;
  int iVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  char *pcVar4;
  
  uVar2 = (uint)*param_1;
  if ((uVar2 & 0xf0) == 0xf0) {
    uVar2 = uVar2 & 7;
    iVar5 = 4;
  }
  else if ((uVar2 & 0xe0) == 0xe0) {
    uVar2 = uVar2 & 0xf;
    iVar5 = 3;
  }
  else {
    if ((uVar2 & 0xc0) != 0xc0) goto LAB_2c5dc25c;
    uVar2 = uVar2 & 0x1f;
    iVar5 = 2;
  }
  pcVar4 = param_1 + 1;
  do {
    pcVar3 = pcVar4 + 1;
    uVar2 = (int)*pcVar4 & 0x3fU | uVar2 << 6;
    if (((int)*pcVar4 & 0xc0U) != 0x80) {
      return 0;
    }
    pcVar4 = pcVar3;
  } while (param_1 + iVar5 != pcVar3);
  uVar1 = DAT_2c5dc2f0 + uVar2;
  bVar6 = 0x34f < DAT_2c5dc2f4 + uVar2;
  bVar8 = DAT_2c5dc2f4 + uVar2 == 0x350;
  if (bVar6) {
    bVar8 = uVar1 == 0x19;
  }
  bVar7 = 0x18 < uVar1;
  if ((!bVar6 || !bVar7) || bVar8) {
    uVar1 = 1;
  }
  if ((bVar6 && bVar7) && !bVar8) {
    uVar1 = 0;
  }
  if ((!bVar6 || !bVar7) || bVar8) {
    return uVar1;
  }
  if (DAT_2c5dc2f8 + uVar2 < 0x80) {
    return 1;
  }
LAB_2c5dc25c:
  if ((0xff < DAT_2c5dc2e8 + uVar2) && (0x1bf < uVar2 - 0x2600)) {
    uVar1 = DAT_2c5dc2ec + uVar2;
    bVar8 = 0xfe0e < uVar2;
    bVar6 = uVar2 == 0xfe0f;
    if (!bVar6) {
      bVar8 = 2 < uVar1;
    }
    bVar7 = uVar1 == 3;
    if (!bVar8 || (bVar6 || bVar7)) {
      uVar1 = 1;
    }
    if (bVar8 && (!bVar6 && !bVar7)) {
      uVar1 = 0;
    }
    return uVar1;
  }
  return 1;
}

