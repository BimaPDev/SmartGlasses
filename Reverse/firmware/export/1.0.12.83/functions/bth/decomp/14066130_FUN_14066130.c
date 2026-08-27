/* FUN_14066130 @ 0x14066130 */

void FUN_14066130(void)

{
  ushort uVar1;
  int *piVar2;
  
  uVar1 = 0x40;
  piVar2 = DAT_1406614c;
  do {
    if ((*piVar2 != 0) && (uVar1 < *(ushort *)((int)piVar2 + 6))) {
      uVar1 = *(ushort *)((int)piVar2 + 6);
    }
    piVar2 = piVar2 + 3;
  } while (piVar2 != DAT_1406614c + 0x21);
  return;
}

