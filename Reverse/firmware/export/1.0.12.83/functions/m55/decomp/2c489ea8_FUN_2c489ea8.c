/* FUN_2c489ea8 @ 0x2c489ea8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c489ea8(void)

{
  int *piVar1;
  undefined1 *puVar2;
  int iVar3;
  
  piVar1 = _LAB_2c489ed0;
  if (*_LAB_2c489ed0 != 0) {
    puVar2 = (undefined1 *)FUN_2c6442f0(*_LAB_2c489ed0,0);
    if (puVar2 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_2c673ca8(_LAB_2c489ed4);
    }
    iVar3 = *piVar1;
    *puVar2 = 0;
    FUN_2c6442fc(iVar3);
  }
  return 0;
}

