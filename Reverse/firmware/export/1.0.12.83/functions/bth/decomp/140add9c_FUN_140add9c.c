/* FUN_140add9c @ 0x140add9c */

int * FUN_140add9c(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  puVar1 = DAT_140adde0;
  iVar2 = FUN_140b4ff0(*DAT_140adde0);
  while( true ) {
    iVar3 = FUN_140b5008(*puVar1);
    if (iVar2 == iVar3) {
      return (int *)0x0;
    }
    piVar4 = (int *)FUN_140b5038(iVar2);
    if (((piVar4 != (int *)0x0) && (*piVar4 == *param_1)) && ((char)piVar4[1] == (char)param_1[1]))
    break;
    iVar2 = FUN_140b5020(iVar2);
  }
  return piVar4;
}

