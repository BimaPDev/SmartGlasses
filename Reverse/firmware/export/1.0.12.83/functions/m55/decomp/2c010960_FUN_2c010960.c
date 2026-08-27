/* FUN_2c010960 @ 0x2c010960 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c010960(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 extraout_r1;
  ushort uStack_e;
  uint uStack_c;
  
  uStack_c = *_DAT_2c010998;
  FUN_2c008e4c(0x5e,&uStack_e,param_3,0);
  if ((*_DAT_2c010998 ^ uStack_c) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c0084a8((uStack_e & 0x3ff) >> 9,extraout_r1,*_DAT_2c010998 ^ uStack_c,0);
}

