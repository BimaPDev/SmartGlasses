/* FUN_2c63ccac @ 0x2c63ccac */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c63ccac(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iStack_18;
  int iStack_14;
  
  puVar2 = _LAB_2c63cd60;
  piVar1 = _LAB_2c63cd5c;
  iStack_14 = *_LAB_2c63cd54;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x40a,_LAB_2c63cd70,_LAB_2c63cd6c,_LAB_2c63cd74);
  }
  if (*_LAB_2c63cd58 != '\0') {
    if (*_LAB_2c63cd5c != 0) {
      iStack_18 = param_1;
      FUN_2c644044(*_LAB_2c63cd60,0xffffffff);
      iVar3 = FUN_2c4858f0(*piVar1,_LAB_2c63cd64,&iStack_18);
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        TRACE(4,0x419,_LAB_2c63cd70,_LAB_2c63cd6c,_LAB_2c63cd7c,_LAB_2c63cd78,param_1);
      }
      FUN_2c485820(*piVar1,iVar3);
      FUN_2c644080(*puVar2);
      if (*_LAB_2c63cd54 == iStack_14) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      stack_chk_fail();
    }
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x40f,_LAB_2c63cd70,_LAB_2c63cd6c,_LAB_2c63cd68);
}

