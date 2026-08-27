/* FUN_2c4aa4b8 @ 0x2c4aa4b8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4aa4b8(void)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = _LAB_2c4aa4dc;
  if (*_LAB_2c4aa4dc == 0) {
    iVar2 = FUN_2c4c2c50(_LAB_2c4aa4e0,0x1400);
    *piVar1 = iVar2;
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_2c673ca8(_LAB_2c4aa4e8,_LAB_2c4aa4e4);
    }
  }
  return;
}

