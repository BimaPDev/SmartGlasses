/* FUN_100d456c @ 0x100d456c */

void FUN_100d456c(int param_1)

{
  int *piVar1;
  
  for (piVar1 = *(int **)*DAT_100d4584; (piVar1 != (int *)0x0 && (piVar1[3] != param_1));
      piVar1 = (int *)*piVar1) {
  }
  return;
}

