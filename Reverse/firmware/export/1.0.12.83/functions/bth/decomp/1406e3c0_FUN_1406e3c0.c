/* FUN_1406e3c0 @ 0x1406e3c0 */

void FUN_1406e3c0(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = *(int **)(DAT_1406e41c + (param_1 + 6) * 4);
  if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x42,DAT_1406e424,0x24a,DAT_1406e420);
  }
  if (*(short *)(param_2 + 8) == 0) {
    iVar1 = *piVar2;
    FUN_140739f0(piVar2,param_2);
    if (iVar1 != 0) {
      return;
    }
    FUN_14058748(piVar2 + 4,0);
    return;
  }
  FUN_14073a28(piVar2 + 2,param_2);
  FUN_1406e314(param_1,*(undefined2 *)(param_2 + 8),0);
  return;
}

