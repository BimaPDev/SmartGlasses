/* FUN_2c019824 @ 0x2c019824 */

short FUN_2c019824(byte *param_1)

{
  byte bVar1;
  short sVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  bVar1 = param_1[2];
  if (bVar1 == 0) {
    iVar5 = 1;
    param_1[6] = 1;
  }
  else {
    iVar5 = 2;
    param_1[6] = 2;
    if (3 < bVar1) {
      return 0;
    }
  }
  if ((4 < param_1[1]) || (1 < param_1[3])) {
    return 0;
  }
  uVar3 = (uint)param_1[4];
  if ((param_1[7] & 3) == 0) {
    switch(uVar3) {
    case 4:
    case 8:
    case 0xc:
    case 0x10:
      goto switchD_2c019850_caseD_4;
    default:
      return 0;
    }
  }
  if (uVar3 != 0xf) {
    return 0;
  }
switchD_2c019850_caseD_4:
  uVar6 = (uint)param_1[5];
  if ((uVar6 != 4) && (uVar6 != 8)) {
    return 0;
  }
  if (bVar1 == 2) {
    uVar4 = 0;
  }
  else {
    uVar4 = uVar6;
    if (bVar1 != 3) {
      uVar4 = iVar5 * uVar3 * (uint)*param_1;
      goto LAB_2c019898;
    }
  }
  uVar4 = *param_1 * uVar3 + uVar4;
LAB_2c019898:
  sVar2 = (short)(uVar6 * iVar5 >> 1) + (short)(uVar4 >> 3);
  if ((uVar4 & 7) == 0) {
    sVar2 = sVar2 + 4;
  }
  else {
    sVar2 = sVar2 + 5;
  }
  return sVar2;
}

