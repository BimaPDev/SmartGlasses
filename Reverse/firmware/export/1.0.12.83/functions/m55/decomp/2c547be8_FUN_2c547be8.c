/* FUN_2c547be8 @ 0x2c547be8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c547be8(int param_1,undefined4 param_2)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x28) = param_2;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  iVar1 = FUN_2c5e317c(0xc,param_2,param_2,0,1);
  if (iVar1 != 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,_DAT_2c547c24,0xd5,_LAB_2c547c1c,_LAB_2c547c20,_LAB_2c547c1c);
}

