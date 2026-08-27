/* FUN_2c4e9a40 @ 0x2c4e9a40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c4e9a40(undefined1 *param_1)

{
  int *piVar1;
  int iVar2;
  
  FUN_2c4e9504();
  iVar2 = FUN_2c4e9950();
  piVar1 = _LAB_2c4e9aa0;
  if (iVar2 != 0) {
    iVar2 = func_0x2c4c2878(0,*_LAB_2c4e9aa0 + 0x14c,0x15c);
    if (*(int *)(*piVar1 + 0x148) != iVar2) {
                    /* WARNING: Subroutine does not return */
      TRACE(1,0x227,_LAB_2c4e9aac,_LAB_2c4e9ab0,_LAB_2c4e9aa8);
    }
    *param_1 = *(undefined1 *)(*piVar1 + 0x2a0);
  }
  FUN_2c644080(*_LAB_2c4e9aa4);
  return 1;
}

