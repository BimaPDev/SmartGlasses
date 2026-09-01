/* FUN_1011c8d6 @ 0x1011c8d6 */

int FUN_1011c8d6(int param_1,char param_2)

{
  char cVar1;
  short sVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  
  iVar3 = (int)(char)(param_2 + -1);
  piVar4 = (int *)(param_1 + iVar3 * 4);
  while ((-1 < iVar3 && (*piVar4 == 0))) {
    iVar3 = (int)(char)((char)iVar3 + -1);
    piVar4 = piVar4 + -1;
  }
  cVar1 = (char)iVar3 + '\x01';
  if (cVar1 == 0) {
    return 0;
  }
  sVar2 = 0;
  for (uVar5 = *(uint *)(param_1 + (cVar1 + 0x3fffffff) * 4); uVar5 != 0; uVar5 = uVar5 >> 1) {
    sVar2 = sVar2 + 1;
  }
  return (int)(short)(sVar2 + (cVar1 + -1) * 0x20);
}

