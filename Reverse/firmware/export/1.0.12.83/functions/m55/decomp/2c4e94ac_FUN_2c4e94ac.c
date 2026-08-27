/* FUN_2c4e94ac @ 0x2c4e94ac */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4e94ac(undefined4 param_1,undefined4 param_2)

{
  undefined4 extraout_r1;
  undefined4 uStack_10;
  uint uStack_c;
  
  uStack_c = *_LAB_2c4e94e0;
  uStack_10 = 0;
  FUN_2c49b954(&uStack_10,param_2,0);
  if ((*_LAB_2c4e94e0 ^ uStack_c) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail(uStack_10,extraout_r1,*_LAB_2c4e94e0 ^ uStack_c,0);
}

