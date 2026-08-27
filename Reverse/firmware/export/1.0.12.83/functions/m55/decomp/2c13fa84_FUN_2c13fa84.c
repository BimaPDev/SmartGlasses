/* FUN_2c13fa84 @ 0x2c13fa84 */

int FUN_2c13fa84(int param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  char *pcVar4;
  int *piVar5;
  
  piVar5 = (int *)(param_1 + 0x28);
  do {
    ExclusiveAccess(piVar5);
    iVar3 = *piVar5;
    if (iVar3 == 0) {
      ClearExclusiveLocal();
      goto LAB_2c13faa0;
    }
    bVar2 = (bool)hasExclusiveAccess(piVar5);
  } while (!bVar2);
  *piVar5 = iVar3 + -1;
LAB_2c13faa0:
  if (iVar3 != 0) {
    for (iVar3 = *(int *)(param_1 + 0x2c); iVar3 != 0; iVar3 = *(int *)(iVar3 + 8)) {
      pcVar4 = (char *)(iVar3 + 2);
      do {
        ExclusiveAccess(pcVar4);
        cVar1 = *pcVar4;
        bVar2 = (bool)hasExclusiveAccess(pcVar4);
      } while (!bVar2);
      *pcVar4 = '\x01';
      if (cVar1 == '\0') {
        return iVar3;
      }
    }
  }
  return 0;
}

