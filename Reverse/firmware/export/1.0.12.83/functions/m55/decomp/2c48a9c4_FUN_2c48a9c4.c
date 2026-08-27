/* FUN_2c48a9c4 @ 0x2c48a9c4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c48a9c4(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = _LAB_2c48aa14;
  if (*_LAB_2c48aa14 != 0) {
    FUN_2c644044(*_LAB_2c48aa14,0xffffffff,param_2);
  }
  iVar2 = FUN_2c674238(_LAB_2c48aa18,param_1,param_2);
  if (*piVar1 != 0) {
    FUN_2c644080(*piVar1);
  }
  if (iVar2 == 0) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,0xf8,_LAB_2c48aa24,_LAB_2c48aa20,_LAB_2c48aa1c);
}

