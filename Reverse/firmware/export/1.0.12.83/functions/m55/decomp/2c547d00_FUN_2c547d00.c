/* FUN_2c547d00 @ 0x2c547d00 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c547d00(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x38) = param_2;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  uVar1 = FUN_2c5e317c(0x10,param_2,param_2,0,1);
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,_DAT_2c547d4c,0xf0,_DAT_2c547d44,_DAT_2c547d48,_DAT_2c547d44,
               *(undefined8 *)(param_1 + 0x38),uVar1);
}

