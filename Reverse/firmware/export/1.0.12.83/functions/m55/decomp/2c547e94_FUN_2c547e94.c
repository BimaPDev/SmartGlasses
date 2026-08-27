/* FUN_2c547e94 @ 0x2c547e94 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c547e94(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x50) = param_3;
  *(undefined4 *)(param_1 + 0x54) = param_4;
  uVar1 = FUN_2c5e317c(10);
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,_DAT_2c547ed4,0x120,_LAB_2c547ed0,_DAT_2c547ed8,_LAB_2c547ed0,
               *(undefined8 *)(param_1 + 0x50),uVar1);
}

