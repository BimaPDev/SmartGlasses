/* FUN_10048cd8 @ 0x10048cd8 */

void FUN_10048cd8(void)

{
  int iVar1;
  undefined1 local_30;
  undefined1 local_2f;
  undefined1 local_2e;
  undefined1 local_2d;
  undefined1 local_2c;
  undefined1 local_2b;
  ushort local_2a;
  undefined4 local_24;
  ushort *local_20;
  undefined4 local_1c;
  ushort local_18;
  undefined1 local_16;
  undefined1 local_15;
  undefined1 local_14;
  undefined1 local_13;
  undefined1 local_12;
  undefined1 local_11;
  undefined1 local_10;
  int local_c;
  
  iVar1 = DAT_10048d6c;
  local_c = *DAT_10048d68;
  local_24 = 0;
  local_20 = (ushort *)0x0;
  local_1c = 0;
  (**(code **)(DAT_10048d6c + 0x18))(&local_30);
  local_10 = (**(code **)(iVar1 + 0xc))();
  local_18 = local_2a << 8 | local_2a >> 8;
  local_16 = local_2c;
  local_15 = local_2d;
  local_14 = local_2e;
  local_13 = local_2f;
  local_12 = local_30;
  local_11 = local_2b;
  local_24 = CONCAT22(local_24._2_2_,0x3102);
  local_20 = &local_18;
  local_1c = CONCAT13(local_1c._3_1_,0x80009);
  FUN_100506fc(&local_24);
  if (*DAT_10048d68 != local_c) {
    FUN_1013cdc0();
  }
  return;
}

