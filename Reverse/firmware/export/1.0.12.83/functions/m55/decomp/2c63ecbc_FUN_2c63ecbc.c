/* FUN_2c63ecbc @ 0x2c63ecbc */

void FUN_2c63ecbc(int param_1)

{
  int iVar1;
  undefined4 local_18;
  undefined4 uStack_14;
  uint local_c;
  
  local_c = *DAT_2c63ed38;
  local_18 = 0xffffffff;
  uStack_14 = 0xffffffff;
  if (param_1 == 1) {
    iVar1 = FUN_2c5e31b4(0x16,&local_18);
  }
  else if (param_1 == 2) {
    iVar1 = FUN_2c5e31b4(0x17,&local_18);
  }
  else {
    if (param_1 != 0) goto LAB_2c63ece2;
    iVar1 = FUN_2c5e31b4(0x15,&local_18);
  }
  if (iVar1 != 0) {
    if ((*DAT_2c63ed38 ^ local_c) == 0) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    stack_chk_fail(local_18,uStack_14,*DAT_2c63ed38 ^ local_c,0);
  }
LAB_2c63ece2:
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(3,DAT_2c63ed40,0x37,DAT_2c63ed44,DAT_2c63ed3c,param_1);
}

