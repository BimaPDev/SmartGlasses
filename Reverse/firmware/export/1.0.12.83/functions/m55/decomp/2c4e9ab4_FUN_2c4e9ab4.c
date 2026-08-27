/* FUN_2c4e9ab4 @ 0x2c4e9ab4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c4e9ab4(uint param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  FUN_2c4e9504();
  if (1 < param_1) {
                    /* WARNING: Subroutine does not return */
    TRACE(1,0x27a,_LAB_2c4e9b38,_LAB_2c4e9b34,_LAB_2c4e9b30,param_1);
  }
  iVar2 = FUN_2c4e9950();
  piVar1 = _LAB_2c4e9b3c;
  uVar3 = 0;
  if (iVar2 != 0) {
    iVar2 = func_0x2c4c2878(0,*_LAB_2c4e9b3c + 0x124,8);
    if (*(int *)(*piVar1 + 0x120) != iVar2) {
                    /* WARNING: Subroutine does not return */
      TRACE(1,0x281,_LAB_2c4e9b38,_LAB_2c4e9b34,_LAB_2c4e9b40);
    }
    uVar3 = *(undefined4 *)(*piVar1 + param_1 * 4 + 0x124);
  }
  FUN_2c644080(*_LAB_2c4e9b2c);
  return uVar3;
}

