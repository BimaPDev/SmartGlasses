/* FUN_1000ab14 @ 0x1000ab14 */

void FUN_1000ab14(byte param_1,undefined4 param_2)

{
  undefined1 auStack_28 [2];
  undefined1 local_26;
  byte local_25;
  undefined4 local_20;
  int local_14;
  
  local_14 = *DAT_1000ab64;
  FUN_1011ea48(auStack_28,0,0x14,0);
  local_26 = 0x24;
  local_25 = param_1 & 0xf | *(byte *)(DAT_1000ab68 + 10) & 0xf0;
  local_20 = param_2;
  FUN_1009ece8(DAT_1000ab6c,auStack_28);
  if (*DAT_1000ab64 != local_14) {
    FUN_1013cdc0();
  }
  return;
}

