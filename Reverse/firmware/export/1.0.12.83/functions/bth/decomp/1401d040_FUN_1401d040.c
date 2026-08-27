/* FUN_1401d040 @ 0x1401d040 */

int FUN_1401d040(uint *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = 4;
  while( true ) {
    if (param_1[1] == 0) {
      uVar2 = FUN_1401c128(param_1 + 2);
      uVar4 = -((int)uVar2 >> 0x1f);
      *param_1 = uVar2;
      param_1[1] = 0x1f;
    }
    else {
      uVar2 = param_1[1] - 1;
      uVar4 = *param_1 >> (uVar2 & 0xff) & 1;
      param_1[1] = uVar2;
    }
    if (uVar4 == 0) break;
    uVar5 = uVar5 + 1;
    if (uVar5 == 0xd) {
      return 0x2000;
    }
  }
  uVar3 = param_1[1];
  uVar2 = uVar5 - uVar3;
  uVar4 = 0;
  if ((int)uVar2 < 1) {
    uVar2 = *param_1;
  }
  else {
    if (uVar2 != 0x20) {
      uVar4 = *param_1 << (uVar2 & 0xff);
    }
    uVar2 = FUN_1401c128(param_1 + 2);
    *param_1 = uVar2;
    uVar3 = param_1[1] + 0x20;
  }
  param_1[1] = uVar3 - uVar5;
  iVar1 = ((uVar2 >> (uVar3 - uVar5 & 0xff) | uVar4) & *(uint *)(DAT_1401d0d0 + uVar5 * 4)) +
          (1 << (uVar5 & 0xff));
  if (-1 < param_2) {
    return iVar1;
  }
  return -iVar1;
}

