/* FUN_1406d034 @ 0x1406d034 */

void FUN_1406d034(int param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *(int *)(DAT_1406d050 + (param_1 + 0x22) * 4);
  if (iVar1 != 0) {
    for (piVar2 = *(int **)(iVar1 + 0x28);
        (piVar2 != (int *)0x0 && (*(ushort *)(piVar2 + 5) != param_2)); piVar2 = (int *)*piVar2) {
    }
  }
  return;
}

