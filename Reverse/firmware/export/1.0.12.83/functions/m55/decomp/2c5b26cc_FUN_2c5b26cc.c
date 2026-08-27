/* FUN_2c5b26cc @ 0x2c5b26cc */

void FUN_2c5b26cc(undefined4 param_1,uint param_2)

{
  undefined4 uVar1;
  
  if ((param_2 & 0xff) < 3) {
    uVar1 = FUN_2c5abf68(param_1,param_2,0);
    FUN_2c5ac3dc(uVar1,1);
    FUN_2c5abf68();
    uVar1 = FUN_2c5ac3d0();
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,DAT_2c5b2420,0xa6,DAT_2c5b241c,DAT_2c5b2418,uVar1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,DAT_2c5b2704,0xa2,DAT_2c5b2700,DAT_2c5b26fc,DAT_2c5b26f8,param_2);
}

