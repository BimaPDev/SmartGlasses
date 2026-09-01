/* FUN_10126fda @ 0x10126fda */

int FUN_10126fda(int param_1)

{
  int iVar1;
  int iVar2;
  int extraout_r2;
  int iVar3;
  
  if (param_1 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(param_1 + 4);
    if (iVar3 == 0) {
      iVar3 = 0;
    }
    else {
      iVar1 = FUN_10126fd2(iVar3);
      iVar2 = 0;
      while (iVar1 != iVar2) {
        iVar2 = FUN_10126fb4(iVar3,iVar2);
        if (param_1 == iVar2) {
          return extraout_r2;
        }
        iVar2 = extraout_r2 + 1;
      }
      iVar3 = -1;
    }
  }
  return iVar3;
}

