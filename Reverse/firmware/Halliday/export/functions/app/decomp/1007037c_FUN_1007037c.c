/* FUN_1007037c @ 0x1007037c */

int FUN_1007037c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = *(int **)(param_1 + 0x10);
  if ((*(char *)((int)piVar3 + 9) == '\0') || (param_2 << 0x1e < 0)) {
    FUN_10113cfc(piVar3 + 0x13,param_2,0xffffffff,0xffffffff);
    iVar2 = FUN_1005f510(param_2);
    if (-1 < iVar2) {
      iVar1 = *piVar3;
      *piVar3 = iVar1 + 1;
      if (iVar1 == 0) {
        FUN_10070204((int)piVar3 + 9);
      }
    }
    FUN_10113e2c(piVar3 + 0x13);
  }
  else {
    FUN_10119dc2(DAT_100703cc);
    iVar2 = -1;
  }
  return iVar2;
}

