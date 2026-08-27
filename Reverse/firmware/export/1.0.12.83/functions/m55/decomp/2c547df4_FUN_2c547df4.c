/* FUN_2c547df4 @ 0x2c547df4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c547df4(int param_1,undefined4 param_2)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x48) = param_2;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  iVar1 = FUN_2c5e317c(0x12,param_2,param_2,0,1);
  if (iVar1 != 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,_DAT_2c547e30,0x10b,_DAT_2c547e28,_LAB_2c547e2c,_DAT_2c547e28);
}

