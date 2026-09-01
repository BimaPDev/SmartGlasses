/* FUN_100ef918 @ 0x100ef918 */

int FUN_100ef918(uint param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(DAT_100ef940 + 0xc);
  if (piVar1 == (int *)(DAT_100ef940 + 0xc)) {
LAB_100ef93c:
    piVar1 = (int *)0x0;
  }
  else {
    while( true ) {
      if (piVar1 == (int *)0x0) {
        return 0;
      }
      if (*(ushort *)piVar1[4] == param_1) break;
      if (piVar1 == (int *)*(int *)(DAT_100ef940 + 0x10)) goto LAB_100ef93c;
      piVar1 = (int *)*piVar1;
    }
  }
  return (int)piVar1;
}

