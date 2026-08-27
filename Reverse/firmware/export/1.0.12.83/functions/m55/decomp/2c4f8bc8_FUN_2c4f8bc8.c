/* FUN_2c4f8bc8 @ 0x2c4f8bc8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c4f8bc8(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = _LAB_2c4f8c44;
  iVar2 = *_LAB_2c4f8c44;
  *_LAB_2c4f8c48 = 0;
  if (iVar2 == 0) {
    iVar2 = FUN_2c6441a4(_LAB_2c4f8c64);
    *piVar1 = iVar2;
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_2c673ca8(_LAB_2c4f8c68);
    }
  }
  piVar1 = _LAB_2c4f8c50;
  func_0x2c4f7718(_LAB_2c4f8c4c);
  func_0x2c4f770c(_LAB_2c4f8c54);
  if (*piVar1 == 0) {
    iVar2 = FUN_2c6442a4(_LAB_2c4f8c6c);
    *piVar1 = iVar2;
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_2c673ca8(_LAB_2c4f8c74,_LAB_2c4f8c70);
    }
  }
  piVar1 = _LAB_2c4f8c58;
  if (*_LAB_2c4f8c58 != 0) {
    iVar2 = func_0x2c646a4c();
    if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_2c673ca8(_LAB_2c4f8c7c,_LAB_2c4f8c70,iVar2);
    }
    *piVar1 = 0;
  }
  iVar2 = FUN_2c6440f0(_LAB_2c4f8c5c,0);
  *piVar1 = iVar2;
  if (iVar2 != 0) {
    *param_1 = _LAB_2c4f8c60;
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c673ca8(_LAB_2c4f8c78,_LAB_2c4f8c70);
}

