/* FUN_14065eac @ 0x14065eac */

void FUN_14065eac(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1 == 2) {
    FUN_140e5658(DAT_14065f80,0,0xa8);
    iVar1 = DAT_14065f80 + 0x84;
    iVar2 = DAT_14065f80;
    do {
      *(undefined1 *)(iVar2 + 9) = 0xff;
      iVar2 = iVar2 + 0xc;
    } while (iVar1 != iVar2);
    return;
  }
  if (param_1 != 3) {
    if (param_1 != 1) {
      return;
    }
    FUN_140746c8(2,DAT_14065f90);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402a64c(0x44,DAT_14065f88,0x157,DAT_14065f84,0x7c,0x58);
}

