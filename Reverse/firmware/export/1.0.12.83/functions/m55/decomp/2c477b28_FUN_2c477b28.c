/* FUN_2c477b28 @ 0x2c477b28 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c477b28(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uStack_14;
  
  iVar4 = *_LAB_2c477bd0;
  iVar2 = func_0x2c483574(0,param_2,param_3,0);
  piVar1 = _LAB_2c477bdc;
  if (iVar2 == 0) {
LAB_2c477b7a:
    if (*_LAB_2c477bd0 == iVar4) {
      return;
    }
  }
  else {
    if (*_LAB_2c477bd4 == '\x04') {
      FUN_2c4779f0(*_LAB_2c477bdc);
      iVar2 = func_0x2c483adc();
      if ((iVar2 == 0) || (*piVar1 != 3)) {
        iVar2 = func_0x2c483adc();
        iVar3 = *piVar1;
        if ((iVar2 != 0) || (iVar3 != 3)) {
                    /* WARNING: Subroutine does not return */
          TRACE(4,0x284,_LAB_2c477bec,_LAB_2c477be8,_LAB_2c477be4,_LAB_2c477be0,*_LAB_2c477bd8,iVar3
               );
        }
        goto LAB_2c477b68;
      }
    }
    else {
      iVar2 = func_0x2c483adc();
      if (iVar2 == 0) {
LAB_2c477b68:
        uStack_14 = 0;
        func_0x2c483c90(&uStack_14);
        FUN_2c482c68(&uStack_14);
        goto LAB_2c477b7a;
      }
    }
    if (*_LAB_2c477bd0 == iVar4) {
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x1aa,DAT_2c4778c4,DAT_2c4778c0,DAT_2c4778b8,DAT_2c4778bc);
    }
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

