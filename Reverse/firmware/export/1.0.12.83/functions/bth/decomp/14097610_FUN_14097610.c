/* FUN_14097610 @ 0x14097610 */

int FUN_14097610(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_1409765c;
  if ((param_1 != 0xff) && (param_1 != 0xf)) {
    if (param_1 == 0) {
      *(undefined1 *)(DAT_1409765c + 0x28) = 0;
      *(undefined1 *)(iVar1 + 0xc) = 0;
      return iVar1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x43,DAT_14097664,DAT_14097660);
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402a64c(0x42,DAT_14097668,DAT_14097660);
}

