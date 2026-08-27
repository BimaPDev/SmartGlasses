/* FUN_2c581398 @ 0x2c581398 */

void FUN_2c581398(void)

{
  undefined1 auStack_74 [4];
  undefined1 auStack_70 [4];
  undefined1 auStack_6c [4];
  undefined1 auStack_68 [4];
  undefined1 auStack_64 [4];
  undefined1 auStack_60 [4];
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  int local_14 [2];
  
  local_5c = 1;
  local_14[0] = *DAT_2c581438;
  local_58 = DAT_2c581434;
  local_3c = 0;
  local_54 = 2;
  uStack_50 = DAT_2c58143c;
  local_4c = 3;
  uStack_48 = DAT_2c581440;
  local_44 = 4;
  uStack_40 = DAT_2c581444;
  local_38 = DAT_2c581448;
  uStack_34 = 5;
  local_30 = DAT_2c58144c;
  uStack_2c = 6;
  local_28 = DAT_2c581450;
  uStack_24 = 7;
  local_20 = DAT_2c581454;
  uStack_1c = 8;
  local_18 = DAT_2c581458;
  FUN_2c4fd9cc(DAT_2c58145c,&local_5c,local_14,0,auStack_6c,auStack_60,auStack_64,auStack_70,
               auStack_68,auStack_74);
  if (*DAT_2c581438 == local_14[0]) {
    FUN_2c64c9c4(DAT_2c58145c,DAT_2c581464,DAT_2c581460);
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

