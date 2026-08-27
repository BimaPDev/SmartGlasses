/* FUN_140b4210 @ 0x140b4210 */

undefined4 FUN_140b4210(undefined4 param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  
  piVar2 = DAT_140b425c;
  iVar6 = 0;
  piVar4 = DAT_140b425c;
  do {
    piVar1 = piVar4 + 1;
    piVar4 = piVar4 + 6;
    if ((char)*piVar1 == '\0') {
      uVar3 = FUN_140dd3a4(param_1);
      FUN_140e5278(piVar2 + iVar6 * 6 + 1,param_1,uVar3);
      iVar5 = *piVar2;
      piVar2[iVar6 * 6 + 6] = param_2;
      *piVar2 = iVar5 + 1;
      return 0;
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 != 6);
  return 1;
}

