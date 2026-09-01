/* FUN_10125716 @ 0x10125716 */

int FUN_10125716(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = FUN_10126fae();
  iVar5 = *(int *)(param_1 + 0x14);
  if (iVar1 != 0) {
    iVar4 = *(int *)(iVar1 + 0x14);
    iVar2 = FUN_10125ffe();
    iVar3 = FUN_101254be(iVar1);
    iVar1 = FUN_101254a6(iVar1);
    iVar5 = (((iVar5 - iVar4) + iVar2) - iVar3) - iVar1;
  }
  return iVar5;
}

