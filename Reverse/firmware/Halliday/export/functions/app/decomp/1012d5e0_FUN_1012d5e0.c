/* FUN_1012d5e0 @ 0x1012d5e0 */

bool FUN_1012d5e0(int param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = **(byte **)(param_1 + 4);
  if ((bVar1 & 1) == 0) {
    **(byte **)(param_1 + 4) = bVar1 | 1;
    iVar2 = FUN_1009fa38(param_1,bVar1 & 1);
  }
  else {
    iVar2 = *(int *)(param_1 + 8);
  }
  return iVar2 != 0;
}

