/* FUN_2c00d570 @ 0x2c00d570 */

void FUN_2c00d570(undefined4 param_1,int param_2)

{
  uint uVar1;
  int in_r12;
  char in_ZR;
  int in_stack_0000000c;
  char cStack_1;
  
  if ((in_ZR == '\0') && (0xb < param_2 - 1U)) {
    uVar1 = (uint)*(byte *)(in_r12 + 3);
  }
  else {
    uVar1 = (uint)*(byte *)(in_r12 + 3);
    if (((int)uVar1 <= (int)(&cStack_1)[param_2]) && (uVar1 != 0)) {
      if (*DAT_2c00d5f4 == in_stack_0000000c) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_2c0084a8();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c00c25c(DAT_2c00d600,param_2,uVar1);
}

