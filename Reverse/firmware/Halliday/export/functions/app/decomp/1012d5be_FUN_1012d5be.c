/* FUN_1012d5be @ 0x1012d5be */

bool FUN_1012d5be(int param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = **(byte **)(param_1 + 4);
  if ((bVar1 & 2) == 0) {
    **(byte **)(param_1 + 4) = bVar1 | 2;
    iVar2 = FUN_1009f98c();
  }
  else {
    iVar2 = *(int *)(param_1 + 8);
  }
  return iVar2 != 0;
}

