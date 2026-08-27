/* FUN_2c4e923c @ 0x2c4e923c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4e923c(uint param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 extraout_r1;
  undefined1 auStack_48 [17];
  undefined1 auStack_37 [16];
  undefined1 auStack_27 [19];
  uint uStack_14;
  
  uStack_14 = *_LAB_2c4e9288;
  if (param_1 < 5) {
    func_0x2c4892fc(param_1,auStack_48,param_3,0);
    FUN_2c66b450(param_2,param_3,_LAB_2c4e928c,auStack_37,auStack_27);
    param_2 = extraout_r1;
  }
  if ((*_LAB_2c4e9288 ^ uStack_14) != 0) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail(param_1 < 5,param_2,*_LAB_2c4e9288 ^ uStack_14,0);
  }
  return;
}

