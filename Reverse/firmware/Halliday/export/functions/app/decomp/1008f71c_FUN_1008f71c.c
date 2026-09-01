/* FUN_1008f71c @ 0x1008f71c */

undefined4 FUN_1008f71c(code *param_1,undefined4 param_2,uint *param_3)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  
  puVar2 = DAT_1008f778;
  piVar1 = DAT_1008f770;
  if (*DAT_1008f770 != 0) {
    uVar4 = *DAT_1008f774;
    do {
      if (uVar4 == 0) {
        return 0;
      }
      if ((*(uint *)(uVar4 + 4) & 0x3fffffff) == 0) {
        return 0;
      }
      iVar3 = (*param_1)(uVar4,param_2);
      if (iVar3 == 1) {
        if (param_3 != (uint *)0x0) {
          *param_3 = uVar4;
          return 1;
        }
        return 1;
      }
      if (*piVar1 == 0) {
        return 0;
      }
      iVar3 = FUN_101284ca(uVar4);
      uVar4 = uVar4 + iVar3;
    } while (uVar4 < *puVar2);
  }
  return 0;
}

