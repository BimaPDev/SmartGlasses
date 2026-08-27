/* FUN_2c497ee8 @ 0x2c497ee8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c497ee8(undefined4 param_1)

{
  undefined4 extraout_r1;
  byte bStack_10;
  byte bStack_f;
  byte bStack_e;
  uint uStack_c;
  
  uStack_c = *_LAB_2c497f34;
  FUN_2c497684(param_1,0x9f,&bStack_10,3);
  if ((*_LAB_2c497f34 ^ uStack_c) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail((uint)bStack_f << 8 | (uint)bStack_10 << 0x10 | (uint)bStack_e,extraout_r1,
                 *_LAB_2c497f34 ^ uStack_c,0);
}

