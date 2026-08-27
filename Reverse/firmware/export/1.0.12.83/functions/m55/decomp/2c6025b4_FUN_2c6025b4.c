/* FUN_2c6025b4 @ 0x2c6025b4 */

uint FUN_2c6025b4(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 == 0) {
    return 0;
  }
  uVar5 = *(byte *)(iVar2 + 0x1a) & 0x3f;
  if ((*(byte *)(iVar2 + 0x1a) & 0x3f) != 0) {
    iVar4 = 0;
    iVar3 = *(int *)(iVar2 + 0xc);
    do {
      iVar1 = iVar4 * 4;
      iVar4 = iVar4 + 3;
      if (*(int *)(*(int *)(iVar2 + 0xc) + iVar1) == param_2) {
        return *(uint *)(iVar3 + 4);
      }
      iVar3 = iVar3 + 0xc;
    } while (iVar4 != uVar5 * 3);
    return 0;
  }
  return uVar5;
}

