/* FUN_2c57b2e0 @ 0x2c57b2e0 */

undefined4 FUN_2c57b2e0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 local_6c;
  undefined1 *local_68;
  undefined4 local_64;
  undefined1 local_60 [16];
  undefined1 *local_50;
  undefined4 local_4c;
  undefined1 local_48 [16];
  undefined1 local_38;
  undefined1 *local_34;
  undefined4 local_30;
  undefined1 local_2c [16];
  int local_1c;
  
  uVar1 = DAT_2c57b37c;
  local_1c = *DAT_2c57b378;
  local_64 = 0;
  local_60[0] = 0;
  local_4c = 0;
  local_48[0] = 0;
  local_30 = 0;
  local_2c[0] = 0;
  local_6c = DAT_2c57b37c;
  local_68 = local_60;
  local_50 = local_48;
  local_34 = local_2c;
  FUN_2c58c084(param_2,&local_6c,0);
  if (*(int *)(param_1 + 4) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_2c57e598(*(int *)(param_1 + 4),&local_50,local_38);
  }
  local_6c = uVar1;
  if (local_34 != local_2c) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (local_50 != local_48) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (local_68 != local_60) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (*DAT_2c57b378 == local_1c) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

