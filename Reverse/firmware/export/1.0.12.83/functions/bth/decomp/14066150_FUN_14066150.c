/* FUN_14066150 @ 0x14066150 */

char FUN_14066150(uint param_1)

{
  char cVar1;
  int *piVar2;
  
  cVar1 = '\0';
  piVar2 = LAB_14066170;
  do {
    if ((*piVar2 != 0) && (*(byte *)((int)piVar2 + 9) == param_1)) {
      cVar1 = cVar1 + '\x01';
    }
    piVar2 = piVar2 + 3;
  } while (piVar2 != LAB_14066170 + 0x21);
  return cVar1;
}

