/* FUN_1408b2fc @ 0x1408b2fc */

int FUN_1408b2fc(int param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  
  if (param_1 == 0) {
    return 0;
  }
  piVar5 = DAT_1408b344 + 8;
  piVar2 = DAT_1408b344;
  while( true ) {
    piVar4 = piVar2 + 1;
    iVar3 = *piVar2;
    if ((iVar3 != 0) && (iVar1 = FUN_140db784(param_1,iVar3 + 8,6), iVar1 == 0)) break;
    piVar2 = piVar4;
    if (piVar4 == piVar5) {
      return 0;
    }
  }
  piVar2 = (int *)(iVar3 + 0x14);
  while( true ) {
    piVar2 = piVar2 + 1;
    iVar1 = *piVar2;
    if ((iVar1 != 0) && (*(ushort *)(iVar1 + 0x16) == param_2)) break;
    if (piVar2 == (int *)(iVar3 + 0x44)) {
      return 0;
    }
  }
  return iVar1;
}

