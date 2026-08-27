/* FUN_2c532340 @ 0x2c532340 */

void FUN_2c532340(void)

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
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
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
  
  local_58 = DAT_2c5323dc;
  local_14[0] = *DAT_2c5323e0;
  local_54 = 1;
  local_5c = 0;
  local_50 = DAT_2c5323e4;
  uStack_4c = 2;
  local_48 = DAT_2c5323e8;
  uStack_44 = 3;
  local_40 = DAT_2c5323ec;
  uStack_3c = 4;
  local_38 = DAT_2c5323f0;
  uStack_34 = 5;
  local_30 = DAT_2c5323f4;
  uStack_2c = 6;
  local_28 = DAT_2c5323f8;
  uStack_24 = 7;
  local_20 = DAT_2c5323fc;
  uStack_1c = 8;
  local_18 = DAT_2c532400;
  FUN_2c4fd9cc(DAT_2c532404,&local_5c,local_14,0,auStack_6c,auStack_60,auStack_64,auStack_70,
               auStack_68,auStack_74);
  if (*DAT_2c5323e0 == local_14[0]) {
    FUN_2c64c9c4(DAT_2c532404,DAT_2c53240c,DAT_2c532408);
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

