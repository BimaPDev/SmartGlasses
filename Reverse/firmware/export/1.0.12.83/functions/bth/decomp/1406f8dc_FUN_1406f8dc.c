/* FUN_1406f8dc @ 0x1406f8dc */

int FUN_1406f8dc(uint param_1)

{
  int *piVar1;
  
  for (piVar1 = *(int **)(DAT_1406f8f4 + 0x10);
      (piVar1 != (int *)0x0 && (*(ushort *)((int)piVar1 + 10) != param_1)); piVar1 = (int *)*piVar1)
  {
  }
  return (int)piVar1;
}

