/* FUN_2c4ea010 @ 0x2c4ea010 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c4ea010(int param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  
  FUN_2c4e9504();
  iVar2 = FUN_2c4e9950();
  piVar1 = _LAB_2c4ea094;
  if (iVar2 != 0) {
    iVar2 = func_0x2c4c2878(0,*_LAB_2c4ea094 + 0x14c,0x15c);
    if (*(int *)(*piVar1 + 0x148) != iVar2) {
                    /* WARNING: Subroutine does not return */
      TRACE(1,0x1c5,_LAB_2c4ea0a4,_LAB_2c4ea0a0,_LAB_2c4ea09c);
    }
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      TRACE(1,0x1c9,_LAB_2c4ea0a4,_LAB_2c4ea0a0,_LAB_2c4ea0a8);
    }
    if (0xf < param_2) {
      param_2 = 0x10;
    }
    FUN_2c674668(param_1,*piVar1 + 0x26c,param_2);
  }
  FUN_2c644080(*_LAB_2c4ea098);
  return 1;
}

