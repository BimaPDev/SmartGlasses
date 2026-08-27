/* FUN_2c477e98 @ 0x2c477e98 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c477e98(int param_1)

{
  if (param_1 != 0) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x2f6,_LAB_2c4780f0,_LAB_2c4780ec,_LAB_2c4780e8,_LAB_2c4780e4,
          *(undefined4 *)(param_1 + 0x14));
  }
  if (*_LAB_2c478430 == *_LAB_2c4780e0) {
                    /* WARNING: Could not recover jumptable at 0x2c6741f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_2c6741f4)(0x711,_LAB_2c478438,_LAB_2c478434);
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

