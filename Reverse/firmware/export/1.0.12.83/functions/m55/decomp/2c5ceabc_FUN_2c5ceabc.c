/* FUN_2c5ceabc @ 0x2c5ceabc */

undefined4 FUN_2c5ceabc(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined1 *local_4c [2];
  undefined1 auStack_44 [16];
  undefined1 *local_34 [2];
  undefined1 auStack_2c [16];
  int local_1c;
  
  local_1c = *DAT_2c5ceb2c;
  local_4c[0] = auStack_44;
  FUN_2c5ce264(local_4c,DAT_2c5ceb28 + -5,DAT_2c5ceb28,0);
  local_34[0] = auStack_2c;
  FUN_2c5ce264(local_34,DAT_2c5ceb30 + -5);
  uVar1 = FUN_2c5ce9d4(param_1,param_2,local_4c,local_34);
  if (local_34[0] != auStack_2c) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (local_4c[0] != auStack_44) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (*DAT_2c5ceb2c == local_1c) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

