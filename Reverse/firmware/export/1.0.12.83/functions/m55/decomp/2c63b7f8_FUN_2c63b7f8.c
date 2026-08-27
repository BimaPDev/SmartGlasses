/* FUN_2c63b7f8 @ 0x2c63b7f8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c63b7f8(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iStack_18;
  int iStack_14;
  
  puVar2 = _LAB_2c63b8ac;
  piVar1 = _LAB_2c63b8a8;
  iStack_14 = *_LAB_2c63b8a0;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x1d5,_LAB_2c63b8bc,_LAB_2c63b8b8,_LAB_2c63b8c0);
  }
  if (*_LAB_2c63b8a4 != '\0') {
    if (*_LAB_2c63b8a8 != 0) {
      iStack_18 = param_1;
      FUN_2c644044(*_LAB_2c63b8ac,0xffffffff);
      iVar3 = FUN_2c4858f0(*piVar1,_LAB_2c63b8b0,&iStack_18);
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        TRACE(4,0x1e2,_LAB_2c63b8bc,_LAB_2c63b8b8,_LAB_2c63b8c8,_LAB_2c63b8c4,param_1);
      }
      FUN_2c485820(*piVar1,iVar3);
      FUN_2c644080(*puVar2);
      if (*_LAB_2c63b8a0 == iStack_14) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      stack_chk_fail();
    }
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x1d9,_LAB_2c63b8bc,_LAB_2c63b8b8,_LAB_2c63b8b4);
}

