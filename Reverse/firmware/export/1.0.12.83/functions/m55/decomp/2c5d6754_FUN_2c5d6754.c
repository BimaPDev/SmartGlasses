/* FUN_2c5d6754 @ 0x2c5d6754 */

void FUN_2c5d6754(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  char local_d;
  int local_c;
  
  local_c = *DAT_2c5d67ec;
  if (param_1 == 3) {
    uVar1 = 1;
  }
  else if (param_1 == 0) {
    uVar1 = 2;
  }
  else if (param_1 == 5) {
    uVar1 = 3;
  }
  else {
    uVar1 = 1;
  }
  iVar2 = FUN_2c640164(uVar1,&local_d,param_3,0);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,DAT_2c5d67f8,0x146,DAT_2c5d67f4,DAT_2c5d67f0,param_1);
  }
  if (local_d != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,DAT_2c5d67f8,0x142,DAT_2c5d67f4,DAT_2c5d67fc,param_1);
  }
  if (param_1 == 3) {
    uVar1 = 1;
  }
  else if (param_1 == 0) {
    uVar1 = 2;
  }
  else if (param_1 == 5) {
    uVar1 = 3;
  }
  else {
    uVar1 = 1;
  }
  FUN_2c63f8e4(uVar1);
  if (*DAT_2c5d67ec != local_c) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return;
}

