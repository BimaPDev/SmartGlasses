/* FUN_2c4933a8 @ 0x2c4933a8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4933a8(void)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = _LAB_2c49341c;
  if (*_LAB_2c49341c == 0) {
    iVar2 = FUN_2c64419c(_LAB_2c493440);
    *piVar1 = iVar2;
  }
  iVar2 = FUN_2c6442a4(_LAB_2c493420,0);
  *_LAB_2c493424 = iVar2;
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0xc2,_LAB_2c493430,_LAB_2c49342c,_LAB_2c493428,iVar2);
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,0xbe,_LAB_2c493430,_LAB_2c49342c,_LAB_2c49343c,_LAB_2c493438);
}

