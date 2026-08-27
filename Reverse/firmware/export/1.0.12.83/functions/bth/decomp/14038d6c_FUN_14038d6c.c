/* FUN_14038d6c @ 0x14038d6c */

void FUN_14038d6c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined1 param_5,undefined4 *param_6,undefined1 param_7,undefined1 param_8,
                 undefined1 param_9,undefined1 param_10,undefined2 param_11,undefined4 param_12)

{
  undefined4 local_4c;
  undefined3 uStack_48;
  undefined1 local_45;
  undefined4 local_44;
  undefined4 local_40;
  undefined2 local_3c;
  undefined1 uStack_3a;
  undefined1 uStack_39;
  undefined1 local_38;
  undefined1 local_37;
  undefined2 local_36;
  undefined4 uStack_34;
  undefined4 local_30;
  int local_2c;
  
  local_2c = *DAT_14038e9c;
  FUN_1402a6e8(4,0x3d9,DAT_14038ea4,DAT_14038ea8,DAT_14038ea0,param_1,param_2,param_3);
  FUN_1402a6e8(4,0x3da,DAT_14038ea4,DAT_14038ea8,DAT_14038eac,param_4,param_5,param_7,param_8);
  FUN_1402a6e8(4,0x3db,DAT_14038ea4,DAT_14038ea8,DAT_14038eb0,param_9,param_10,param_11);
  FUN_1402a6e8(4,0x3dc,DAT_14038ea4,DAT_14038ea8,DAT_14038eb4);
  FUN_1402a9fc(DAT_14038eb8,1,6,param_6);
  local_4c = *DAT_14038ebc;
  _uStack_48 = CONCAT13((char)param_1,(int3)DAT_14038ebc[1]);
  uStack_34 = DAT_14038ebc[6];
  local_40 = *param_6;
  local_44._0_2_ = CONCAT11((char)param_3,(char)param_2);
  local_44 = CONCAT13(param_5,(int3)CONCAT22((short)param_4,(undefined2)local_44));
  _local_3c = CONCAT13(param_8,CONCAT12(param_7,*(undefined2 *)(param_6 + 1)));
  local_30 = param_12;
  _local_38 = CONCAT22(param_11,CONCAT11(param_10,param_9));
  FUN_140315b0(&local_4c,0x20);
  if (*DAT_14038e9c == local_2c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

