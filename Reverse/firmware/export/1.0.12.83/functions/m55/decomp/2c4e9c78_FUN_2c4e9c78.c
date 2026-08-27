/* FUN_2c4e9c78 @ 0x2c4e9c78 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c4e9c78(undefined1 *param_1)

{
  int *piVar1;
  int iVar2;
  
  FUN_2c4e9504();
  iVar2 = FUN_2c4e9950();
  piVar1 = _LAB_2c4e9cdc;
  if (iVar2 != 0) {
    iVar2 = func_0x2c4c2878(0,*_LAB_2c4e9cdc + 0x11c,1);
    if (*(int *)(*piVar1 + 0x118) != iVar2) {
                    /* WARNING: Subroutine does not return */
      TRACE(1,0x116,_LAB_2c4e9ce8,_LAB_2c4e9cec,_LAB_2c4e9ce4);
    }
    *param_1 = *(undefined1 *)(*piVar1 + 0x11c);
  }
  FUN_2c644080(*_LAB_2c4e9ce0);
  return 1;
}

