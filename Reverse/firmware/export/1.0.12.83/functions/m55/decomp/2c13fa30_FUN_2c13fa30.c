/* FUN_2c13fa30 @ 0x2c13fa30 */

void FUN_2c13fa30(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  if (*(int *)(param_1 + 0x30) == 0) {
    *(undefined4 *)(param_2 + 4) = 0;
    *(undefined4 *)(param_2 + 8) = 0;
    *(int *)(param_1 + 0x2c) = param_2;
LAB_2c13fa76:
    *(int *)(param_1 + 0x30) = param_2;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x30);
    iVar5 = 0;
    do {
      iVar4 = iVar2;
      if (*(byte *)(param_2 + 3) <= *(byte *)(iVar4 + 3)) {
        *(int *)(param_2 + 4) = iVar4;
        *(int *)(param_2 + 8) = iVar5;
        *(int *)(iVar4 + 8) = param_2;
        if (iVar5 == 0) goto LAB_2c13fa76;
        goto LAB_2c13fa54;
      }
      iVar2 = *(int *)(iVar4 + 4);
      iVar5 = iVar4;
    } while (*(int *)(iVar4 + 4) != 0);
    *(undefined4 *)(param_2 + 4) = 0;
    *(int *)(param_2 + 8) = iVar4;
    *(int *)(param_1 + 0x2c) = param_2;
LAB_2c13fa54:
    *(int *)(iVar5 + 4) = param_2;
  }
  piVar3 = (int *)(param_1 + 0x28);
  do {
    ExclusiveAccess(piVar3);
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = *piVar3 + 1;
  return;
}

