/* FUN_2c547d50 @ 0x2c547d50 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c547d50(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_2c5e31b4(0x10,param_1 + 0x38);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x38) = 0;
    *(undefined4 *)(param_1 + 0x3c) = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,_DAT_2c547da0,0xf6,_DAT_2c547d98,_DAT_2c547d9c,_DAT_2c547d98,
               *(undefined8 *)(param_1 + 0x38));
}

