/* FUN_2c4b6170 @ 0x2c4b6170 */

void FUN_2c4b6170(int param_1,undefined4 param_2,undefined4 param_3)

{
  ushort local_1a;
  ushort local_18;
  ushort local_16;
  ushort local_14;
  ushort local_12;
  ushort local_10;
  ushort local_e;
  int local_c;
  
  local_c = *DAT_2c4b63e4;
  FUN_2c673e88(0x106d,&local_1a,param_3,0);
  FUN_2c673e88(0x1071,&local_18);
  FUN_2c673e88(0x1073,&local_10);
  FUN_2c673e88(0x1074,&local_16);
  FUN_2c673e88(0x1075,&local_14);
  FUN_2c673e88(0x1081,&local_12);
  FUN_2c673e88(0x10d7,&local_e);
  if (param_1 == 0) {
    FUN_2c6444fc(1);
    local_16 = local_16 & 0xffbf;
    FUN_2c673d68(0x1074);
    FUN_2c6444fc(1);
    local_e = local_e & 0xefff;
    local_14 = local_14 & 0xfff7;
    local_16 = local_16 & 0xffc3;
    local_10 = local_10 & 63999;
    FUN_2c673d68(0x10d7);
    FUN_2c673d68(0x1073,local_10);
    FUN_2c673d68(0x1074,local_16);
    local_12 = local_12 & 0xfffb;
    FUN_2c673d68(0x1081);
    local_18 = (ushort)(((uint)local_18 << 0x11) >> 0x11);
    FUN_2c673d68(0x1071);
    local_14 = local_14 & 0xfffe;
    FUN_2c673d68(0x1075);
    FUN_2c6444fc(1);
    local_14 = local_14 & 0xffef;
    FUN_2c673d68(0x1075);
    FUN_2c6444fc(1);
    local_1a = local_1a & 0x9fff;
    FUN_2c673d68(0x106d);
  }
  else {
    local_1a = local_1a | 0x6000;
    FUN_2c673d68(0x106d);
    FUN_2c6444fc(1);
    local_14 = local_14 | 0x10;
    FUN_2c673d68(0x1075);
    FUN_2c6444fc(1);
    if (param_1 << 0x1f < 0) {
      local_16 = local_16 | 0x18;
      local_10 = local_10 | 0x200;
      local_14 = local_14 | 8;
      local_12 = local_12 | 4;
    }
    if (param_1 << 0x1e < 0) {
      local_16 = local_16 | 0x24;
      local_10 = local_10 | 0x400;
      local_e = local_e | 0x1000;
    }
    FUN_2c673d68(0x10d7,local_e);
    FUN_2c673d68(0x1073,local_10);
    FUN_2c673d68(0x1074,local_16);
    local_18 = local_18 | 0x8000;
    FUN_2c673d68(0x1071);
    local_14 = local_14 | 1;
    FUN_2c673d68(0x1075);
    FUN_2c6444fc(1);
    local_16 = local_16 | 0x40;
    FUN_2c673d68(0x1074);
    FUN_2c673d68(0x1081,local_12);
    FUN_2c6444fc(1);
  }
  if (*DAT_2c4b63e4 != local_c) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return;
}

