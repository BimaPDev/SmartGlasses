/* FUN_2c4fb748 @ 0x2c4fb748 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c4fb748(void)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = _LAB_2c4fb770;
  if (*_LAB_2c4fb770 == 0) {
    iVar2 = FUN_2c6441a4(uRam2c4fb77c);
    *piVar1 = iVar2;
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_2c673ca8(uRam2c4fb780);
    }
  }
  *_LAB_2c4fb774 = _FUN_2c4fb778;
  func_0x2c4fbf50();
  return 0;
}

