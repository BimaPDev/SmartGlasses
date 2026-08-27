/* FUN_2c4e90e0 @ 0x2c4e90e0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4e90e0(undefined4 param_1,undefined4 param_2)

{
  undefined4 extraout_r1;
  undefined1 uStack_d;
  uint uStack_c;
  
  uStack_c = *_LAB_2c4e9118;
  uStack_d = 0;
  FUN_2c48b9c8(&uStack_d,param_2,0);
  if ((*_LAB_2c4e9118 ^ uStack_c) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail(uStack_d,extraout_r1,*_LAB_2c4e9118 ^ uStack_c,0);
}

