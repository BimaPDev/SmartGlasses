/* FUN_1000c57c @ 0x1000c57c */

void FUN_1000c57c(undefined4 *param_1)

{
  int iVar1;
  undefined1 auStack_28 [2];
  undefined1 local_26;
  undefined4 local_20;
  int local_14;
  
  local_14 = *DAT_1000c5c4;
  iVar1 = FUN_1009e224();
  if (iVar1 != 0) {
    FUN_1011ea48(auStack_28,0,0x14);
    local_26 = 0x16;
    local_20 = *param_1;
    FUN_1009ece8(iVar1,auStack_28);
  }
  if (*DAT_1000c5c4 != local_14) {
    FUN_1013cdc0();
  }
  return;
}

