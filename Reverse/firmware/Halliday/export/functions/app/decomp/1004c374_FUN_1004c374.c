/* FUN_1004c374 @ 0x1004c374 */

void FUN_1004c374(int param_1)

{
  int iVar1;
  undefined4 local_54;
  undefined1 auStack_50 [60];
  int local_14;
  
  local_14 = *DAT_1004c3e4;
  iVar1 = *DAT_1004c3e8;
  if (iVar1 != 0) {
    FUN_1012bbea(*(undefined4 *)(iVar1 + 4),param_1,1);
    FUN_10097aec(*(undefined4 *)(iVar1 + 8),DAT_1004c3ec,param_1);
    FUN_1002f6f0(*(undefined4 *)(iVar1 + 0xc),param_1 / 0x14 & 0xff);
    local_54 = 0;
    FUN_1011ea48(auStack_50,0,0x3c);
    FUN_1013d306(&local_54,0,0x40,DAT_1004c3f0,param_1);
    FUN_10052c38(1,1,&local_54);
  }
  if (*DAT_1004c3e4 != local_14) {
    FUN_1013cdc0();
  }
  return;
}

