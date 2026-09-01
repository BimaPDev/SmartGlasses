/* FUN_1007ab70 @ 0x1007ab70 */

uint FUN_1007ab70(uint param_1)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  
  if ((int)param_1 < 0) {
    iVar4 = 0;
    param_1 = 0;
  }
  else {
    if (1099 < (int)param_1) {
      return (uint)*(ushort *)(DAT_1007abc4 + 0xc);
    }
    iVar4 = (int)param_1 / 100;
    if (iVar4 == 10) {
      uVar2 = *(ushort *)(DAT_1007abc4 + 0x58);
      uVar1 = *(ushort *)(DAT_1007abc4 + 0xc);
      goto LAB_1007ab94;
    }
  }
  uVar2 = *(ushort *)(DAT_1007abc4 + iVar4 * 2 + 0x44);
  uVar1 = *(ushort *)(DAT_1007abc4 + iVar4 * 2 + 0x46);
LAB_1007ab94:
  uVar3 = (uint)uVar2;
  if (uVar3 < uVar1) {
    uVar3 = uVar3 + ((uVar1 - uVar3) * (param_1 % 100)) / 100;
  }
  return uVar3;
}

