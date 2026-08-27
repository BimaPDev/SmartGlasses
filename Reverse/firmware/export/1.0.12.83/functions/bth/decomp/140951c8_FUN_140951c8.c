/* FUN_140951c8 @ 0x140951c8 */

void FUN_140951c8(void)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  if (*DAT_14095250 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x41,DAT_14095264,DAT_14095258);
  }
  piVar3 = *(int **)*DAT_14095254;
  piVar2 = (undefined4 *)*DAT_14095254;
  while( true ) {
    piVar1 = piVar3;
    if (piVar2 == DAT_14095254) {
                    /* WARNING: Subroutine does not return */
      FUN_1402a64c(0x41,DAT_14095260,DAT_14095258);
    }
    if (*(char *)(piVar2 + 2) != '\0') break;
    piVar3 = (int *)*piVar1;
    piVar2 = piVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402a64c(0x47,DAT_1409525c,DAT_14095258,*(undefined1 *)((int)piVar2 + 9),
               *(undefined1 *)((int)piVar2 + 10),*(undefined1 *)((int)piVar2 + 0xb),
               *(undefined1 *)(piVar2 + 3),*(undefined1 *)((int)piVar2 + 0xd),
               *(undefined1 *)((int)piVar2 + 0xe));
}

