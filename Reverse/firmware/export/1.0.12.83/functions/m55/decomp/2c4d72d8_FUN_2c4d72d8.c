/* FUN_2c4d72d8 @ 0x2c4d72d8 */

int FUN_2c4d72d8(uint param_1,uint param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    *param_3 = 0;
    return 0;
  }
  uVar5 = ~param_1;
  if ((int)~param_1 < (int)param_1) {
    uVar5 = param_1;
  }
  uVar3 = ~param_2;
  if ((int)~param_2 < (int)param_2) {
    uVar3 = param_2;
  }
  iVar1 = param_1 << (LZCOUNT(uVar5) - 1U & 0xff);
  iVar2 = param_2 << (LZCOUNT(uVar3) - 1U & 0xff);
  iVar4 = (LZCOUNT(uVar3) - 1U) + (LZCOUNT(uVar5) - 1U);
  if ((iVar1 == -0x80000000) && (iVar2 == -0x80000000)) {
    *param_3 = 1 - iVar4;
    return 0x40000000;
  }
  *param_3 = -iVar4;
  return (int)((ulonglong)((longlong)iVar1 * (longlong)iVar2) >> 0x20) << 1;
}

