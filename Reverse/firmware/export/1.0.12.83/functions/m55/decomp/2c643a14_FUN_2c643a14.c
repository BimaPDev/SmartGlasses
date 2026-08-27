/* FUN_2c643a14 @ 0x2c643a14 */

void FUN_2c643a14(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = DAT_2c643a48;
  if (param_1 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 4);
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x221,DAT_2c643a44,DAT_2c643a40,DAT_2c643a3c,uVar1,param_2);
}

