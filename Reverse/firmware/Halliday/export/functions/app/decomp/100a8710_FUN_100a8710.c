/* FUN_100a8710 @ 0x100a8710 */

undefined4 FUN_100a8710(int param_1,byte param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_10117c88(DAT_100a8738,0x321,DAT_100a8734,DAT_100a8730,param_4);
  }
  *(byte *)(param_1 + 9) = *(byte *)(param_1 + 9) & 0xfb | (param_2 & 1) << 2;
  return 0;
}

