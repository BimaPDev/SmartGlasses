/* FUN_2c542710 @ 0x2c542710 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c542710(undefined4 param_1,int param_2)

{
  if (*(short *)(param_2 + 0x26) == 4) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c5427fc,0x37,_DAT_2c5427f4,_LAB_2c5427f8,_DAT_2c5427f4);
  }
  if ((*_LAB_2c5427f0 ^ *_LAB_2c5427f0) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail(0xffffffff,param_2,*_LAB_2c5427f0 ^ *_LAB_2c5427f0,0);
}

