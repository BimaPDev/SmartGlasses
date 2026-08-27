/* FUN_140956f8 @ 0x140956f8 */

char FUN_140956f8(void)

{
  int iVar1;
  undefined4 in_r3;
  int *piVar2;
  int *piVar3;
  char cVar4;
  
  FUN_140755e4();
  piVar3 = *(int **)(DAT_14095740 + 4);
  piVar2 = (int *)*piVar3;
  if (piVar3 == piVar2) {
    cVar4 = '\0';
  }
  else {
    iVar1 = 0x3ea;
    cVar4 = '\0';
    do {
      if ((*(char *)((int)piVar2 + 0x1e) != '\0') && (*(byte *)((int)piVar2 + 0x4b) - 3 < 2)) {
        cVar4 = cVar4 + '\x01';
      }
      iVar1 = iVar1 + -1;
      piVar2 = (int *)*piVar2;
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1402b0f8(DAT_14095744,0x3e9,0,piVar2,in_r3);
      }
    } while (piVar3 != piVar2);
  }
  FUN_1407561c();
  return cVar4;
}

