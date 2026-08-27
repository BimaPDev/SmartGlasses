/* FUN_2c4e1600 @ 0x2c4e1600 */

undefined4 FUN_2c4e1600(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined1 auStack_20 [12];
  int local_14;
  
  local_14 = *DAT_2c4e164c;
  FUN_2c4e2788(auStack_20,param_1 + 0x10c,param_3,0);
  uVar1 = (**(code **)(**(int **)(param_1 + 0x104) + 0x20))
                    (*(int **)(param_1 + 0x104),param_2,param_3);
  FUN_2c4e279e(auStack_20);
  if (*DAT_2c4e164c != local_14) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return uVar1;
}

