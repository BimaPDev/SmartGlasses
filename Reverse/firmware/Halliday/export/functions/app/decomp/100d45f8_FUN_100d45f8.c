/* FUN_100d45f8 @ 0x100d45f8 */

void FUN_100d45f8(int param_1,int param_2)

{
  byte bVar1;
  int *piVar2;
  
  piVar2 = *(int **)*DAT_100d462c;
  while( true ) {
    if (piVar2 == (int *)0x0) {
      return;
    }
    if (param_2 == 0) {
      bVar1 = *(byte *)(piVar2 + 0xe);
    }
    else {
      bVar1 = *(byte *)((int)piVar2 + 0x39);
    }
    if ((((bVar1 & 1) != 0) && (piVar2[3] != param_1)) && ((*(byte *)(piVar2 + 0xe) & 0xf0) == 0))
    break;
    piVar2 = (int *)*piVar2;
  }
  return;
}

