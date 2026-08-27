/* FUN_2c49b530 @ 0x2c49b530 */

void FUN_2c49b530(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  byte local_d;
  int local_c;
  
  local_c = *DAT_2c49b5b8;
  iVar1 = FUN_2c49b318(0x13,&local_d,param_3,0);
  if (iVar1 == 0) {
    if (param_1 < 0xe10) {
      param_1 = 0xe10;
    }
    uVar2 = ((uint)((ulonglong)DAT_2c49b5bc * (ulonglong)(param_1 - 0xe10) >> 0x20) & 0x7ff) >> 3;
    if (((uVar2 ^ local_d) & 0x7f) != 0) {
      local_d = local_d & 0x80 | (byte)uVar2 & 0x7f;
      iVar1 = FUN_2c49b2c0(0x13);
      if (iVar1 != 0) goto LAB_2c49b59c;
    }
    if (*DAT_2c49b5b8 == local_c) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
LAB_2c49b59c:
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x13d,DAT_2c49b5cc,DAT_2c49b5c8,DAT_2c49b5c4,DAT_2c49b5c0);
}

