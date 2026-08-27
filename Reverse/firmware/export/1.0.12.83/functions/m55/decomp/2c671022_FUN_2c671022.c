/* FUN_2c671022 @ 0x2c671022 */

undefined4 FUN_2c671022(int param_1,uint param_2)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  
  piVar3 = (int *)(param_1 + 0x14);
  iVar4 = (int)param_2 >> 5;
  iVar2 = *(int *)(param_1 + 0x10);
  if ((((iVar2 < iVar4) || (bVar1 = iVar2 <= iVar4, iVar2 = iVar4, bVar1)) ||
      (param_2 = param_2 & 0x1f, param_2 == 0)) ||
     (piVar3[iVar4] == ((uint)piVar3[iVar4] >> param_2) << param_2)) {
    piVar5 = piVar3 + iVar2;
    do {
      if (piVar5 <= piVar3) {
        return 0;
      }
      piVar5 = piVar5 + -1;
    } while (*piVar5 == 0);
  }
  return 1;
}

