/* FUN_2c5fa034 @ 0x2c5fa034 */

int FUN_2c5fa034(byte *param_1,int param_2,uint *param_3)

{
  byte *pbVar1;
  uint uVar3;
  int iVar4;
  byte *pbVar2;
  
  *param_3 = 0xffffffff;
  if (param_2 == 0) {
    return -1;
  }
  uVar3 = (uint)*param_1;
  iVar4 = (int)*(char *)(DAT_2c5fa0fc + uVar3);
  if (iVar4 == 0) {
    return -1;
  }
  if ((-1 < param_2) && (param_2 < iVar4)) {
    return -1;
  }
  if (iVar4 < 2) {
    if (iVar4 < 0) {
      return -1;
    }
  }
  else {
    pbVar2 = param_1 + 1;
    do {
      pbVar1 = pbVar2 + 1;
      if ((*pbVar2 & 0xc0) != 0x80) {
        return -1;
      }
      pbVar2 = pbVar1;
    } while (param_1 + iVar4 != pbVar1);
  }
  switch(iVar4) {
  case 2:
    uVar3 = (uVar3 & 0x1f) << 6 | param_1[1] & 0x3f;
    if (uVar3 < 0x80) {
      return -1;
    }
    *param_3 = uVar3;
    break;
  case 3:
    uVar3 = (param_1[1] & 0x3f) * 0x40 + (uVar3 & 0xf) * 0x1000 + (param_1[2] & 0x3f);
    if (uVar3 - 0xd800 < 0x800) {
      return -1;
    }
    if (uVar3 < 0x800) {
      return -1;
    }
  case 1:
    *param_3 = uVar3;
    break;
  case 4:
    uVar3 = ((param_1[1] & 0x3f) << 0xc | (uVar3 & 7) << 0x12) + (param_1[2] & 0x3f) * 0x40 +
            (param_1[3] & 0x3f);
    if (uVar3 - 0x10000 < 0x100000) {
      *param_3 = uVar3;
      return iVar4;
    }
  default:
    return -1;
  }
  return iVar4;
}

