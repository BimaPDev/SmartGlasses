/* FUN_101214ae @ 0x101214ae */

undefined4 FUN_101214ae(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = *(int *)(param_1 + 0xc);
  iVar4 = 0;
  iVar5 = iVar6;
  while( true ) {
    cVar1 = *(char *)(*(int *)(iVar6 + 0x74) + 1);
    if ((*(char *)(iVar5 + 0x91) == cVar1) &&
       (sVar2 = *(short *)(iVar5 + 0x92),
       sVar3 = FUN_10120ace(param_1,param_2,*(char *)(iVar5 + 0x91),cVar1,param_4), sVar2 == sVar3))
    break;
    iVar4 = iVar4 + 1;
    iVar5 = iVar5 + 0xc;
    if (iVar4 == 4) {
      return 0;
    }
  }
  *(int *)(iVar6 + 0x8c) = iVar4 * 0xc + iVar6 + 0x90;
  return 1;
}

