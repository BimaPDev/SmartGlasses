/* FUN_1004375c @ 0x1004375c */

/* WARNING: Removing unreachable block (ram,0x10138bcc) */

byte FUN_1004375c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  byte bVar1;
  undefined4 extraout_r3;
  undefined2 uStack_1c;
  undefined1 uStack_1a;
  undefined1 uStack_19;
  undefined2 uStack_18;
  undefined2 uStack_16;
  undefined4 uStack_14;
  undefined4 uStack_10;
  int local_c;
  undefined4 uStack_8;
  
  local_c = *DAT_10043788;
  if (*DAT_10043788 != local_c) {
    uStack_10 = param_1;
    uStack_8 = param_3;
    param_1 = FUN_1013cdc0();
    param_2 = extraout_r3;
  }
  uStack_1c = (undefined2)param_1;
  uStack_1a = 9;
  uStack_19 = 0x83;
  uStack_10 = 0;
  local_c = 0;
  uStack_18 = 0;
  uStack_16 = 0;
  uStack_14 = param_2;
  bVar1 = FUN_1009ece8(DAT_100e7d68,&uStack_1c);
  return bVar1 ^ 1;
}

