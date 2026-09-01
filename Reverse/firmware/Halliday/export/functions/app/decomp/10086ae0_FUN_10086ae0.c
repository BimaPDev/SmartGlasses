/* FUN_10086ae0 @ 0x10086ae0 */

int FUN_10086ae0(byte *param_1,int param_2,uint *param_3)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  
  iVar1 = 0;
  uVar2 = (uint)*param_1;
  puVar3 = DAT_10086b40;
  while( true ) {
    if (*puVar3 == 0) {
      return -1;
    }
    iVar1 = iVar1 + 1;
    if ((*puVar3 & (uint)*param_1) == puVar3[1]) {
      uVar2 = uVar2 & puVar3[3];
      if (uVar2 < puVar3[4]) {
        return -1;
      }
      if (0x10ffff < uVar2) {
        return -1;
      }
      if ((uVar2 & 0xfffff800) == 0xd800) {
        return -1;
      }
      *param_3 = uVar2;
      return iVar1;
    }
    if (param_2 <= iVar1) {
      return -1;
    }
    if (((param_1[iVar1] ^ 0x80) & 0xc0) != 0) break;
    uVar2 = param_1[iVar1] ^ 0x80 | uVar2 << 6;
    puVar3 = puVar3 + 5;
  }
  return -1;
}

