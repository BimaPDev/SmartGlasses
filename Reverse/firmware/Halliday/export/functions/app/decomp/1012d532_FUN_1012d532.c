/* FUN_1012d532 @ 0x1012d532 */

uint FUN_1012d532(short *param_1,uint param_2)

{
  short *psVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  psVar1 = param_1;
  while (psVar1 != param_1 + param_2) {
    iVar2 = (int)*psVar1;
    if (iVar2 < 0) {
      iVar2 = -iVar2;
    }
    uVar3 = uVar3 + iVar2;
    psVar1 = psVar1 + 1;
  }
  return uVar3 / param_2;
}

