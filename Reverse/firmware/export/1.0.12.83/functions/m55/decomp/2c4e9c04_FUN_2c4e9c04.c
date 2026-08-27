/* FUN_2c4e9c04 @ 0x2c4e9c04 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c4e9c04(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  
  FUN_2c4e9504();
  iVar2 = FUN_2c4e9950();
  piVar1 = _LAB_2c4e9c64;
  if (iVar2 != 0) {
    iVar2 = func_0x2c4c2878(0,*_LAB_2c4e9c64 + 0x14c,0x15c);
    if (*(int *)(*piVar1 + 0x148) != iVar2) {
                    /* WARNING: Subroutine does not return */
      TRACE(1,0x250,_LAB_2c4e9c70,_LAB_2c4e9c74,_LAB_2c4e9c6c);
    }
    *param_1 = *(undefined4 *)(*piVar1 + 0x2a4);
  }
  FUN_2c644080(*_LAB_2c4e9c68);
  return 1;
}

