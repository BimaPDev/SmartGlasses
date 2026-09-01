/* FUN_1000e69c @ 0x1000e69c */

void FUN_1000e69c(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined1 auStack_28 [2];
  undefined2 local_26;
  undefined1 local_24;
  undefined4 local_20;
  int local_14;
  
  local_14 = *(int *)PTR_DAT_1000e70c;
  FUN_1011ea48(auStack_28,0,0x14,0);
  local_26 = 0xd608;
  local_24 = 1;
  local_20 = param_1;
  FUN_100a5b78(DAT_1000e718 | ((int)PTR_DAT_1000e710 - (int)PTR_DAT_1000e714) * 0x20 & 0xff00U,
               DAT_1000e720,DAT_1000e71c,param_1);
  if (param_2 == 0) goto LAB_1000e6fc;
  uVar1 = FUN_1009e224();
  FUN_1009ece8(uVar1,auStack_28);
  while( true ) {
    if (*(int *)PTR_DAT_1000e70c == local_14) break;
    FUN_1013cdc0();
LAB_1000e6fc:
    uVar1 = FUN_1009e224();
    FUN_1009edc4(uVar1,auStack_28);
  }
  return;
}

