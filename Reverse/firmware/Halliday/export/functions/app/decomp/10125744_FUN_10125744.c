/* FUN_10125744 @ 0x10125744 */

int FUN_10125744(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = FUN_10126fae();
  iVar5 = *(int *)(param_1 + 0x18);
  if (iVar1 != 0) {
    iVar4 = *(int *)(iVar1 + 0x18);
    iVar2 = FUN_10126008();
    iVar3 = FUN_101254d6(iVar1);
    iVar1 = FUN_101254a6(iVar1);
    iVar5 = (((iVar5 - iVar4) + iVar2) - iVar3) - iVar1;
  }
  return iVar5;
}

