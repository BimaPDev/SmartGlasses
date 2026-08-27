/* FUN_2c62f124 @ 0x2c62f124 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c62f124(void)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = FUN_2c62eec4();
  piVar1 = _LAB_2c62f1c0;
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x21,_LAB_2c62f1cc,_LAB_2c62f1c8,_LAB_2c62f1e0);
  }
  if (*_LAB_2c62f1c0 != 0) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x18,_LAB_2c62f1cc,_LAB_2c62f1c8,_LAB_2c62f1c4);
  }
  iVar2 = FUN_2c647174(1,0,_LAB_2c62f1d8);
  *piVar1 = iVar2;
  piVar1 = _LAB_2c62f1d0;
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x26,_LAB_2c62f1cc,_LAB_2c62f1c8,_LAB_2c62f1e4);
  }
  if (*_LAB_2c62f1d0 != 0) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x2d,_LAB_2c62f1cc,_LAB_2c62f1c8,_LAB_2c62f1d4);
  }
  iVar2 = FUN_2c6440f0(_LAB_2c62f1dc);
  *piVar1 = iVar2;
  if (iVar2 != 0) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x31,_LAB_2c62f1cc,_LAB_2c62f1c8,_LAB_2c62f1e8);
}

