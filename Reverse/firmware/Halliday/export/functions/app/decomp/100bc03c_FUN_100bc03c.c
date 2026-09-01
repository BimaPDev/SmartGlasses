/* FUN_100bc03c @ 0x100bc03c */

void FUN_100bc03c(void)

{
  int iVar1;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 local_18;
  undefined1 local_17;
  byte local_16;
  undefined4 local_14;
  
  FUN_1011ea48(&local_1c,0,0x14);
  local_18 = 2;
  local_24 = DAT_100bc088;
  local_20 = DAT_100bc08c;
  iVar1 = FUN_1013131e();
  if (iVar1 != 0) {
    local_17 = 2;
    local_1c = DAT_100bc090;
  }
  local_16 = local_16 & 0xfc;
  FUN_100e74a8(&local_24);
  local_14 = DAT_100bc094;
  FUN_10136974(&local_24);
  return;
}

