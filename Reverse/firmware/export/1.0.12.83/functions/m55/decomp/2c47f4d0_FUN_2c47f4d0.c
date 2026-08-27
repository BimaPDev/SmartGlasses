/* FUN_2c47f4d0 @ 0x2c47f4d0 */

int FUN_2c47f4d0(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  
  cVar1 = (char)param_2 + -1;
  iVar5 = (int)cVar1;
  if (iVar5 < 0) {
    if (param_2 == 0) {
      return 0;
    }
    uVar6 = *(uint *)(param_1 + (param_2 + 0x3fffffff) * 4);
    sVar3 = 0;
    if (uVar6 != 0) {
      sVar3 = 0;
      do {
        uVar6 = uVar6 >> 1;
        sVar3 = sVar3 + 1;
      } while (uVar6 != 0);
    }
    return (int)(short)(sVar3 + ((short)param_2 + -1) * 0x20);
  }
  piVar7 = (int *)(param_1 + (iVar5 + 1) * 4);
  iVar2 = (int)cVar1;
  do {
    iVar4 = iVar2;
    piVar7 = piVar7 + -1;
    cVar1 = (char)iVar5;
    iVar5 = iVar5 + -1;
    if (*piVar7 != 0) {
      iVar4 = (int)(char)(cVar1 + '\x01');
      break;
    }
    iVar2 = (int)(char)iVar5;
  } while (-1 < (char)iVar5);
  if (iVar4 == 0) {
    return 0;
  }
  uVar6 = *(uint *)(param_1 + (iVar4 + 0x3fffffff) * 4);
  sVar3 = 0;
  if (uVar6 != 0) {
    sVar3 = 0;
    do {
      uVar6 = uVar6 >> 1;
      sVar3 = sVar3 + 1;
    } while (uVar6 != 0);
  }
  return (int)(short)(sVar3 + ((short)iVar4 + -1) * 0x20);
}

