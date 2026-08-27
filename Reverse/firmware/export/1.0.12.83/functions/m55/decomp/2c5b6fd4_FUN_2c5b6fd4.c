/* FUN_2c5b6fd4 @ 0x2c5b6fd4 */

void FUN_2c5b6fd4(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_50 [68];
  int local_c;
  
  local_c = param_2;
  uVar2 = FUN_2c6684cc(param_2);
  *(undefined4 *)(param_1 + 0x2c) = uVar2;
  FUN_2c638730(*(undefined4 *)(param_1 + 0x10),local_c);
  if ((0 < *(int *)(param_1 + 0x28)) && (*(int *)(param_1 + 0x28) < *(int *)(param_1 + 0x2c))) {
    local_c = *DAT_2c5b6e48;
    if ((*(int *)(param_1 + 4) != 0) &&
       (iVar1 = FUN_2c606b94(*(int *)(param_1 + 4),1,*(int *)(param_1 + 0x2c),0), iVar1 != 0)) {
      FUN_2c5b5db0(auStack_50,*(undefined4 *)(param_1 + 4),0,0xff,DAT_2c5b6e60,DAT_2c5b6e5c,0,
                   DAT_2c5b6e58,0xfa);
      FUN_2c62e8ec(auStack_50);
      if (*DAT_2c5b6e48 == local_c) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      stack_chk_fail();
    }
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,DAT_2c5b6e54,0xe7,DAT_2c5b6e50,DAT_2c5b6e4c);
  }
  local_c = *DAT_2c5b6fa8;
  if ((*(int *)(param_1 + 4) != 0) && (iVar1 = FUN_2c606b94(*(int *)(param_1 + 4),1), iVar1 == 0)) {
    FUN_2c5b5db0(auStack_50,*(undefined4 *)(param_1 + 4),0xff,0,0,DAT_2c5b6fc0,DAT_2c5b6fbc,
                 DAT_2c5b6fb8,0xfa);
    FUN_2c62e8ec(auStack_50);
    if (*DAT_2c5b6fa8 == local_c) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,DAT_2c5b6fb4,0xf6,DAT_2c5b6fb0,DAT_2c5b6fac);
}

