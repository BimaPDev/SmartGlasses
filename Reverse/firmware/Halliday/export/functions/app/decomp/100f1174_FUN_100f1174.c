/* FUN_100f1174 @ 0x100f1174 */

int * FUN_100f1174(uint param_1)

{
  int *piVar1;
  
  piVar1 = (int *)*DAT_100f1190;
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    while (*(ushort *)(piVar1[1] + 0xc) != param_1) {
      piVar1 = (int *)*piVar1;
      if (piVar1 == (int *)0x0) {
        return (int *)0x0;
      }
    }
    piVar1 = piVar1 + 8;
  }
  return piVar1;
}

