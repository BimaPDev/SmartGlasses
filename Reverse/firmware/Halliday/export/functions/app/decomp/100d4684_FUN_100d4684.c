/* FUN_100d4684 @ 0x100d4684 */

void FUN_100d4684(void)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  piVar3 = *(int **)*DAT_100d4704;
  for (piVar2 = piVar3; piVar1 = piVar3, piVar2 != (int *)0x0; piVar2 = (int *)*piVar2) {
    if ((piVar2[0xe] & DAT_100d4708) == DAT_100d470c) {
      return;
    }
  }
  for (; piVar2 = piVar3, piVar1 != (int *)0x0; piVar1 = (int *)*piVar1) {
    if ((piVar1[0xe] & DAT_100d4708) == DAT_100d4710) {
      return;
    }
  }
  for (; piVar1 = piVar3, piVar2 != (int *)0x0; piVar2 = (int *)*piVar2) {
    if ((piVar2[0xe] & DAT_100d4714) == 0x10000000) {
      return;
    }
  }
  for (; piVar2 = piVar3, piVar1 != (int *)0x0; piVar1 = (int *)*piVar1) {
    if ((piVar1[0xe] & DAT_100d4714) == 0x20000000) {
      return;
    }
  }
  while( true ) {
    if (piVar2 == (int *)0x0) {
      for (; (piVar3 != (int *)0x0 && ((*(byte *)(piVar3 + 0xe) & 0xf0) != 0));
          piVar3 = (int *)*piVar3) {
      }
      return;
    }
    if ((*(ushort *)(piVar2 + 0xe) & 0x8f0) == 0x800) break;
    piVar2 = (int *)*piVar2;
  }
  return;
}

