/* FUN_2c488594 @ 0x2c488594 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c488594(undefined1 param_1,uint param_2,int param_3)

{
  undefined4 *puVar1;
  undefined1 uStack_20;
  undefined1 uStack_1f;
  undefined1 uStack_1e;
  int iStack_1c;
  
  puVar1 = _LAB_2c48863c;
  iStack_1c = *_LAB_2c488638;
  if (2 < param_2) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x6f,_LAB_2c48864c,_LAB_2c488648,_LAB_2c488644,param_2);
  }
  FUN_2c644044(*_LAB_2c48863c,0xffffffff,param_3,0);
  if (param_2 == 1) {
    if (param_3 != 0) {
      _LAB_2c488640[1] = param_3;
    }
  }
  else if (param_2 == 2) {
    if (param_3 != 0) {
      _LAB_2c488640[2] = param_3;
    }
  }
  else if (param_3 != 0) {
    *_LAB_2c488640 = param_3;
  }
  FUN_2c644080(*puVar1);
  uStack_1e = 1;
  uStack_1f = (undefined1)param_2;
  uStack_20 = param_1;
  FUN_2c49737c(0x2c,&uStack_20,3);
  if (*_LAB_2c488638 == iStack_1c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

