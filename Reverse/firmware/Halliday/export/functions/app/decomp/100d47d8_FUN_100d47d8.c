/* FUN_100d47d8 @ 0x100d47d8 */

int FUN_100d47d8(int param_1)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = 0;
  piVar3 = *(int **)*DAT_100d4810;
  do {
    if (piVar3 == (int *)0x0) {
      return iVar2;
    }
    bVar1 = *(byte *)(piVar3 + 0xe);
    if ((bVar1 & 1) == 0) goto LAB_100d47fc;
    if (param_1 == 0) {
LAB_100d480a:
      iVar2 = iVar2 + 1;
    }
    else if (param_1 == 1) {
      if ((bVar1 & 0x70) == 0) goto LAB_100d480a;
    }
    else if ((param_1 == 2) && ((bVar1 & 0x70) != 0)) goto LAB_100d480a;
LAB_100d47fc:
    piVar3 = (int *)*piVar3;
  } while( true );
}

