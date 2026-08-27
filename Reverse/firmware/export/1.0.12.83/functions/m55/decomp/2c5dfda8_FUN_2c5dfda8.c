/* FUN_2c5dfda8 @ 0x2c5dfda8 */

void FUN_2c5dfda8(int param_1,uint param_2,undefined2 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = DAT_2c5dfdd8;
  if (10 < param_2) {
    param_2 = 0xb;
  }
  *(char *)(param_1 + 0x54) = (char)param_2;
  *(undefined2 *)(param_1 + 0x56) = param_3;
  *(undefined4 *)(param_1 + 0x58) = param_4;
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,DAT_2c5dfde0,0x2c7,DAT_2c5dfddc,uVar1,param_2);
}

