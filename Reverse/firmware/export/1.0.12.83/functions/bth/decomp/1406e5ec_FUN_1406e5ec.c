/* FUN_1406e5ec @ 0x1406e5ec */

void FUN_1406e5ec(int param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = *(int **)(DAT_1406e640 + (param_1 + 6) * 4);
  if (piVar2[2] == 0) goto LAB_1406e620;
  do {
    FUN_14073a58(piVar2 + 2);
    FUN_14074168();
  } while (piVar2[2] != 0);
  iVar1 = *piVar2;
  while (iVar1 != 0) {
    FUN_1406e314(param_1,0,1,0x46);
LAB_1406e620:
    iVar1 = *piVar2;
  }
  if ((char)piVar2[6] == -1) {
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x42,DAT_1406e648,0x2d9,DAT_1406e644);
  }
  return;
}

