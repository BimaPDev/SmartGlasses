/* FUN_10121e54 @ 0x10121e54 */

void FUN_10121e54(int param_1)

{
  char cVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 0xc);
  cVar1 = *(char *)(*piVar2 + 9) * *(char *)(*piVar2 + 8);
  *(char *)((int)piVar2 + 0x10d3) = cVar1;
  *(char *)(piVar2 + 0x435) = cVar1;
  *(byte *)((int)piVar2 + 0x10d5) = *(byte *)((int)piVar2 + 0xc5);
  *(ushort *)(piVar2 + 0x436) =
       *(short *)((int)piVar2 + 0x10da) * (ushort)*(byte *)((int)piVar2 + 0xc5);
  *(undefined2 *)((int)piVar2 + 0x10de) = *(undefined2 *)((int)piVar2 + 0xc2);
  *(undefined1 *)((int)piVar2 + 0x10d2) = 0;
  return;
}

