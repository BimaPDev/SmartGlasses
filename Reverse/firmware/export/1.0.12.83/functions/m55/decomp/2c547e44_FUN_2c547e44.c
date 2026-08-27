/* FUN_2c547e44 @ 0x2c547e44 */

undefined8 FUN_2c547e44(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_2c5e31b4(10,param_1 + 0x50);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x50) = 0;
    *(undefined4 *)(param_1 + 0x54) = 0;
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,DAT_2c547e90,0x115,DAT_2c547e88,DAT_2c547e8c,DAT_2c547e88,
               *(undefined8 *)(param_1 + 0x50));
}

