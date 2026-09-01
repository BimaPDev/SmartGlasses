/* FUN_100f8340 @ 0x100f8340 */

void FUN_100f8340(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  if (*(int *)(param_1 + 0x24) < 1) {
    iVar1 = *(int *)(param_1 + 0x28);
  }
  else {
    iVar3 = 0;
    iVar1 = *(int *)(param_1 + 0x28);
    do {
      while( true ) {
        piVar4 = *(int **)(iVar1 + iVar3 * 4);
        iVar1 = *(int *)(*piVar4 + 100);
        if (*(code **)(piVar4[3] + 8) == (code *)0x0) break;
        (**(code **)(piVar4[3] + 8))(piVar4);
        (**(code **)(iVar1 + 8))(iVar1,piVar4);
        iVar2 = *(int *)(param_1 + 0x24);
        iVar1 = *(int *)(param_1 + 0x28);
        *(undefined4 *)(iVar1 + iVar3 * 4) = 0;
        iVar3 = iVar3 + 1;
        if (iVar2 <= iVar3) goto LAB_100f837c;
      }
      (**(code **)(iVar1 + 8))(iVar1,piVar4);
      iVar2 = *(int *)(param_1 + 0x24);
      iVar1 = *(int *)(param_1 + 0x28);
      *(undefined4 *)(iVar1 + iVar3 * 4) = 0;
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar2);
  }
LAB_100f837c:
  if (iVar1 != 0) {
    (**(code **)(param_2 + 8))(param_2);
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  return;
}

