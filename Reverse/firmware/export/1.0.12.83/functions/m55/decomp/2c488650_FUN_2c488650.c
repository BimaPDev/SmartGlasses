/* FUN_2c488650 @ 0x2c488650 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c488650(undefined1 param_1,uint param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined1 uStack_18;
  undefined1 uStack_17;
  undefined1 uStack_16;
  int iStack_14;
  
  puVar1 = _LAB_2c4886ec;
  iStack_14 = *_LAB_2c4886e8;
  if (2 < param_2) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x8f,_LAB_2c4886fc,_LAB_2c4886f8,_LAB_2c4886f4,param_2);
  }
  FUN_2c644044(*_LAB_2c4886ec,0xffffffff,param_3,0);
  if (param_2 == 1) {
    _LAB_2c4886f0[1] = 0;
  }
  else if (param_2 == 2) {
    _LAB_2c4886f0[2] = 0;
  }
  else {
    *_LAB_2c4886f0 = 0;
  }
  FUN_2c644080(*puVar1);
  uStack_16 = 0;
  uStack_17 = (undefined1)param_2;
  uStack_18 = param_1;
  FUN_2c49737c(0x2c,&uStack_18,3);
  if (*_LAB_2c4886e8 == iStack_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

