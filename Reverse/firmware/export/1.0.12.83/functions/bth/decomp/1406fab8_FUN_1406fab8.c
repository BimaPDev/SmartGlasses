/* FUN_1406fab8 @ 0x1406fab8 */

undefined4 FUN_1406fab8(uint param_1)

{
  int *piVar1;
  
  if (param_1 == 0) {
    return 0x40;
  }
  piVar1 = *(int **)(DAT_1406fae8 + 0x10);
  while( true ) {
    if (piVar1 == (int *)0x0) {
      return 0x3a;
    }
    if (*(ushort *)((int)piVar1 + 10) == param_1) break;
    piVar1 = (int *)*piVar1;
  }
  FUN_14073a6c(DAT_1406faec,piVar1);
  FUN_14074168(piVar1);
  return 0;
}

