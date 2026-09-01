/* FUN_100d4630 @ 0x100d4630 */

void FUN_100d4630(void)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  piVar3 = *(int **)*DAT_100d4678;
  for (piVar2 = piVar3; piVar1 = piVar3, piVar2 != (int *)0x0; piVar2 = (int *)*piVar2) {
    if ((piVar2[0xe] & DAT_100d467c) == 0x1000100) {
      return;
    }
  }
  while( true ) {
    if (piVar1 == (int *)0x0) {
      for (; (piVar3 != (int *)0x0 && ((*(ushort *)(piVar3 + 0xe) & 0x1f0) != 0x100));
          piVar3 = (int *)*piVar3) {
      }
      return;
    }
    if ((piVar1[0xe] & DAT_100d467c) == DAT_100d4680) break;
    piVar1 = (int *)*piVar1;
  }
  return;
}

