/* FUN_2c593c2c @ 0x2c593c2c */

void FUN_2c593c2c(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined1 *local_64;
  undefined4 local_60;
  undefined1 local_5c [16];
  undefined1 *local_4c;
  undefined4 local_48;
  undefined1 local_44 [16];
  undefined1 *local_34;
  undefined4 local_30;
  undefined1 local_2c [16];
  int local_1c;
  
  uVar1 = DAT_2c593ce4;
  local_1c = *DAT_2c593cd8;
  if (*(char *)(*(int *)(param_1 + 8) + 8) == '\0') {
    if (*DAT_2c593cd8 == local_1c) {
      FUN_2c593ae0(param_1,DAT_2c593ce0,0,0);
      return;
    }
  }
  else {
    local_6c = *(undefined4 *)(param_2 + 4);
    local_60 = 0;
    local_70 = DAT_2c593cdc;
    local_5c[0] = 0;
    local_48 = 0;
    local_44[0] = 0;
    local_30 = 0;
    local_2c[0] = 0;
    local_68 = DAT_2c593ce4;
    local_64 = local_5c;
    local_4c = local_44;
    local_34 = local_2c;
    FUN_2c5931e0(param_1,&local_70,&local_68,param_3);
    local_68 = uVar1;
    if (local_34 != local_2c) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
    if (local_4c != local_44) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
    if (local_64 != local_5c) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
    if (*DAT_2c593cd8 == local_1c) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

