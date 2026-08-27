/* FUN_140cba22 @ 0x140cba22 */

void FUN_140cba22(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)(param_1 + 0x18);
  while (piVar1 != (int *)0x0) {
    iVar2 = piVar1[3];
    piVar1[3] = iVar2 + -1;
    if (iVar2 != 0) break;
    piVar1 = (int *)*piVar1;
    thunk_FUN_140db700();
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}

