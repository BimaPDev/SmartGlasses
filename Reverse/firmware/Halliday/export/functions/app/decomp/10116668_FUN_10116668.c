/* FUN_10116668 @ 0x10116668 */

void FUN_10116668(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  
  iVar1 = DAT_101166dc;
  iVar2 = thunk_FUN_10115958();
  iVar3 = *(int *)(iVar1 + 8);
  piVar6 = (int *)(iVar3 + 0xa8);
  piVar5 = (int *)*piVar6;
  if ((piVar5 != piVar6) && (piVar5 != (int *)0x0)) {
    if (piVar5 == *(int **)(iVar3 + 0xac)) {
      piVar6 = (int *)0x0;
    }
    else {
      piVar6 = (int *)*piVar5;
    }
    while (piVar5[4] - iVar2 < 1) {
      iVar3 = *piVar5;
      piVar4 = (int *)piVar5[1];
      *piVar4 = iVar3;
      *(int **)(iVar3 + 4) = piVar4;
      *piVar5 = 0;
      piVar5[1] = 0;
      if (piVar5[5] != 0) {
        if (piVar5[3] != 0) {
          FUN_10116500(piVar5,piVar5[3]);
        }
        (*(code *)piVar5[5])(piVar5,piVar5[6]);
      }
      if (piVar6 == (int *)0x0) {
        return;
      }
      piVar5 = piVar6;
      if (piVar6 == *(int **)(*(int *)(iVar1 + 8) + 0xac)) {
        piVar6 = (int *)0x0;
      }
      else {
        piVar6 = (int *)*piVar6;
      }
    }
  }
  return;
}

