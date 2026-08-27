/* FUN_2c4e9ef8 @ 0x2c4e9ef8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c4e9ef8(int param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  
  FUN_2c4e9504();
  iVar2 = FUN_2c4e9950();
  piVar1 = _LAB_2c4e9f7c;
  if (iVar2 != 0) {
    iVar2 = func_0x2c4c2878(0,*_LAB_2c4e9f7c + 0x14c,0x15c);
    if (*(int *)(*piVar1 + 0x148) != iVar2) {
                    /* WARNING: Subroutine does not return */
      TRACE(1,0x1f7,_LAB_2c4e9f8c,_LAB_2c4e9f88,_LAB_2c4e9f84);
    }
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      TRACE(1,0x1fb,_LAB_2c4e9f8c,_LAB_2c4e9f88,_LAB_2c4e9f90);
    }
    if (0x23 < param_2) {
      param_2 = 0x24;
    }
    FUN_2c674668(param_1,*piVar1 + 0x27c,param_2);
  }
  FUN_2c644080(*_LAB_2c4e9f80);
  return 1;
}

