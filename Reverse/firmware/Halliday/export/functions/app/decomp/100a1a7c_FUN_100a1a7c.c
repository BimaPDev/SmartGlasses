/* FUN_100a1a7c @ 0x100a1a7c */

void FUN_100a1a7c(undefined1 param_1,undefined1 param_2,int param_3,int param_4)

{
  undefined1 auStack_2c [2];
  undefined1 local_2a;
  undefined1 local_29;
  int local_24;
  undefined4 local_20;
  
  FUN_1011ea48(auStack_2c,0,0x14);
  if ((param_3 != 0) && (param_4 != 0)) {
    local_24 = thunk_FUN_1009f30c(param_4 + 1,DAT_100a1af0);
    if (local_24 == 0) {
      FUN_100a5b78((DAT_100a1af4 - DAT_100a1af8) * 0x20 & 0xff00U | 0x310011,DAT_100a1b00,
                   DAT_100a1afc);
      return;
    }
    FUN_1011ea48(local_24,0,param_4 + 1);
    FUN_1011ea40(local_24,param_3,param_4);
    local_20 = DAT_100a1b04;
  }
  local_2a = param_1;
  local_29 = param_2;
  FUN_1009ece8(DAT_100a1b08,auStack_2c);
  return;
}

