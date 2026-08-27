/* FUN_2c4fab98 @ 0x2c4fab98 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4fab98(void)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = FUN_2c6442a4(_LAB_2c4fabec,0);
  *_LAB_2c4fabf0 = iVar2;
  piVar1 = _LAB_2c4fabf4;
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x2f0,_LAB_2c4fac0c,_LAB_2c4fac08,_LAB_2c4fac04);
  }
  func_0x2c4f90e4(_LAB_2c4fabf8);
  if (*piVar1 == 0) {
    iVar2 = FUN_2c6440f0(_LAB_2c4fac00);
    *piVar1 = iVar2;
  }
  *_LAB_2c49224c = _LAB_2c4fabfc;
  return;
}

