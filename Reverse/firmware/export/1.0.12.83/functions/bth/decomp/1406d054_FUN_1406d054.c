/* FUN_1406d054 @ 0x1406d054 */

int FUN_1406d054(uint param_1,uint param_2,uint param_3)

{
  int iVar1;
  int *piVar2;
  
  if (1 < param_1) {
    return 0;
  }
  iVar1 = *(int *)(DAT_1406d0bc + (param_1 + 0x22) * 4);
  if (iVar1 != 0) {
    piVar2 = *(int **)(iVar1 + 0x28);
    while( true ) {
      if (piVar2 == (int *)0x0) {
        for (piVar2 = *(int **)(iVar1 + 0x30);
            (piVar2 != (int *)0x0 &&
            ((((*(byte *)((int)piVar2 + 0x11) & 7) - 4 < 2 ||
              (*(byte *)((int)piVar2 + 0x13) != param_3)) ||
             (*(ushort *)((int)piVar2 + 0x16) != param_2)))); piVar2 = (int *)*piVar2) {
        }
        return (int)piVar2;
      }
      if (((1 < (*(byte *)((int)piVar2 + 0x11) & 7) - 4) &&
          (*(byte *)((int)piVar2 + 0x13) == param_3)) &&
         (*(ushort *)((int)piVar2 + 0x16) == param_2)) break;
      piVar2 = (int *)*piVar2;
    }
    return (int)piVar2;
  }
  return 0;
}

