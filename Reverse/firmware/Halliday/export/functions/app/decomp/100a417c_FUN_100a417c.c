/* FUN_100a417c @ 0x100a417c */

void FUN_100a417c(undefined4 param_1,undefined4 param_2)

{
  undefined1 auStack_24 [2];
  undefined1 local_22;
  undefined1 local_21;
  undefined4 local_1c;
  
  FUN_1011ea48(auStack_24,0,0x14);
  local_22 = 0xb;
  local_21 = (undefined1)param_1;
  local_1c = param_2;
  FUN_100a5b78((DAT_100a41cc - DAT_100a41c8) * 0x20 & 0xff00U | 0x4a0032,DAT_100a41d4,DAT_100a41d0,
               param_1,param_2);
  FUN_1009ece8(DAT_100a41d8,auStack_24);
  return;
}

