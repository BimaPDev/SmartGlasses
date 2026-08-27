/* FUN_2c4d7334 @ 0x2c4d7334 */

int FUN_2c4d7334(uint param_1,uint param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  if (param_1 == 0) {
    *param_3 = 0;
    return 0;
  }
  uVar3 = ~param_1;
  if ((int)~param_1 < (int)param_1) {
    uVar3 = param_1;
  }
  iVar4 = 1 - (LZCOUNT(uVar3) - 1U);
  iVar2 = 0;
  if (param_2 != 0) {
    uVar6 = param_2;
    if ((int)param_2 < 0) {
      uVar6 = ~param_2;
    }
    iVar2 = param_2 << (LZCOUNT(uVar6) - 1U & 0xff);
    iVar4 = iVar4 + (LZCOUNT(uVar6) - 1U);
  }
  iVar1 = (int)(param_1 << (LZCOUNT(uVar3) - 1U & 0xff)) >> 2;
  *param_3 = iVar4;
  if (iVar1 == 0) {
    return 0;
  }
  iVar4 = 0xf;
  iVar5 = 0;
  do {
    iVar1 = iVar1 * 2;
    iVar5 = iVar5 * 2;
    if (iVar2 >> 1 <= iVar1) {
      iVar1 = iVar1 - (iVar2 >> 1);
      iVar5 = iVar5 + 1;
    }
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return iVar5 << 0x10;
}

