/* FUN_1400d480 @ 0x1400d480 */

uint FUN_1400d480(byte *param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  bVar1 = param_1[2];
  if (bVar1 == 0) {
    iVar2 = 1;
    param_1[6] = 1;
  }
  else {
    iVar2 = 2;
    param_1[6] = 2;
    if (3 < bVar1) {
      return 0;
    }
  }
  if ((4 < param_1[1]) || (1 < param_1[3])) {
    return 0;
  }
  uVar5 = (uint)param_1[4];
  if ((param_1[7] & 3) == 0) {
    switch(uVar5) {
    case 4:
    case 8:
    case 0xc:
    case 0x10:
      goto switchD_1400d4aa_caseD_4;
    default:
      return 0;
    }
  }
  if (uVar5 != 0xf) {
    return 0;
  }
switchD_1400d4aa_caseD_4:
  uVar4 = (uint)param_1[5];
  if ((uVar4 != 4) && (uVar4 != 8)) {
    return 0;
  }
  if (bVar1 == 2) {
    uVar3 = 0;
LAB_1400d4ea:
    uVar3 = *param_1 * uVar5 + uVar3;
  }
  else {
    if (2 < bVar1) {
      uVar3 = uVar4;
      if (bVar1 != 3) {
        uVar5 = iVar2 * uVar4 >> 1;
        goto LAB_1400d51e;
      }
      goto LAB_1400d4ea;
    }
    uVar3 = (uint)*param_1 * iVar2 * uVar5;
  }
  uVar5 = (uVar4 * iVar2 >> 1) + (uVar3 >> 3);
  if ((uVar3 & 7) != 0) {
    return uVar5 + 5 & 0xffff;
  }
LAB_1400d51e:
  return uVar5 + 4 & 0xffff;
}

