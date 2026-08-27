/* FUN_2c63ecb0 @ 0x2c63ecb0 */

void FUN_2c63ecb0(int param_1)

{
  int iVar1;
  int unaff_r4;
  undefined4 uStack_28;
  undefined4 uStack_24;
  uint uStack_1c;
  int iStack_18;
  
  iStack_18 = unaff_r4 + -0xbd;
  uStack_1c = *DAT_2c63ed38;
  uStack_28 = 0xffffffff;
  uStack_24 = 0xffffffff;
  if (param_1 == 1) {
    iVar1 = FUN_2c5e31b4(0x16,&uStack_28);
  }
  else if (param_1 == 2) {
    iVar1 = FUN_2c5e31b4(0x17,&uStack_28);
  }
  else {
    if (param_1 != 0) goto LAB_2c63ece2;
    iVar1 = FUN_2c5e31b4(0x15,&uStack_28);
  }
  if (iVar1 != 0) {
    if ((*DAT_2c63ed38 ^ uStack_1c) == 0) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    stack_chk_fail(uStack_28,uStack_24,*DAT_2c63ed38 ^ uStack_1c,0);
  }
LAB_2c63ece2:
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(3,DAT_2c63ed40,0x37,DAT_2c63ed44,DAT_2c63ed3c,param_1);
}

