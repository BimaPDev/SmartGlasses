/* FUN_2c4cb928 @ 0x2c4cb928 */

int FUN_2c4cb928(uint *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = 4;
  while( true ) {
    uVar2 = param_1[1] - 1;
    if (param_1[1] == 0) {
      uVar3 = FUN_2c4d74d4(param_1 + 2);
      param_1[1] = 0x1f;
      uVar2 = -((int)uVar3 >> 0x1f);
      *param_1 = uVar3;
    }
    else {
      param_1[1] = uVar2;
      uVar2 = *param_1 >> (uVar2 & 0xff) & 1;
    }
    if (uVar2 == 0) break;
    uVar5 = uVar5 + 1;
    if (uVar5 == 0xd) {
      return 0x2000;
    }
  }
  uVar4 = param_1[1];
  uVar3 = uVar5 - uVar4;
  uVar2 = 0;
  if ((int)uVar3 < 1) {
    uVar3 = *param_1;
  }
  else {
    if (uVar3 != 0x20) {
      uVar2 = *param_1 << (uVar3 & 0xff);
    }
    uVar3 = FUN_2c4d74d4(param_1 + 2);
    *param_1 = uVar3;
    uVar4 = param_1[1] + 0x20;
  }
  param_1[1] = uVar4 - uVar5;
  iVar1 = ((uVar3 >> (uVar4 - uVar5 & 0xff) | uVar2) & *(uint *)(DAT_2c4cb9b8 + uVar5 * 4)) +
          (1 << (uVar5 & 0xff));
  if (-1 < param_2) {
    return iVar1;
  }
  return -iVar1;
}

